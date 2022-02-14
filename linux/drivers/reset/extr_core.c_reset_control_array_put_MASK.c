
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control_array {int num_rstcs; int * rstc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct reset_control_array*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct reset_control_array *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_rstcs; VAR_2++)
  FUNC_0(VAR_1->rstc[VAR_2]);
 FUNC_3(&VAR_0);
 FUNC_1(VAR_1);
}
