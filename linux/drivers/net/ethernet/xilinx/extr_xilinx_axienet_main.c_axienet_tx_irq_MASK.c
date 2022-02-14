
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct net_device {int dev; } ;
struct axienet_local {size_t tx_bd_ci; int dma_err_tasklet; TYPE_1__* tx_bd_v; int ndev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (struct axienet_local*,int ) ;
 int FUNC_1 (struct axienet_local*,int ,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 struct axienet_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 u32 VAR_11;
 unsigned int VAR_12;
 struct net_device *VAR_13 = VAR_10;
 struct axienet_local *VAR_14 = FUNC_4(VAR_13);

 VAR_12 = FUNC_0(VAR_14, VAR_8);
 if (VAR_12 & (VAR_5 | VAR_3)) {
  FUNC_1(VAR_14, VAR_8, VAR_12);
  FUNC_2(VAR_14->ndev);
  goto out;
 }
 if (!(VAR_12 & VAR_2))
  return VAR_1;
 if (VAR_12 & VAR_4) {
  FUNC_3(&VAR_13->dev, "DMA Tx error 0x%x\n", VAR_12);
  FUNC_3(&VAR_13->dev, "Current BD is at: 0x%x\n",
   (VAR_14->tx_bd_v[VAR_14->tx_bd_ci]).phys);

  VAR_11 = FUNC_0(VAR_14, VAR_7);

  VAR_11 &= (~VAR_2);

  FUNC_1(VAR_14, VAR_7, VAR_11);

  VAR_11 = FUNC_0(VAR_14, VAR_6);

  VAR_11 &= (~VAR_2);

  FUNC_1(VAR_14, VAR_6, VAR_11);

  FUNC_5(&VAR_14->dma_err_tasklet);
  FUNC_1(VAR_14, VAR_8, VAR_12);
 }
out:
 return VAR_0;
}
