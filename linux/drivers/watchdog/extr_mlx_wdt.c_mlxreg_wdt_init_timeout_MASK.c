
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxreg_wdt {size_t timeout_idx; int wdd; } ;
struct mlxreg_core_platform_data {TYPE_1__* data; } ;
struct TYPE_2__ {int health_cntr; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxreg_wdt *VAR_0,
       struct mlxreg_core_platform_data *VAR_1)
{
 u32 VAR_2;

 VAR_2 = VAR_1->data[VAR_0->timeout_idx].health_cntr;
 return FUNC_0(&VAR_0->wdd, VAR_2);
}
