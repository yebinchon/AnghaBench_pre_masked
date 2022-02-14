
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct xgbe_prv_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static u64 FUNC_1(struct xgbe_prv_data *VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 *= VAR_2;
 VAR_4 += FUNC_0(VAR_3, VAR_0);

 return VAR_4;
}
