
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control_array {int num_rstcs; int * rstc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct reset_control_array *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rstcs; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0->rstc[VAR_2]);
  if (VAR_1)
   return VAR_1;
 }

 return 0;
}
