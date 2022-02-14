
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int disabled; scalar_t__ fixed; } ;
union iwreq_data {TYPE_1__ retry; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct net_device *VAR_0,
    struct iw_request_info *VAR_1,
    union iwreq_data *VAR_2, char *VAR_3)
{
 VAR_2->retry.value = 7;
 VAR_2->retry.fixed = 0;
 VAR_2->retry.disabled = 1;
 return 0;
}
