
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_7, bool VAR_8,
     bool VAR_9)
{
 unsigned int VAR_10;


 VAR_10 = FUNC_0(VAR_7, VAR_4, VAR_5);
 VAR_10 &= ~VAR_6;
 FUNC_1(VAR_7, VAR_4, VAR_5, VAR_10);


 VAR_10 = FUNC_0(VAR_7, VAR_3, VAR_2);
 VAR_10 &= ~VAR_0;

 if (VAR_8)
  VAR_10 |= VAR_0;

 if (VAR_9)
  VAR_10 |= VAR_1;

 FUNC_1(VAR_7, VAR_3, VAR_2, VAR_10);
}
