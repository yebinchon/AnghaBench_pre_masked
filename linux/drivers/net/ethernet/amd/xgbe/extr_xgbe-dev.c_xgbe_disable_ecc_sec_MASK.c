
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
typedef enum xgbe_ecc_sec { ____Placeholder_xgbe_ecc_sec } xgbe_ecc_sec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_2 (unsigned int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_4,
     enum xgbe_ecc_sec VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_3);


 switch (VAR_5) {
 case 128:
 FUNC_2(VAR_6, VAR_3, VAR_2, 0);
  break;
 case 129:
 FUNC_2(VAR_6, VAR_3, VAR_1, 0);
  break;
 case 130:
 FUNC_2(VAR_6, VAR_3, VAR_0, 0);
  break;
 }

 FUNC_1(VAR_4, VAR_3, VAR_6);
}
