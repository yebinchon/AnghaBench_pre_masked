
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {int dummy; } ;
typedef int cpumask_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (struct hnae_ring*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(int VAR_0, int VAR_1,
          struct hnae_ring *VAR_2, cpumask_t *VAR_3)
{
 int VAR_4;





 if (VAR_0 == FUNC_3()) {
  if (FUNC_2(VAR_2))
   VAR_4 = VAR_1;
  else
   VAR_4 = VAR_1 - VAR_0;
 } else {
  if (FUNC_2(VAR_2))
   VAR_4 = VAR_1 * 2;
  else
   VAR_4 = (VAR_1 - VAR_0) * 2 + 1;
 }

 FUNC_0(VAR_3);
 FUNC_1(VAR_4, VAR_3);

 return VAR_4;
}
