
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_si {int errata; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct enetc_si *VAR_2, int VAR_3, int VAR_4)
{
 bool VAR_5 = VAR_2->errata & VAR_0;

 if (VAR_4 == VAR_1) {
  FUNC_4(&VAR_2->hw, FUNC_2(VAR_3, VAR_5), 0);
  FUNC_4(&VAR_2->hw, FUNC_3(VAR_3), 0);
 } else {
  FUNC_4(&VAR_2->hw, FUNC_0(VAR_3, VAR_5), 0);
  FUNC_4(&VAR_2->hw, FUNC_1(VAR_3), 0);
 }
}
