
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_front_pgdir_shbuf {int num_pages; int* grefs; int * pages; TYPE_1__* xb_dev; } ;
typedef int grant_ref_t ;
struct TYPE_2__ {int otherend_id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct xen_front_pgdir_shbuf *VAR_0,
           grant_ref_t *VAR_1,
           int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_5 = VAR_0->xb_dev->otherend_id;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_pages; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0)
   return VAR_4;

  FUNC_1(VAR_4, VAR_5,
      FUNC_2(VAR_0->pages[VAR_3]),
      0);
  VAR_0->grefs[VAR_2++] = VAR_4;
 }
 return 0;
}
