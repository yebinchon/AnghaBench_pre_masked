
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int sa_data; int sa_family; } ;
struct net_device {int * dev_addr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_5__ {int * remote_addr; } ;
struct TYPE_6__ {TYPE_1__ wds; } ;
struct hostap_interface {int type; TYPE_2__ u; TYPE_4__* local; } ;
struct TYPE_8__ {int * bssid; TYPE_3__* func; int * assoc_ap_addr; } ;
typedef TYPE_4__ local_info_t ;
struct TYPE_7__ {int (* get_rid ) (struct net_device*,int ,int *,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int *,int *,int ) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
         struct iw_request_info *VAR_5,
         struct sockaddr *VAR_6, char *VAR_7)
{
 struct hostap_interface *VAR_8;
 local_info_t *VAR_9;

 VAR_8 = FUNC_1(VAR_4);
 VAR_9 = VAR_8->local;

 VAR_6->sa_family = VAR_0;
 switch (VAR_8->type) {
 case 130:
  FUNC_0(&VAR_6->sa_data, VAR_4->dev_addr, VAR_2);
  break;
 case 129:
  FUNC_0(&VAR_6->sa_data, VAR_9->assoc_ap_addr, VAR_2);
  break;
 case 128:
  FUNC_0(&VAR_6->sa_data, VAR_8->u.wds.remote_addr, VAR_2);
  break;
 default:
  if (VAR_9->func->get_rid(VAR_4, VAR_3,
      &VAR_6->sa_data, VAR_2, 1) < 0)
   return -VAR_1;



  FUNC_0(VAR_9->bssid, &VAR_6->sa_data, VAR_2);
  break;
 }

 return 0;
}
