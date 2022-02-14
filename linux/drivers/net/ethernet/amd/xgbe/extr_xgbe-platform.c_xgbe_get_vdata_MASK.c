
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_version_data {int dummy; } ;
struct xgbe_prv_data {scalar_t__ use_acpi; } ;


 struct xgbe_version_data* FUNC_0 (struct xgbe_prv_data*) ;
 struct xgbe_version_data* FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static struct xgbe_version_data *FUNC_2(struct xgbe_prv_data *VAR_0)
{
 return VAR_0->use_acpi ? FUNC_0(VAR_0)
          : FUNC_1(VAR_0);
}
