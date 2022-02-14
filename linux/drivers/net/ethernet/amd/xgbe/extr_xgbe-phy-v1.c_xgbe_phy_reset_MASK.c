
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct xgbe_prv_data *VAR_4)
{
 unsigned int VAR_5, VAR_6;


 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_1);
 VAR_5 |= VAR_2;
 FUNC_1(VAR_4, VAR_3, VAR_1, VAR_5);

 VAR_6 = 50;
 do {
  FUNC_2(20);
  VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_1);
 } while ((VAR_5 & VAR_2) && --VAR_6);

 if (VAR_5 & VAR_2)
  return -VAR_0;

 return 0;
}
