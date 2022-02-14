
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct scif_vma_info {int list; struct vm_area_struct* vma; } ;
struct TYPE_2__ {int vma_list; } ;
struct scif_endpt {int lock; TYPE_1__ rma_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct scif_vma_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct scif_endpt *VAR_2, struct vm_area_struct *VAR_3)
{
 struct scif_vma_info *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto done;
 }
 VAR_4->vma = VAR_3;
 FUNC_2(&VAR_2->lock);
 FUNC_1(&VAR_4->list, &VAR_2->rma_info.vma_list);
 FUNC_3(&VAR_2->lock);
done:
 return VAR_5;
}
