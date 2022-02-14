
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned int VAR_2;

again:
 VAR_2 = FUNC_0();

 VAR_2 %= (VAR_1 - 1);
 if (VAR_0[VAR_2])
  goto again;
 return VAR_2;
}
