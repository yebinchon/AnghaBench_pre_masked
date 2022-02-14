
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; int fixed; scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ rts; } ;
struct rtllib_device {scalar_t__ rts; } ;
struct iw_request_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_0(struct rtllib_device *VAR_4,
        struct iw_request_info *VAR_5,
        union iwreq_data *VAR_6, char *VAR_7)
{
 if (VAR_6->rts.disabled || !VAR_6->rts.fixed)
  VAR_4->rts = VAR_0;
 else {
  if (VAR_6->rts.value < VAR_3 ||
    VAR_6->rts.value > VAR_2)
   return -VAR_1;
  VAR_4->rts = VAR_6->rts.value;
 }
 return 0;
}
