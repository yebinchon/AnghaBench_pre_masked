
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_front_pgdir_shbuf {int * grefs; } ;
typedef int grant_ref_t ;


 int VAR_0 ;

grant_ref_t
FUNC_0(struct xen_front_pgdir_shbuf *VAR_1)
{
 if (!VAR_1->grefs)
  return VAR_0;

 return VAR_1->grefs[0];
}
