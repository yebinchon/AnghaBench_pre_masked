
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int ndev_dev; int tx_pool; int dev; } ;
struct knav_dma_desc {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__*,unsigned int) ;
 int FUNC_2 (int ,scalar_t__,unsigned int,int ) ;
 int FUNC_3 (scalar_t__*,unsigned int*,scalar_t__*,struct knav_dma_desc*) ;
 int FUNC_4 (int ,struct knav_dma_desc*) ;
 struct knav_dma_desc* FUNC_5 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct netcp_intf *VAR_1,
         struct knav_dma_desc *VAR_2,
         unsigned int VAR_3)
{
 struct knav_dma_desc *VAR_4 = VAR_2;
 dma_addr_t VAR_5, VAR_6;
 unsigned int VAR_7;

 while (VAR_4) {
  FUNC_3(&VAR_6, &VAR_7, &VAR_5, VAR_4);

  if (VAR_6 && VAR_7)
   FUNC_2(VAR_1->dev, VAR_6, VAR_7,
      VAR_0);
  else
   FUNC_1(VAR_1->ndev_dev, "bad Tx desc buf(%pad), len(%d)\n",
     &VAR_6, VAR_7);

  FUNC_4(VAR_1->tx_pool, VAR_4);
  VAR_4 = ((void*)0);
  if (VAR_5) {
   VAR_4 = FUNC_5(VAR_1->tx_pool, VAR_5,
           VAR_3);
   if (!VAR_4)
    FUNC_0(VAR_1->ndev_dev, "failed to unmap Tx desc\n");
  }
 }
}
