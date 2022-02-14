
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; int disabled; } ;
struct atmel_private {int short_retry; int long_retry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5,
      struct iw_request_info *VAR_6,
      struct iw_param *VAR_7,
      char *VAR_8)
{
 struct atmel_private *VAR_9 = FUNC_0(VAR_5);

 if (!VAR_7->disabled && (VAR_7->flags & VAR_2)) {
  if (VAR_7->flags & VAR_3)
   VAR_9->long_retry = VAR_7->value;
  else if (VAR_7->flags & VAR_4)
   VAR_9->short_retry = VAR_7->value;
  else {

   VAR_9->long_retry = VAR_7->value;
   VAR_9->short_retry = VAR_7->value;
  }
  return -VAR_0;
 }

 return -VAR_1;
}
