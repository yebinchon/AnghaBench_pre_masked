
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct nixge_priv {size_t tx_bd_ci; int dma_err_tasklet; int * tx_bd_v; int ndev; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 struct nixge_priv* FUNC_1 (void*) ;
 unsigned int FUNC_2 (struct nixge_priv*,int ) ;
 int FUNC_3 (struct nixge_priv*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct nixge_priv *VAR_11 = FUNC_1(VAR_10);
 struct net_device *VAR_12 = VAR_10;
 unsigned int VAR_13;
 dma_addr_t VAR_14;
 u32 VAR_15;

 VAR_13 = FUNC_2(VAR_11, VAR_8);
 if (VAR_13 & (VAR_5 | VAR_3)) {
  FUNC_3(VAR_11, VAR_8, VAR_13);
  FUNC_5(VAR_11->ndev);
  goto out;
 }
 if (!(VAR_13 & VAR_2)) {
  FUNC_0(VAR_12, "No interrupts asserted in Tx path\n");
  return VAR_1;
 }
 if (VAR_13 & VAR_4) {
  VAR_14 = FUNC_4(&VAR_11->tx_bd_v[VAR_11->tx_bd_ci],
      VAR_14);

  FUNC_0(VAR_12, "DMA Tx error 0x%x\n", VAR_13);
  FUNC_0(VAR_12, "Current BD is at: 0x%llx\n", (u64)VAR_14);

  VAR_15 = FUNC_2(VAR_11, VAR_7);

  VAR_15 &= (~VAR_2);

  FUNC_3(VAR_11, VAR_7, VAR_15);

  VAR_15 = FUNC_2(VAR_11, VAR_6);

  VAR_15 &= (~VAR_2);

  FUNC_3(VAR_11, VAR_6, VAR_15);

  FUNC_6(&VAR_11->dma_err_tasklet);
  FUNC_3(VAR_11, VAR_8, VAR_13);
 }
out:
 return VAR_0;
}
