
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tsi721_imsg_desc {int dummy; } ;
struct TYPE_5__ {scalar_t__ host_deviceid; } ;
struct tsi721_device {int flags; int* imsg_init; TYPE_3__* imsg_ring; TYPE_4__* pdev; scalar_t__ regs; TYPE_2__* msix; TYPE_1__ mport; } ;
struct rio_mport {struct tsi721_device* priv; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int size; int fq_wrptr; int* buf_base; int* imfq_base; int* imd_base; scalar_t__ buf_phys; scalar_t__ imfq_phys; scalar_t__ imd_phys; int lock; int ** imq_base; scalar_t__ desc_rdptr; scalar_t__ rx_slot; void* dev_id; } ;
struct TYPE_6__ {int vector; int irq_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int) ;
 void* FUNC_10 (int *,int,scalar_t__*,int ) ;
 int FUNC_11 (int *,int,int*,scalar_t__) ;
 int FUNC_12 (int ,void*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int VAR_18 ;
 int FUNC_17 (int ,int ,int ,int ,void*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct tsi721_device*,int,int ) ;
 int VAR_19 ;
 int FUNC_20 (int ,int *,char*,int) ;
 int FUNC_21 (int *,char*,int) ;
 int FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct rio_mport *VAR_20, void *VAR_21,
    int VAR_22, int VAR_23)
{
 struct tsi721_device *VAR_24 = VAR_20->priv;
 int VAR_25 = VAR_22 + 4;
 int VAR_26;
 u64 *VAR_27;
 int VAR_28 = 0;

 if ((VAR_23 < VAR_11) ||
     (VAR_23 > VAR_12) ||
     (!FUNC_15(VAR_23)) || VAR_22 >= VAR_5) {
  VAR_28 = -VAR_0;
  goto out;
 }

 if ((VAR_18 & (1 << VAR_22)) == 0) {
  VAR_28 = -VAR_1;
  goto out;
 }


 VAR_24->imsg_ring[VAR_22].dev_id = VAR_21;
 VAR_24->imsg_ring[VAR_22].size = VAR_23;
 VAR_24->imsg_ring[VAR_22].rx_slot = 0;
 VAR_24->imsg_ring[VAR_22].desc_rdptr = 0;
 VAR_24->imsg_ring[VAR_22].fq_wrptr = 0;
 for (VAR_26 = 0; VAR_26 < VAR_24->imsg_ring[VAR_22].size; VAR_26++)
  VAR_24->imsg_ring[VAR_22].imq_base[VAR_26] = ((void*)0);
 FUNC_18(&VAR_24->imsg_ring[VAR_22].lock);


 VAR_24->imsg_ring[VAR_22].buf_base =
  FUNC_10(&VAR_24->pdev->dev,
       VAR_23 * VAR_14,
       &VAR_24->imsg_ring[VAR_22].buf_phys,
       VAR_3);

 if (VAR_24->imsg_ring[VAR_22].buf_base == ((void*)0)) {
  FUNC_21(&VAR_24->pdev->dev,
   "Failed to allocate buffers for IB MBOX%d", VAR_22);
  VAR_28 = -VAR_2;
  goto out;
 }


 VAR_24->imsg_ring[VAR_22].imfq_base =
  FUNC_10(&VAR_24->pdev->dev,
       VAR_23 * 8,
       &VAR_24->imsg_ring[VAR_22].imfq_phys,
       VAR_3);

 if (VAR_24->imsg_ring[VAR_22].imfq_base == ((void*)0)) {
  FUNC_21(&VAR_24->pdev->dev,
   "Failed to allocate free queue for IB MBOX%d", VAR_22);
  VAR_28 = -VAR_2;
  goto out_buf;
 }


 VAR_24->imsg_ring[VAR_22].imd_base =
  FUNC_10(&VAR_24->pdev->dev,
       VAR_23 * sizeof(struct tsi721_imsg_desc),
       &VAR_24->imsg_ring[VAR_22].imd_phys, VAR_3);

 if (VAR_24->imsg_ring[VAR_22].imd_base == ((void*)0)) {
  FUNC_21(&VAR_24->pdev->dev,
   "Failed to allocate descriptor memory for IB MBOX%d",
   VAR_22);
  VAR_28 = -VAR_2;
  goto out_dma;
 }


 VAR_27 = VAR_24->imsg_ring[VAR_22].imfq_base;
 for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++)
  VAR_27[VAR_26] = FUNC_9(
    (u64)(VAR_24->imsg_ring[VAR_22].buf_phys) +
    VAR_26 * 0x1000);

 FUNC_16();






 if (!(VAR_24->flags & VAR_13)) {
  FUNC_14((u32)VAR_24->mport.host_deviceid,
   VAR_24->regs + VAR_10);
  VAR_24->flags |= VAR_13;
 }






 FUNC_14(((u64)VAR_24->imsg_ring[VAR_22].imfq_phys >> 32),
  VAR_24->regs + FUNC_5(VAR_25));
 FUNC_14(((u64)VAR_24->imsg_ring[VAR_22].imfq_phys &
   VAR_8),
  VAR_24->regs+FUNC_6(VAR_25));
 FUNC_14(FUNC_0(VAR_23),
  VAR_24->regs + FUNC_7(VAR_25));


 FUNC_14(((u64)VAR_24->imsg_ring[VAR_22].imd_phys >> 32),
  VAR_24->regs + FUNC_2(VAR_25));
 FUNC_14(((u32)VAR_24->imsg_ring[VAR_22].imd_phys &
     (u32)VAR_7),
  VAR_24->regs+FUNC_3(VAR_25));
 FUNC_14(FUNC_0(VAR_23),
  VAR_24->regs + FUNC_4(VAR_25));
 FUNC_19(VAR_24, VAR_25, VAR_9);


 FUNC_14(VAR_6, VAR_24->regs + FUNC_1(VAR_25));
 FUNC_13(VAR_24->regs + FUNC_1(VAR_25));
 FUNC_22(10);
 VAR_24->imsg_ring[VAR_22].fq_wrptr = VAR_23 - 1;
 FUNC_14(VAR_23 - 1, VAR_24->regs + FUNC_8(VAR_25));

 VAR_24->imsg_init[VAR_22] = 1;
 return 0;
out_dma:
 FUNC_11(&VAR_24->pdev->dev,
  VAR_24->imsg_ring[VAR_22].size * 8,
  VAR_24->imsg_ring[VAR_22].imfq_base,
  VAR_24->imsg_ring[VAR_22].imfq_phys);

 VAR_24->imsg_ring[VAR_22].imfq_base = ((void*)0);

out_buf:
 FUNC_11(&VAR_24->pdev->dev,
  VAR_24->imsg_ring[VAR_22].size * VAR_14,
  VAR_24->imsg_ring[VAR_22].buf_base,
  VAR_24->imsg_ring[VAR_22].buf_phys);

 VAR_24->imsg_ring[VAR_22].buf_base = ((void*)0);

out:
 return VAR_28;
}
