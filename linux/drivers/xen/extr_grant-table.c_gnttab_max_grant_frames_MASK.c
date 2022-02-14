
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 () ;

unsigned int FUNC_1(void)
{
 unsigned int VAR_0 = FUNC_0();
 static unsigned int VAR_1;


 if (!VAR_1)
  VAR_1 = FUNC_0();

 if (VAR_0 > VAR_1)
  return VAR_1;
 return VAR_0;
}
