
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct csio_sge {int * sge_fl_buf_size; } ;
struct csio_wrm {struct csio_sge sge; } ;
struct TYPE_4__ {int sreg; struct csio_dma_buf* bufs; } ;
struct TYPE_5__ {TYPE_1__ fl; } ;
struct csio_q {int credits; TYPE_2__ un; scalar_t__ vstart; } ;
struct csio_hw {TYPE_3__* pdev; } ;
struct csio_dma_buf {int paddr; int vaddr; int len; } ;
typedef int __be64 ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct csio_hw*,char*,int) ;
 struct csio_wrm* FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (int *,int ,int*,int ) ;

__attribute__((used)) static int
FUNC_4(struct csio_hw *VAR_2, struct csio_q *VAR_3)
{
 struct csio_wrm *VAR_4 = FUNC_2(VAR_2);
 struct csio_sge *VAR_5 = &VAR_4->sge;
 __be64 *VAR_6 = (__be64 *)(VAR_3->vstart);
 struct csio_dma_buf *VAR_7 = &VAR_3->un.fl.bufs[0];
 uint64_t VAR_8;
 int VAR_9 = VAR_3->un.fl.sreg;
 int VAR_10 = VAR_3->credits;

 while (VAR_10--) {
  VAR_7->len = VAR_5->sge_fl_buf_size[VAR_9];
  VAR_7->vaddr = FUNC_3(&VAR_2->pdev->dev, VAR_7->len,
      &VAR_7->paddr, VAR_1);
  if (!VAR_7->vaddr) {
   FUNC_1(VAR_2, "Could only fill %d buffers!\n", VAR_10 + 1);
   return -VAR_0;
  }

  VAR_8 = VAR_7->paddr | (VAR_9 & 0xF);

  *VAR_6++ = FUNC_0(VAR_8);
  VAR_7++;
 }

 return 0;
}
