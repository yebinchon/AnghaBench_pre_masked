
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct tsi721_omsg_desc {int dummy; } ;
struct rio_mport {TYPE_1__* outb_msg; } ;
struct tsi721_device {int flags; TYPE_3__* omsg_ring; scalar_t__ regs; TYPE_2__* pdev; struct rio_mport mport; } ;
struct TYPE_6__ {int sts_rdptr; int sts_size; int size; int tx_slot; int wr_count; int lock; void* dev_id; scalar_t__ omd_phys; scalar_t__* sts_base; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int (* mcback ) (struct rio_mport*,void*,int,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct rio_mport*,void*,int,int) ;
 int FUNC_13 (int ,int *,char*,int,...) ;
 int FUNC_14 (int *,char*,int) ;

__attribute__((used)) static void FUNC_15(struct tsi721_device *VAR_9, int VAR_10)
{
 u32 VAR_11;
 struct rio_mport *VAR_12 = &VAR_9->mport;
 void *VAR_13 = ((void*)0);
 u32 VAR_14 = 0xffffffff;
 int VAR_15 = 0;

 FUNC_10(&VAR_9->omsg_ring[VAR_10].lock);

 VAR_11 = FUNC_7(VAR_9->regs + FUNC_4(VAR_10));

 if (VAR_11 & VAR_7)
  FUNC_14(&VAR_9->pdev->dev,
   "OB MBOX%d: Status FIFO is full", VAR_10);

 if (VAR_11 & (VAR_4 | VAR_6)) {
  u32 VAR_16;
  u64 *VAR_17, VAR_18 = 0, VAR_19 = 0;
  int VAR_20, VAR_21;






  VAR_16 = VAR_9->omsg_ring[VAR_10].sts_rdptr;
  VAR_17 = VAR_9->omsg_ring[VAR_10].sts_base;
  VAR_21 = VAR_16 * 8;
  while (VAR_17[VAR_21]) {
   for (VAR_20 = 0; VAR_20 < 8 && VAR_17[VAR_21]; VAR_20++, VAR_21++) {
    VAR_19 = VAR_18;
    VAR_18 = FUNC_9(VAR_17[VAR_21]);
    VAR_17[VAR_21] = 0;
   }

   ++VAR_16;
   VAR_16 %= VAR_9->omsg_ring[VAR_10].sts_size;
   VAR_21 = VAR_16 * 8;
  }

  if (VAR_18 == 0)
   goto no_sts_update;

  VAR_9->omsg_ring[VAR_10].sts_rdptr = VAR_16;
  FUNC_8(VAR_16, VAR_9->regs + FUNC_3(VAR_10));

  if (!VAR_12->outb_msg[VAR_10].mcback)
   goto no_sts_update;



  VAR_14 = (VAR_18 - (u64)VAR_9->omsg_ring[VAR_10].omd_phys)/
      sizeof(struct tsi721_omsg_desc);






  if (VAR_14 == VAR_9->omsg_ring[VAR_10].size) {
   if (VAR_19)
    VAR_14 = (VAR_19 -
     (u64)VAR_9->omsg_ring[VAR_10].omd_phys)/
      sizeof(struct tsi721_omsg_desc);
   else
    goto no_sts_update;
  }

  if (VAR_14 >= VAR_9->omsg_ring[VAR_10].size)
   FUNC_13(VAR_0, &VAR_9->pdev->dev,
      "OB_MSG tx_slot=%x > size=%x",
      VAR_14, VAR_9->omsg_ring[VAR_10].size);
  FUNC_6(VAR_14 >= VAR_9->omsg_ring[VAR_10].size);


  ++VAR_14;
  if (VAR_14 == VAR_9->omsg_ring[VAR_10].size)
   VAR_14 = 0;

  VAR_13 = VAR_9->omsg_ring[VAR_10].dev_id;
  VAR_15 = 1;
 }

no_sts_update:

 if (VAR_11 & VAR_5) {





  FUNC_13(VAR_0, &VAR_9->pdev->dev, "OB MSG ABORT ch_stat=%x",
     FUNC_7(VAR_9->regs + FUNC_5(VAR_10)));

  FUNC_8(VAR_5,
    VAR_9->regs + FUNC_4(VAR_10));
  FUNC_8(VAR_3 | VAR_2,
    VAR_9->regs + FUNC_1(VAR_10));
  FUNC_7(VAR_9->regs + FUNC_1(VAR_10));


  VAR_13 = VAR_9->omsg_ring[VAR_10].dev_id;
  VAR_14 = VAR_9->omsg_ring[VAR_10].tx_slot;
  VAR_15 = 1;


  FUNC_8(VAR_9->omsg_ring[VAR_10].tx_slot,
   VAR_9->regs + FUNC_2(VAR_10));
  FUNC_7(VAR_9->regs + FUNC_2(VAR_10));
  VAR_9->omsg_ring[VAR_10].wr_count = VAR_9->omsg_ring[VAR_10].tx_slot;
  VAR_9->omsg_ring[VAR_10].sts_rdptr = 0;
 }


 FUNC_8(VAR_11, VAR_9->regs + FUNC_4(VAR_10));

 if (!(VAR_9->flags & VAR_8)) {
  u32 VAR_22;


  VAR_22 = FUNC_7(VAR_9->regs + VAR_1);
  VAR_22 |= FUNC_0(VAR_10);
  FUNC_8(VAR_22, VAR_9->regs + VAR_1);
 }

 FUNC_11(&VAR_9->omsg_ring[VAR_10].lock);

 if (VAR_12->outb_msg[VAR_10].mcback && VAR_15)
  VAR_12->outb_msg[VAR_10].mcback(VAR_12, VAR_13, VAR_10, VAR_14);
}
