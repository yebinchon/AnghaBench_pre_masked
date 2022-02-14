
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int valid_bit; void* storage; int available; } ;
struct qbman_swp {TYPE_2__ vdq; TYPE_1__* desc; } ;
struct qbman_pull_desc {int verb; scalar_t__ rsp_addr_virt; int rsp_addr; int dq_src; int tok; int numf; } ;
struct TYPE_3__ {int qman_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 struct qbman_pull_desc* FUNC_3 (struct qbman_swp*,int ) ;
 int FUNC_4 (struct qbman_swp*,int ,int ) ;

int FUNC_5(struct qbman_swp *VAR_9, struct qbman_pull_desc *VAR_10)
{
 struct qbman_pull_desc *VAR_11;

 if (!FUNC_0(&VAR_9->vdq.available)) {
  FUNC_1(&VAR_9->vdq.available);
  return -VAR_0;
 }
 VAR_9->vdq.storage = (void *)(uintptr_t)VAR_10->rsp_addr_virt;
 if ((VAR_9->desc->qman_version & VAR_7) < VAR_6)
  VAR_11 = FUNC_3(VAR_9, VAR_1);
 else
  VAR_11 = FUNC_3(VAR_9, VAR_2);
 VAR_11->numf = VAR_10->numf;
 VAR_11->tok = VAR_5;
 VAR_11->dq_src = VAR_10->dq_src;
 VAR_11->rsp_addr = VAR_10->rsp_addr;
 VAR_11->rsp_addr_virt = VAR_10->rsp_addr_virt;

 if ((VAR_9->desc->qman_version & VAR_7) < VAR_6) {
  FUNC_2();

  VAR_11->verb = VAR_10->verb | VAR_9->vdq.valid_bit;
  VAR_9->vdq.valid_bit ^= VAR_4;
 } else {
  VAR_11->verb = VAR_10->verb | VAR_9->vdq.valid_bit;
  VAR_9->vdq.valid_bit ^= VAR_4;
  FUNC_2();
  FUNC_4(VAR_9, VAR_3, VAR_8);
 }

 return 0;
}
