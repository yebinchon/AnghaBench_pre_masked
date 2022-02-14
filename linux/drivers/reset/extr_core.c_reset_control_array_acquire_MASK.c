
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control_array {unsigned int num_rstcs; int * rstc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct reset_control_array *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rstcs; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0->rstc[VAR_1]);
  if (VAR_2 < 0)
   goto release;
 }

 return 0;

release:
 while (VAR_1--)
  FUNC_1(VAR_0->rstc[VAR_1]);

 return VAR_2;
}
