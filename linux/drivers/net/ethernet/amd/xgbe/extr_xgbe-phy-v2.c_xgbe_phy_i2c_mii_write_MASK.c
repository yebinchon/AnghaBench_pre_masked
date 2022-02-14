
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct xgbe_prv_data {int dummy; } ;
typedef int mii_data ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int*,int) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_1, int VAR_2, u16 VAR_3)
{
 __be16 *VAR_4;
 u8 VAR_5[3];
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_5[0] = VAR_2 & 0xff;
 VAR_4 = (__be16 *)&VAR_5[1];
 *VAR_4 = FUNC_0(VAR_3);

 VAR_6 = FUNC_1(VAR_1, VAR_0,
     VAR_5, sizeof(VAR_5));

 FUNC_3(VAR_1);

 return VAR_6;
}
