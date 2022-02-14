
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int rx_pool; int dev; int ndev_dev; int * rx_fdq; } ;
struct knav_dma_desc {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct knav_dma_desc*) ;
 unsigned int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 int FUNC_5 (int *,unsigned int*,struct knav_dma_desc*) ;
 int FUNC_6 (int ,struct knav_dma_desc*) ;
 struct knav_dma_desc* FUNC_7 (int ,int ,unsigned int) ;
 int FUNC_8 (int ,unsigned int*) ;
 int FUNC_9 (int,void*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct netcp_intf *VAR_2, int VAR_3)
{
 struct knav_dma_desc *VAR_4;
 unsigned int VAR_5, VAR_6;
 dma_addr_t VAR_7;
 void *VAR_8;


 while ((VAR_7 = FUNC_8(VAR_2->rx_fdq[VAR_3], &VAR_6))) {
  VAR_4 = FUNC_7(VAR_2->rx_pool, VAR_7, VAR_6);
  if (FUNC_10(!VAR_4)) {
   FUNC_2(VAR_2->ndev_dev, "failed to unmap Rx desc\n");
   continue;
  }

  FUNC_5(&VAR_7, &VAR_5, VAR_4);



  VAR_8 = (void *)FUNC_0(VAR_4);

  if (FUNC_10(!VAR_7)) {
   FUNC_2(VAR_2->ndev_dev, "NULL orig_buff in desc\n");
   FUNC_6(VAR_2->rx_pool, VAR_4);
   continue;
  }

  if (FUNC_10(!VAR_8)) {
   FUNC_2(VAR_2->ndev_dev, "NULL bufptr in desc\n");
   FUNC_6(VAR_2->rx_pool, VAR_4);
   continue;
  }

  if (VAR_3 == 0) {
   FUNC_4(VAR_2->dev, VAR_7, VAR_5,
      VAR_0);
   FUNC_9((VAR_5 <= VAR_1), VAR_8);
  } else {
   FUNC_3(VAR_2->dev, VAR_7, VAR_5,
           VAR_0);
   FUNC_1(VAR_8);
  }

  FUNC_6(VAR_2->rx_pool, VAR_4);
 }
}
