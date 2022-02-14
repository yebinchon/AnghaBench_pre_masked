
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct tsi721_omsg_desc {void* next_hi; void* next_lo; scalar_t__ msg_info; void* type_id; } ;
struct tsi721_dma_sts {int dummy; } ;
struct tsi721_device {int flags; int* omsg_init; TYPE_2__* omsg_ring; TYPE_3__* pdev; scalar_t__ regs; TYPE_1__* msix; } ;
struct rio_mport {struct tsi721_device* priv; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int size; int sts_size; struct tsi721_omsg_desc** omq_base; scalar_t__* omq_phys; struct tsi721_omsg_desc* omd_base; scalar_t__ omd_phys; struct tsi721_omsg_desc* sts_base; scalar_t__ sts_phys; scalar_t__ wr_count; scalar_t__ tx_slot; int lock; scalar_t__ sts_rdptr; void* dev_id; } ;
struct TYPE_4__ {int vector; int irq_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int *,int,scalar_t__*,int ) ;
 int FUNC_10 (int *,int,struct tsi721_omsg_desc*,scalar_t__) ;
 int FUNC_11 (int ,void*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,scalar_t__) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int VAR_18 ;
 int FUNC_16 (int ,int ,int ,int ,void*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct tsi721_device*,int,int ) ;
 int VAR_19 ;
 int FUNC_20 (int ,int *,char*,int) ;
 int FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct rio_mport *VAR_20, void *VAR_21,
     int VAR_22, int VAR_23)
{
 struct tsi721_device *VAR_24 = VAR_20->priv;
 struct tsi721_omsg_desc *VAR_25;
 int VAR_26, VAR_27 = 0;

 if ((VAR_23 < VAR_13) ||
     (VAR_23 > (VAR_14)) ||
     (!FUNC_14(VAR_23)) || VAR_22 >= VAR_6) {
  VAR_27 = -VAR_1;
  goto out;
 }

 if ((VAR_18 & (1 << VAR_22)) == 0) {
  VAR_27 = -VAR_2;
  goto out;
 }

 VAR_24->omsg_ring[VAR_22].dev_id = VAR_21;
 VAR_24->omsg_ring[VAR_22].size = VAR_23;
 VAR_24->omsg_ring[VAR_22].sts_rdptr = 0;
 FUNC_18(&VAR_24->omsg_ring[VAR_22].lock);



 for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++) {
  VAR_24->omsg_ring[VAR_22].omq_base[VAR_26] =
   FUNC_9(
    &VAR_24->pdev->dev, VAR_7,
    &VAR_24->omsg_ring[VAR_22].omq_phys[VAR_26],
    VAR_4);
  if (VAR_24->omsg_ring[VAR_22].omq_base[VAR_26] == ((void*)0)) {
   FUNC_20(VAR_5, &VAR_24->pdev->dev,
      "ENOMEM for OB_MSG_%d data buffer", VAR_22);
   VAR_27 = -VAR_3;
   goto out_buf;
  }
 }


 VAR_24->omsg_ring[VAR_22].omd_base = FUNC_9(
    &VAR_24->pdev->dev,
    (VAR_23 + 1) * sizeof(struct tsi721_omsg_desc),
    &VAR_24->omsg_ring[VAR_22].omd_phys, VAR_4);
 if (VAR_24->omsg_ring[VAR_22].omd_base == ((void*)0)) {
  FUNC_20(VAR_5, &VAR_24->pdev->dev,
   "ENOMEM for OB_MSG_%d descriptor memory", VAR_22);
  VAR_27 = -VAR_3;
  goto out_buf;
 }

 VAR_24->omsg_ring[VAR_22].tx_slot = 0;


 VAR_24->omsg_ring[VAR_22].sts_size = FUNC_17(VAR_23 + 1);
 VAR_24->omsg_ring[VAR_22].sts_base = FUNC_9(&VAR_24->pdev->dev,
           VAR_24->omsg_ring[VAR_22].sts_size * sizeof(struct tsi721_dma_sts),
           &VAR_24->omsg_ring[VAR_22].sts_phys,
           VAR_4);
 if (VAR_24->omsg_ring[VAR_22].sts_base == ((void*)0)) {
  FUNC_20(VAR_5, &VAR_24->pdev->dev,
   "ENOMEM for OB_MSG_%d status FIFO", VAR_22);
  VAR_27 = -VAR_3;
  goto out_desc;
 }






 FUNC_13(((u64)VAR_24->omsg_ring[VAR_22].omd_phys >> 32),
   VAR_24->regs + FUNC_2(VAR_22));
 FUNC_13(((u64)VAR_24->omsg_ring[VAR_22].omd_phys &
     VAR_10),
   VAR_24->regs + FUNC_3(VAR_22));


 FUNC_13(((u64)VAR_24->omsg_ring[VAR_22].sts_phys >> 32),
   VAR_24->regs + FUNC_4(VAR_22));
 FUNC_13(((u64)VAR_24->omsg_ring[VAR_22].sts_phys &
     VAR_11),
   VAR_24->regs + FUNC_5(VAR_22));
 FUNC_13(FUNC_0(VAR_24->omsg_ring[VAR_22].sts_size),
  VAR_24->regs + (u32)FUNC_6(VAR_22));
 FUNC_19(VAR_24, VAR_22, VAR_12);


 VAR_25 = VAR_24->omsg_ring[VAR_22].omd_base;
 VAR_25[VAR_23].type_id = FUNC_8(VAR_0 << 29);
 VAR_25[VAR_23].msg_info = 0;
 VAR_25[VAR_23].next_lo =
  FUNC_8((u64)VAR_24->omsg_ring[VAR_22].omd_phys &
  VAR_10);
 VAR_25[VAR_23].next_hi =
  FUNC_8((u64)VAR_24->omsg_ring[VAR_22].omd_phys >> 32);
 VAR_24->omsg_ring[VAR_22].wr_count = 0;
 FUNC_15();


 FUNC_13(VAR_9 | VAR_8,
    VAR_24->regs + FUNC_1(VAR_22));
 FUNC_12(VAR_24->regs + FUNC_7(VAR_22));
 FUNC_21(10);

 VAR_24->omsg_init[VAR_22] = 1;

 return 0;
out_desc:
 FUNC_10(&VAR_24->pdev->dev,
  (VAR_23 + 1) * sizeof(struct tsi721_omsg_desc),
  VAR_24->omsg_ring[VAR_22].omd_base,
  VAR_24->omsg_ring[VAR_22].omd_phys);

 VAR_24->omsg_ring[VAR_22].omd_base = ((void*)0);

out_buf:
 for (VAR_26 = 0; VAR_26 < VAR_24->omsg_ring[VAR_22].size; VAR_26++) {
  if (VAR_24->omsg_ring[VAR_22].omq_base[VAR_26]) {
   FUNC_10(&VAR_24->pdev->dev,
    VAR_7,
    VAR_24->omsg_ring[VAR_22].omq_base[VAR_26],
    VAR_24->omsg_ring[VAR_22].omq_phys[VAR_26]);

   VAR_24->omsg_ring[VAR_22].omq_base[VAR_26] = ((void*)0);
  }
 }

out:
 return VAR_27;
}
