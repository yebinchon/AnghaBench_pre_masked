
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct xgbe_prv_data *VAR_5)
{
 unsigned int VAR_6 = VAR_4;


 FUNC_1(VAR_5, VAR_3, VAR_2, 1);


 FUNC_1(VAR_5, VAR_3, VAR_0, 1);

 while (VAR_6--) {
  if (!FUNC_0(VAR_5, VAR_3, VAR_0))
   return 0;

  FUNC_2(500, 600);
 }

 return -VAR_1;
}
