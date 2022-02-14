
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* mcdi; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int fn_flags; } ;


 int VAR_0 ;
 struct efx_nic* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, "%d\n",
         ((VAR_4->mcdi->fn_flags) &
   (1 << VAR_0))
         ? 1 : 0);
}
