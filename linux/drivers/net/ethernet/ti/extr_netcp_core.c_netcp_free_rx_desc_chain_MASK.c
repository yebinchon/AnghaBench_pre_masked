
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netcp_intf {int rx_pool; int dev; int ndev_dev; } ;
struct knav_dma_desc {int next_desc; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct knav_dma_desc*) ;
 scalar_t__ FUNC_1 (struct knav_dma_desc*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,scalar_t__,unsigned int,int ) ;
 int FUNC_5 (scalar_t__*,int *,scalar_t__*,struct knav_dma_desc*) ;
 int FUNC_6 (scalar_t__*,int,int *) ;
 int FUNC_7 (int ,struct knav_dma_desc*) ;
 struct knav_dma_desc* FUNC_8 (int ,scalar_t__,unsigned int) ;
 int FUNC_9 (int,void*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct netcp_intf *VAR_2,
         struct knav_dma_desc *VAR_3)
{
 struct knav_dma_desc *VAR_4;
 dma_addr_t VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8 = sizeof(*VAR_4);
 void *VAR_9;
 u32 VAR_10;

 FUNC_6(&VAR_5, 1, &VAR_3->next_desc);

 while (VAR_5) {
  VAR_4 = FUNC_8(VAR_2->rx_pool, VAR_5, VAR_8);
  if (FUNC_10(!VAR_4)) {
   FUNC_3(VAR_2->ndev_dev, "failed to unmap Rx desc\n");
   break;
  }
  FUNC_5(&VAR_6, &VAR_10, &VAR_5, VAR_4);



  VAR_9 = (void *)FUNC_0(VAR_4);
  VAR_7 = (int)FUNC_1(VAR_3);
  FUNC_4(VAR_2->dev, VAR_6, VAR_1, VAR_0);
  FUNC_2(VAR_9);
  FUNC_7(VAR_2->rx_pool, VAR_3);
 }



 VAR_9 = (void *)FUNC_0(VAR_3);
 VAR_7 = (int)FUNC_1(VAR_3);

 if (VAR_9)
  FUNC_9(VAR_7 <= VAR_1, VAR_9);
 FUNC_7(VAR_2->rx_pool, VAR_3);
}
