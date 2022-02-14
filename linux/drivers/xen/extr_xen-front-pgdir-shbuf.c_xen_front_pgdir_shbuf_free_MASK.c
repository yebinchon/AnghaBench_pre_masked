
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_front_pgdir_shbuf {scalar_t__* grefs; int num_grefs; scalar_t__* directory; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,unsigned long) ;
 int FUNC_1 (scalar_t__*) ;

void FUNC_2(struct xen_front_pgdir_shbuf *VAR_1)
{
 if (VAR_1->grefs) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->num_grefs; VAR_2++)
   if (VAR_1->grefs[VAR_2] != VAR_0)
    FUNC_0(VAR_1->grefs[VAR_2],
         0, 0UL);
 }
 FUNC_1(VAR_1->grefs);
 FUNC_1(VAR_1->directory);
}
