
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct denali_controller {int nbanks; scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct denali_controller *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nbanks; VAR_4++)
  FUNC_1(VAR_2, VAR_3->reg + FUNC_0(VAR_4));
 FUNC_1(VAR_1, VAR_3->reg + VAR_0);
}
