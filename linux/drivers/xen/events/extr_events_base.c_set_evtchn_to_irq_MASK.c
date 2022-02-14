
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 int** VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(unsigned VAR_4, unsigned VAR_5)
{
 unsigned VAR_6;
 unsigned VAR_7;

 if (VAR_4 >= FUNC_4())
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_4);
 VAR_7 = FUNC_0(VAR_4);

 if (VAR_3[VAR_6] == ((void*)0)) {

  if (VAR_5 == -1)
   return 0;

  VAR_3[VAR_6] = (int *)FUNC_3(VAR_2);
  if (VAR_3[VAR_6] == ((void*)0))
   return -VAR_1;

  FUNC_2(VAR_6);
 }

 VAR_3[VAR_6][VAR_7] = VAR_5;
 return 0;
}
