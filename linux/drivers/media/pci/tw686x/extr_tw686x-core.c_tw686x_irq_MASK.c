
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tw686x_dev {int dma_delay_timer; int lock; TYPE_1__* pci_dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct tw686x_dev*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct tw686x_dev*,unsigned int,int) ;
 int FUNC_8 (struct tw686x_dev*,unsigned int) ;
 int FUNC_9 (struct tw686x_dev*,unsigned int,int,int,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_8, void *VAR_9)
{
 struct tw686x_dev *VAR_10 = (struct tw686x_dev *)VAR_9;
 unsigned int VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u32 VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned long VAR_23;

 VAR_19 = FUNC_4(VAR_10, VAR_1);
 VAR_14 = FUNC_4(VAR_10, VAR_6);


 if (!VAR_19 && !FUNC_0(VAR_14))
  return VAR_4;

 if (VAR_19 & VAR_2) {
  FUNC_1(&VAR_10->pci_dev->dev,
   "DMA timeout. Resetting DMA for all channels\n");
  VAR_13 = ~0;
  goto reset_channels;
 }

 FUNC_5(&VAR_10->lock, VAR_23);
 VAR_20 = FUNC_4(VAR_10, VAR_0);
 FUNC_6(&VAR_10->lock, VAR_23);

 VAR_21 = VAR_20 & 0xff;
 VAR_15 = ~(VAR_14 & 0xff) & VAR_21;
 VAR_16 = VAR_14 >> 24;
 VAR_17 = VAR_14 >> 16;


 VAR_18 = VAR_15 & (VAR_16 | VAR_17);

 VAR_13 = 0;
 VAR_22 = FUNC_4(VAR_10, VAR_5);


 VAR_11 = (VAR_19 & VAR_21) | VAR_18;
 VAR_12 = (VAR_19 & VAR_20) >> 8;

 if (VAR_11)
  FUNC_9(VAR_10, VAR_11, VAR_22,
     VAR_14, &VAR_13);
 if (VAR_12)
  FUNC_7(VAR_10, VAR_12, VAR_22);

reset_channels:
 if (VAR_13) {
  FUNC_5(&VAR_10->lock, VAR_23);
  FUNC_8(VAR_10, VAR_13);
  FUNC_6(&VAR_10->lock, VAR_23);
  FUNC_2(&VAR_10->dma_delay_timer,
     VAR_7 + FUNC_3(100));
 }

 return VAR_3;
}
