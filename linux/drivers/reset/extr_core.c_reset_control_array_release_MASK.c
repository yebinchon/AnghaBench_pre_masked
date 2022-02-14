
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control_array {unsigned int num_rstcs; int * rstc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct reset_control_array *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rstcs; VAR_1++)
  FUNC_0(VAR_0->rstc[VAR_1]);
}
