
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; scalar_t__ fixed; scalar_t__ value; } ;
union iwreq_data {TYPE_1__ sens; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct net_device *VAR_0,
        struct iw_request_info *VAR_1,
        union iwreq_data *VAR_2, char *VAR_3)
{
 {
  VAR_2->sens.value = 0;
  VAR_2->sens.fixed = 0;
  VAR_2->sens.disabled = 1;
 }
 return 0;
}
