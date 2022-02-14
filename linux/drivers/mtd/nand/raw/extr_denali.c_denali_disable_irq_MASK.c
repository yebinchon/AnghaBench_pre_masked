
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct denali_controller {int nbanks; scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct denali_controller *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nbanks; VAR_2++)
  FUNC_1(0, VAR_1->reg + FUNC_0(VAR_2));
 FUNC_1(0, VAR_1->reg + VAR_0);
}
