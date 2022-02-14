
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tsi721_ib_win_mapping {int lstart; int node; } ;
struct tsi721_ib_win {int active; int rstart; int size; int xlat; int lstart; int mappings; } ;
struct tsi721_device {scalar_t__ ibwin_cnt; TYPE_1__* pdev; scalar_t__ regs; struct tsi721_ib_win* ib_win; } ;
struct rio_mport {struct tsi721_device* priv; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct tsi721_ib_win_mapping*) ;
 struct tsi721_ib_win_mapping* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int *,char*,int,...) ;

__attribute__((used)) static int FUNC_16(struct rio_mport *VAR_11, dma_addr_t VAR_12,
  u64 VAR_13, u64 VAR_14, u32 VAR_15)
{
 struct tsi721_device *VAR_16 = VAR_11->priv;
 int VAR_17, VAR_18 = -1;
 u32 VAR_19;
 struct tsi721_ib_win *VAR_20;
 bool VAR_21 = (VAR_12 == VAR_13);
 u64 VAR_22;
 dma_addr_t VAR_23;
 u64 VAR_24;
 struct tsi721_ib_win_mapping *VAR_25 = ((void*)0);
 int VAR_26 = -VAR_0;


 if (VAR_14 > 0x400000000UL)
  return -VAR_2;

 if (VAR_21) {


  VAR_22 = FUNC_14(VAR_14);
  VAR_24 = VAR_12 & ~(VAR_22 - 1);

  FUNC_15(VAR_6, &VAR_16->pdev->dev,
   "Direct (RIO_0x%llx -> PCIe_%pad), size=0x%llx, ibw_start = 0x%llx",
   VAR_13, &VAR_12, VAR_14, VAR_24);

  while ((VAR_12 + VAR_14) > (VAR_24 + VAR_22)) {
   VAR_22 *= 2;
   VAR_24 = VAR_12 & ~(VAR_22 - 1);

   if (VAR_22 > 0x400000000UL)
    return -VAR_0;
  }

  VAR_23 = VAR_24;

  VAR_25 = FUNC_12(sizeof(struct tsi721_ib_win_mapping), VAR_5);
  if (VAR_25 == ((void*)0))
   return -VAR_4;

 } else {
  FUNC_15(VAR_6, &VAR_16->pdev->dev,
   "Translated (RIO_0x%llx -> PCIe_%pad), size=0x%llx",
   VAR_13, &VAR_12, VAR_14);

  if (!FUNC_10(VAR_14) || VAR_14 < 0x1000 ||
      ((u64)VAR_12 & (VAR_14 - 1)) || (VAR_13 & (VAR_14 - 1)))
   return -VAR_2;
  if (VAR_16->ibwin_cnt == 0)
   return -VAR_0;
  VAR_24 = VAR_13;
  VAR_22 = VAR_14;
  VAR_23 = VAR_12;
 }





 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  VAR_20 = &VAR_16->ib_win[VAR_17];

  if (!VAR_20->active) {
   if (VAR_18 == -1) {
    VAR_18 = VAR_17;
    VAR_26 = 0;
   }
  } else if (VAR_24 < (VAR_20->rstart + VAR_20->size) &&
      (VAR_24 + VAR_22) > VAR_20->rstart) {

   if (!VAR_21 || VAR_20->xlat) {
    VAR_26 = -VAR_1;
    break;
   }






   if (VAR_13 >= VAR_20->rstart &&
       (VAR_13 + VAR_14) <= (VAR_20->rstart +
       VAR_20->size)) {

    VAR_25->lstart = VAR_12;
    FUNC_13(&VAR_25->node, &VAR_20->mappings);
    return 0;
   }

   VAR_26 = -VAR_1;
   break;
  }
 }

 if (VAR_26)
  goto out;
 VAR_17 = VAR_18;


 VAR_19 = FUNC_8(VAR_16->regs + FUNC_1(VAR_17));
 if (FUNC_7(VAR_19 & VAR_8)) {
  VAR_26 = -VAR_3;
  goto out;
 }

 VAR_20 = &VAR_16->ib_win[VAR_17];
 VAR_20->active = 1;
 VAR_20->rstart = VAR_24;
 VAR_20->lstart = VAR_23;
 VAR_20->size = VAR_22;
 VAR_20->xlat = (VAR_12 != VAR_13);
 FUNC_0(&VAR_20->mappings);






 if (VAR_21) {
  VAR_25->lstart = VAR_12;
  FUNC_13(&VAR_25->node, &VAR_20->mappings);
 }

 FUNC_9(FUNC_2(VAR_22) << 8,
   VAR_16->regs + FUNC_3(VAR_17));

 FUNC_9(((u64)VAR_23 >> 32), VAR_16->regs + FUNC_5(VAR_17));
 FUNC_9(((u64)VAR_23 & VAR_10),
    VAR_16->regs + FUNC_4(VAR_17));

 FUNC_9(VAR_24 >> 32, VAR_16->regs + FUNC_6(VAR_17));
 FUNC_9((VAR_24 & VAR_7) | VAR_8,
  VAR_16->regs + FUNC_1(VAR_17));

 VAR_16->ibwin_cnt--;

 FUNC_15(VAR_6, &VAR_16->pdev->dev,
  "Configured IBWIN%d (RIO_0x%llx -> PCIe_%pad), size=0x%llx",
  VAR_17, VAR_24, &VAR_23, VAR_22);

 return 0;
out:
 FUNC_11(VAR_25);
 return VAR_26;
}
