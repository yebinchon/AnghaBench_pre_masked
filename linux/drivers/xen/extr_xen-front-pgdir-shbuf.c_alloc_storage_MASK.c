
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_front_pgdir_shbuf {void* directory; void* grefs; int num_grefs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xen_front_pgdir_shbuf*) ;
 void* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct xen_front_pgdir_shbuf *VAR_3)
{
 VAR_3->grefs = FUNC_1(VAR_3->num_grefs, sizeof(*VAR_3->grefs), VAR_1);
 if (!VAR_3->grefs)
  return -VAR_0;

 VAR_3->directory = FUNC_1(FUNC_0(VAR_3), VAR_2, VAR_1);
 if (!VAR_3->directory)
  return -VAR_0;

 return 0;
}
