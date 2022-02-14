
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; scalar_t__ value; scalar_t__ disabled; } ;
struct atmel_private {scalar_t__ long_retry; scalar_t__ short_retry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3,
      struct iw_request_info *VAR_4,
      struct iw_param *VAR_5,
      char *VAR_6)
{
 struct atmel_private *VAR_7 = FUNC_0(VAR_3);

 VAR_5->disabled = 0;


 if (VAR_5->flags & VAR_1) {
  VAR_5->flags = VAR_0 | VAR_1;
  VAR_5->value = VAR_7->long_retry;
 } else {
  VAR_5->flags = VAR_0;
  VAR_5->value = VAR_7->short_retry;
  if (VAR_7->long_retry != VAR_7->short_retry)
   VAR_5->flags |= VAR_2;
 }

 return 0;
}
