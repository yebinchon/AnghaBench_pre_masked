
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xgbe_prv_data {int dummy; } ;
typedef int mii_val ;
typedef int mii_reg ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int*,int,int *,int) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_1, int VAR_2)
{
 __be16 VAR_3;
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_4 = VAR_2;
 VAR_5 = FUNC_1(VAR_1, VAR_0,
    &VAR_4, sizeof(VAR_4),
    &VAR_3, sizeof(VAR_3));
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_3);

 FUNC_3(VAR_1);

 return VAR_5;
}
