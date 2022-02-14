
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; int disabled; scalar_t__ fixed; } ;
union iwreq_data {TYPE_1__ rts; } ;
struct rtllib_device {scalar_t__ rts; } ;
struct iw_request_info {int dummy; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct rtllib_device *VAR_1,
        struct iw_request_info *VAR_2,
        union iwreq_data *VAR_3, char *VAR_4)
{
 VAR_3->rts.value = VAR_1->rts;
 VAR_3->rts.fixed = 0;
 VAR_3->rts.disabled = (VAR_3->rts.value == VAR_0);
 return 0;
}
