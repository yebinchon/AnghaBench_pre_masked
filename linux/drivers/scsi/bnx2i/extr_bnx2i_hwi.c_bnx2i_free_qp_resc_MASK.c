
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2i_hba {TYPE_1__* pcidev; } ;
struct TYPE_4__ {scalar_t__ cq_phys; int * cq_virt; int cq_mem_size; scalar_t__ cq_pgtbl_phys; int * cq_pgtbl_virt; int cq_pgtbl_size; scalar_t__ rq_phys; int * rq_virt; int rq_mem_size; scalar_t__ rq_pgtbl_phys; int * rq_pgtbl_virt; int rq_pgtbl_size; scalar_t__ sq_phys; int * sq_virt; int sq_mem_size; scalar_t__ sq_pgtbl_phys; int * sq_pgtbl_virt; int sq_pgtbl_size; int * ctx_base; } ;
struct bnx2i_endpoint {TYPE_2__ qp; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct bnx2i_hba *VAR_0, struct bnx2i_endpoint *VAR_1)
{
 if (VAR_1->qp.ctx_base) {
  FUNC_1(VAR_1->qp.ctx_base);
  VAR_1->qp.ctx_base = ((void*)0);
 }

 if (VAR_1->qp.sq_pgtbl_virt) {
  FUNC_0(&VAR_0->pcidev->dev, VAR_1->qp.sq_pgtbl_size,
      VAR_1->qp.sq_pgtbl_virt, VAR_1->qp.sq_pgtbl_phys);
  VAR_1->qp.sq_pgtbl_virt = ((void*)0);
  VAR_1->qp.sq_pgtbl_phys = 0;
 }
 if (VAR_1->qp.sq_virt) {
  FUNC_0(&VAR_0->pcidev->dev, VAR_1->qp.sq_mem_size,
      VAR_1->qp.sq_virt, VAR_1->qp.sq_phys);
  VAR_1->qp.sq_virt = ((void*)0);
  VAR_1->qp.sq_phys = 0;
 }


 if (VAR_1->qp.rq_pgtbl_virt) {
  FUNC_0(&VAR_0->pcidev->dev, VAR_1->qp.rq_pgtbl_size,
      VAR_1->qp.rq_pgtbl_virt, VAR_1->qp.rq_pgtbl_phys);
  VAR_1->qp.rq_pgtbl_virt = ((void*)0);
  VAR_1->qp.rq_pgtbl_phys = 0;
 }
 if (VAR_1->qp.rq_virt) {
  FUNC_0(&VAR_0->pcidev->dev, VAR_1->qp.rq_mem_size,
      VAR_1->qp.rq_virt, VAR_1->qp.rq_phys);
  VAR_1->qp.rq_virt = ((void*)0);
  VAR_1->qp.rq_phys = 0;
 }


 if (VAR_1->qp.cq_pgtbl_virt) {
  FUNC_0(&VAR_0->pcidev->dev, VAR_1->qp.cq_pgtbl_size,
      VAR_1->qp.cq_pgtbl_virt, VAR_1->qp.cq_pgtbl_phys);
  VAR_1->qp.cq_pgtbl_virt = ((void*)0);
  VAR_1->qp.cq_pgtbl_phys = 0;
 }
 if (VAR_1->qp.cq_virt) {
  FUNC_0(&VAR_0->pcidev->dev, VAR_1->qp.cq_mem_size,
      VAR_1->qp.cq_virt, VAR_1->qp.cq_phys);
  VAR_1->qp.cq_virt = ((void*)0);
  VAR_1->qp.cq_phys = 0;
 }
}
