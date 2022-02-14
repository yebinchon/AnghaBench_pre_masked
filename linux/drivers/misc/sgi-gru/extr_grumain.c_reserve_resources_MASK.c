
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (int,unsigned long*) ;
 int FUNC_3 (unsigned long*,int) ;

__attribute__((used)) static unsigned long FUNC_4(unsigned long *VAR_0, int VAR_1, int VAR_2,
           char *VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5;

 while (VAR_1--) {
  VAR_5 = FUNC_3(VAR_0, VAR_2);
  if (VAR_5 == VAR_2)
   FUNC_0();
  FUNC_1(VAR_5, VAR_0);
  FUNC_2(VAR_5, &VAR_4);
  if (VAR_3)
   *VAR_3++ = VAR_5;
 }
 return VAR_4;
}
