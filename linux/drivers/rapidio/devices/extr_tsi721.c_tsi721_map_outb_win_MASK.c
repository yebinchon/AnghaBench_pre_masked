
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef void* u16 ;
struct tsi721_obw_bar {int free; } ;
struct tsi721_ob_win {int rstart; int base; void* destid; } ;
struct tsi721_device {scalar_t__ obwin_cnt; scalar_t__ regs; TYPE_1__* pdev; struct tsi721_ob_win* ob_win; struct tsi721_obw_bar* p2r_bar; } ;
struct rio_mport {struct tsi721_device* priv; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct tsi721_device*,struct tsi721_obw_bar*,int,int*) ;
 int FUNC_9 (int ,int *,char*,int,int,...) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct rio_mport *VAR_15, u16 VAR_16, u64 VAR_17,
   u32 VAR_18, u32 VAR_19, dma_addr_t *VAR_20)
{
 struct tsi721_device *VAR_21 = VAR_15->priv;
 int VAR_22;
 struct tsi721_obw_bar *VAR_23;
 struct tsi721_ob_win *VAR_24;
 int VAR_25 = -1;
 u32 VAR_26;
 u64 VAR_27;
 u32 VAR_28;
 int VAR_29 = -VAR_2;

 FUNC_9(VAR_3, &VAR_21->pdev->dev,
    "did=%d ra=0x%llx sz=0x%x", VAR_16, VAR_17, VAR_18);

 if (!FUNC_7(VAR_18) || (VAR_18 < 0x8000) || (VAR_17 & (VAR_18 - 1)))
  return -VAR_1;

 if (VAR_21->obwin_cnt == 0)
  return -VAR_0;

 for (VAR_22 = 0; VAR_22 < 2; VAR_22++) {
  if (VAR_21->p2r_bar[VAR_22].free >= VAR_18) {
   VAR_23 = &VAR_21->p2r_bar[VAR_22];
   VAR_29 = FUNC_8(VAR_21, VAR_23, VAR_18, &VAR_25);
   if (!VAR_29)
    break;
  }
 }

 if (VAR_29)
  return VAR_29;

 FUNC_4(VAR_25 == -1);
 VAR_24 = &VAR_21->ob_win[VAR_25];
 VAR_24->destid = VAR_16;
 VAR_24->rstart = VAR_17;
 FUNC_9(VAR_3, &VAR_21->pdev->dev,
    "allocated OBW%d @%llx", VAR_25, VAR_24->base);





 VAR_28 = VAR_18/VAR_12;
 VAR_27 = VAR_17;





 for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {

  while (FUNC_5(VAR_21->regs + VAR_13) &
   VAR_14) {
   FUNC_10(1);
  }

  VAR_26 = (u32)(VAR_27 & VAR_5) |
   VAR_6 | VAR_7;
  FUNC_6(VAR_26, VAR_21->regs + VAR_4);
  VAR_26 = (u32)(VAR_27 >> 32);
  FUNC_6(VAR_26, VAR_21->regs + VAR_8);
  VAR_26 = VAR_16;
  FUNC_6(VAR_26, VAR_21->regs + VAR_9);

  VAR_26 = VAR_14 | (VAR_25 << 3) | VAR_22;
  FUNC_6(VAR_26, VAR_21->regs + VAR_13);

  VAR_27 += VAR_28;
 }

 FUNC_6(FUNC_3(VAR_18) << 8,
    VAR_21->regs + FUNC_1(VAR_25));
 FUNC_6((u32)(VAR_24->base >> 32), VAR_21->regs + FUNC_2(VAR_25));
 FUNC_6((u32)(VAR_24->base & VAR_10) | VAR_11,
    VAR_21->regs + FUNC_0(VAR_25));

 *VAR_20 = VAR_24->base;
 return 0;
}
