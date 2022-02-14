
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline bool FUNC_4(atomic_t *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 for (;;) {
  if (FUNC_3(VAR_3 + VAR_1 >= VAR_2))
   return 0;

  VAR_4 = FUNC_0((VAR_0), VAR_3, VAR_3 + VAR_1);
  if (FUNC_2(VAR_4 == VAR_3))
   break;
  VAR_3 = VAR_4;
 }

 return 1;
}
