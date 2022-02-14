
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int dummy; } ;


 int FUNC_0 (struct controller*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct controller *VAR_0)
{
 int VAR_1;

 if (!FUNC_0(VAR_0))
  return 1;


 for (VAR_1 = 0; VAR_1 < 10; VAR_1++) {
  FUNC_1(100);
  if (!FUNC_0(VAR_0))
   return 1;
 }

 return 0;
}
