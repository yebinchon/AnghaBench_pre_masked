
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp872x {int dvs_pin; } ;
typedef enum lp872x_dvs_state { ____Placeholder_lp872x_dvs_state } lp872x_dvs_state ;
typedef enum lp872x_dvs_sel { ____Placeholder_lp872x_dvs_sel } lp872x_dvs_sel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct lp872x *VAR_3, enum lp872x_dvs_sel VAR_4,
   int VAR_5)
{
 enum lp872x_dvs_state VAR_6;

 VAR_6 = VAR_4 == VAR_2 ? VAR_0 : VAR_1;
 FUNC_0(VAR_5, VAR_6);
 VAR_3->dvs_pin = VAR_6;
}
