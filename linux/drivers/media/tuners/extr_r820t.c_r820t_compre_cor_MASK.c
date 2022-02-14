
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r820t_sect_type {scalar_t__ value; } ;


 int FUNC_0 (struct r820t_sect_type,struct r820t_sect_type) ;

__attribute__((used)) static void FUNC_1(struct r820t_sect_type VAR_0[3])
{
 int VAR_1;

 for (VAR_1 = 3; VAR_1 > 0; VAR_1--) {
  if (VAR_0[0].value > VAR_0[VAR_1 - 1].value)
   FUNC_0(VAR_0[0], VAR_0[VAR_1 - 1]);
 }
}
