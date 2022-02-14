
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_4, bool VAR_5,
     bool VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_1, VAR_0);
 VAR_7 &= ~VAR_2;

 if (VAR_5)
  VAR_7 |= VAR_2;

 if (VAR_6)
  VAR_7 |= VAR_3;

 FUNC_1(VAR_4, VAR_1, VAR_0, VAR_7);
}
