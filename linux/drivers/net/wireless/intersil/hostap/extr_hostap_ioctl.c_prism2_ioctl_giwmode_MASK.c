
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct hostap_interface {int type; TYPE_1__* local; } ;
struct TYPE_2__ {int iw_mode; } ;
typedef TYPE_1__ local_info_t ;
typedef int __u32 ;




 int VAR_0 ;
 int VAR_1 ;
 struct hostap_interface* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
    struct iw_request_info *VAR_3,
    __u32 *VAR_4, char *VAR_5)
{
 struct hostap_interface *VAR_6;
 local_info_t *VAR_7;

 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = VAR_6->local;

 switch (VAR_6->type) {
 case 129:
  *VAR_4 = VAR_0;
  break;
 case 128:
  *VAR_4 = VAR_1;
  break;
 default:
  *VAR_4 = VAR_7->iw_mode;
  break;
 }
 return 0;
}
