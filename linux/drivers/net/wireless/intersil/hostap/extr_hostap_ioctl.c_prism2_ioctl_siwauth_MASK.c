
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_6__ {int tkip_countermeasures; int drop_unencrypted; int auth_algs; int wpa; int host_roaming; int privacy_invoked; int ieee_802_1x; TYPE_1__* func; int sta_fw_ver; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_5__ {int (* reset_port ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;






 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 struct hostap_interface* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4,
    struct iw_request_info *VAR_5,
    struct iw_param *VAR_6, char *VAR_7)
{
 struct hostap_interface *VAR_8 = FUNC_4(VAR_4);
 local_info_t *VAR_9 = VAR_8->local;

 switch (VAR_6->flags & VAR_3) {
 case 128:
 case 135:
 case 136:
 case 133:




  break;
 case 130:
  VAR_9->tkip_countermeasures = VAR_6->value;
  break;
 case 134:
  VAR_9->drop_unencrypted = VAR_6->value;
  break;
 case 137:
  VAR_9->auth_algs = VAR_6->value;
  break;
 case 129:
  if (VAR_6->value == 0) {
   VAR_9->wpa = 0;
   if (VAR_9->sta_fw_ver < FUNC_0(1,7,0))
    break;
   FUNC_5(VAR_4, "", 0);
   VAR_9->host_roaming = 0;
   VAR_9->privacy_invoked = 0;
   if (FUNC_3(VAR_4, VAR_2,
         0) ||
       FUNC_2(VAR_9) ||
       FUNC_1(VAR_9) ||
       VAR_9->func->reset_port(VAR_4))
    return -VAR_0;
   break;
  }
  if (VAR_9->sta_fw_ver < FUNC_0(1,7,0))
   return -VAR_1;
  VAR_9->host_roaming = 2;
  VAR_9->privacy_invoked = 1;
  VAR_9->wpa = 1;
  if (FUNC_3(VAR_4, VAR_2, 1) ||
      FUNC_2(VAR_9) ||
      FUNC_1(VAR_9) ||
      VAR_9->func->reset_port(VAR_4))
   return -VAR_0;
  break;
 case 131:
  VAR_9->ieee_802_1x = VAR_6->value;
  break;
 case 132:
  VAR_9->privacy_invoked = VAR_6->value;
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
