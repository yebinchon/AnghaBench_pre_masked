
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_struct {int dummy; } ;


 struct sti_struct* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 struct sti_struct** VAR_2 ;
 int VAR_3 ;

struct sti_struct * FUNC_1(unsigned int VAR_4)
{
 if (!VAR_3)
  FUNC_0();

 if (VAR_4 == 0)
  return VAR_0;

 if (VAR_4 > VAR_1)
  return ((void*)0);

 return VAR_2[VAR_4-1];
}
