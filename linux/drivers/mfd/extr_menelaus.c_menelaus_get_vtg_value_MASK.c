
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menelaus_vtg_value {int vtg; int val; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, const struct menelaus_vtg_value *VAR_2,
      int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2++)
  if (VAR_2->vtg == VAR_1)
   return VAR_2->val;
 return -VAR_0;
}
