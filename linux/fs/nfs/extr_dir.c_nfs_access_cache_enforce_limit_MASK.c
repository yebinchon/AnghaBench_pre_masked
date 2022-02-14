
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (int *) ;
 long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 long VAR_2 = FUNC_0(&VAR_1);
 unsigned long VAR_3;
 unsigned int VAR_4;

 if (VAR_2 < 0 || VAR_2 <= VAR_0)
  return;
 VAR_4 = 100;
 VAR_3 = VAR_2 - VAR_0;
 if (VAR_3 < VAR_4)
  VAR_4 = VAR_3;
 FUNC_1(VAR_4);
}
