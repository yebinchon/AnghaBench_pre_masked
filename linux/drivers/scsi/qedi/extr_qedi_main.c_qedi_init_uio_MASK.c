
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio_info {char* name; struct qedi_uio_dev* priv; int release; int open; int irq; int version; TYPE_1__* mem; } ;
struct qedi_uio_dev {int ll2_ring_size; int ll2_buf_size; int uio_dev; TYPE_2__* pdev; scalar_t__ ll2_buf; scalar_t__ ll2_ring; scalar_t__ uctrl; struct uio_info qedi_uinfo; } ;
struct qedi_uio_ctrl {int dummy; } ;
struct qedi_ctx {int dbg_ctx; struct qedi_uio_dev* udev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {unsigned long addr; int size; void* memtype; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,struct uio_info*) ;

__attribute__((used)) static int FUNC_2(struct qedi_ctx *VAR_6)
{
 struct qedi_uio_dev *VAR_7 = VAR_6->udev;
 struct uio_info *VAR_8;
 int VAR_9 = 0;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = &VAR_7->qedi_uinfo;

 VAR_8->mem[0].addr = (unsigned long)VAR_7->uctrl;
 VAR_8->mem[0].size = sizeof(struct qedi_uio_ctrl);
 VAR_8->mem[0].memtype = VAR_3;

 VAR_8->mem[1].addr = (unsigned long)VAR_7->ll2_ring;
 VAR_8->mem[1].size = VAR_7->ll2_ring_size;
 VAR_8->mem[1].memtype = VAR_3;

 VAR_8->mem[2].addr = (unsigned long)VAR_7->ll2_buf;
 VAR_8->mem[2].size = VAR_7->ll2_buf_size;
 VAR_8->mem[2].memtype = VAR_3;

 VAR_8->name = "qedi_uio";
 VAR_8->version = VAR_1;
 VAR_8->irq = VAR_2;

 VAR_8->open = VAR_5;
 VAR_8->release = VAR_4;

 if (VAR_7->uio_dev == -1) {
  if (!VAR_8->priv) {
   VAR_8->priv = VAR_7;

   VAR_9 = FUNC_1(&VAR_7->pdev->dev, VAR_8);
   if (VAR_9) {
    FUNC_0(&VAR_6->dbg_ctx,
      "UIO registration failed\n");
   }
  }
 }

 return VAR_9;
}
