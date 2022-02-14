
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_param {int flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct atmel_private {int exclude_unencrypted; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4,
          struct iw_request_info *VAR_5,
          union iwreq_data *VAR_6, char *VAR_7)
{
 struct atmel_private *VAR_8 = FUNC_0(VAR_4);
 struct iw_param *VAR_9 = &VAR_6->param;

 switch (VAR_9->flags & VAR_3) {
 case 129:
  VAR_9->value = VAR_8->exclude_unencrypted;
  break;

 case 130:
  if (VAR_8->exclude_unencrypted == 1)
   VAR_9->value = VAR_2;
  else
   VAR_9->value = VAR_1;
  break;

 case 128:
  VAR_9->value = 0;
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
