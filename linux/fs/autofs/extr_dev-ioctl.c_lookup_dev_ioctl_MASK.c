
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ioctl_fn ;


 unsigned int FUNC_0 (int **) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static ioctl_fn FUNC_2(unsigned int VAR_0)
{
 static ioctl_fn VAR_1[] = {
  128,
  133,
  134,
  135,
  139,
  132,
  137,
  130,
  140,
  129,
  131,
  138,
  141,
  136,
 };
 unsigned int VAR_2 = FUNC_1(VAR_0);

 return (VAR_2 >= FUNC_0(VAR_1)) ? ((void*)0) : VAR_1[VAR_2];
}
