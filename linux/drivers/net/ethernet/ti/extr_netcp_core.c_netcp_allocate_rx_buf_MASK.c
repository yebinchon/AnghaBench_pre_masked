
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct skb_shared_info {int dummy; } ;
struct page {int dummy; } ;
struct netcp_intf {unsigned int rx_queue_id; int rx_pool; int * rx_fdq; int dev; int ndev_dev; } ;
struct knav_dma_desc {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct knav_dma_desc*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_1 (unsigned int,struct knav_dma_desc*) ;
 int FUNC_2 (unsigned int,struct knav_dma_desc*) ;
 unsigned int FUNC_3 (int) ;
 struct page* FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,struct page*,int ,unsigned int,int ) ;
 int FUNC_8 (int ,void*,unsigned int,int ) ;
 int FUNC_9 (int ,int ) ;
 struct knav_dma_desc* FUNC_10 (int ) ;
 int FUNC_11 (int ,struct knav_dma_desc*,int,int *,unsigned int*) ;
 int FUNC_12 (int ,struct knav_dma_desc*) ;
 int FUNC_13 (int ,int ,int,int ) ;
 scalar_t__ FUNC_14 (int) ;
 void* FUNC_15 (unsigned int) ;
 int FUNC_16 (unsigned int,unsigned int,struct knav_dma_desc*) ;
 int FUNC_17 (int ,unsigned int,struct knav_dma_desc*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct netcp_intf *VAR_14, int VAR_15)
{
 struct knav_dma_desc *VAR_16;
 unsigned int VAR_17, VAR_18;
 u32 VAR_19, VAR_20;
 struct page *VAR_21;
 dma_addr_t VAR_22;
 void *VAR_23;
 u32 VAR_24[2];


 VAR_16 = FUNC_10(VAR_14->rx_pool);
 if (FUNC_0(VAR_16)) {
  FUNC_5(VAR_14->ndev_dev, "out of rx pool desc\n");
  return -VAR_1;
 }

 if (FUNC_14(VAR_15 == 0)) {
  unsigned int VAR_25;

  VAR_17 = VAR_11 + VAR_12;
  VAR_25 = FUNC_3(VAR_17) +
    FUNC_3(sizeof(struct skb_shared_info));

  VAR_23 = FUNC_15(VAR_25);
  VAR_24[1] = VAR_25;

  if (FUNC_18(!VAR_23)) {
   FUNC_6(VAR_14->ndev_dev,
          "Primary RX buffer alloc failed\n");
   goto fail;
  }
  VAR_22 = FUNC_8(VAR_14->dev, VAR_23, VAR_17,
         VAR_0);
  if (FUNC_18(FUNC_9(VAR_14->dev, VAR_22)))
   goto fail;




  VAR_24[0] = (u32)VAR_23;
 } else {

  VAR_21 = FUNC_4(VAR_2 | VAR_3);
  if (FUNC_18(!VAR_21)) {
   FUNC_6(VAR_14->ndev_dev, "Secondary page alloc failed\n");
   goto fail;
  }
  VAR_17 = VAR_13;
  VAR_22 = FUNC_7(VAR_14->dev, VAR_21, 0, VAR_17, VAR_0);



  VAR_24[0] = (u32)VAR_21;
  VAR_24[1] = 0;
 }

 VAR_19 = VAR_7;
 VAR_19 |= VAR_17 & VAR_5;
 VAR_20 = VAR_4;
 VAR_20 |= VAR_10 << VAR_6;
 VAR_20 |= (VAR_14->rx_queue_id & VAR_8) <<
      VAR_9;
 FUNC_17(VAR_22, VAR_17, VAR_16);
 FUNC_1(VAR_24[0], VAR_16);
 FUNC_2(VAR_24[1], VAR_16);
 FUNC_16(VAR_19, VAR_20, VAR_16);


 FUNC_11(VAR_14->rx_pool, VAR_16, sizeof(*VAR_16), &VAR_22,
      &VAR_18);
 FUNC_13(VAR_14->rx_fdq[VAR_15], VAR_22, sizeof(*VAR_16), 0);
 return 0;

fail:
 FUNC_12(VAR_14->rx_pool, VAR_16);
 return -VAR_1;
}
