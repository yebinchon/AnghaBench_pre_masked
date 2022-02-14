
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tx_ring_info {int tx_channel; int max_burst; int descr_dma; int pending; int mbox_dma; scalar_t__ last_pkt_cnt; } ;
struct niu {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,int,unsigned long long) ;
 int FUNC_7 (struct niu*,int) ;
 int FUNC_8 (struct niu*,int) ;
 int FUNC_9 (struct niu*,int) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(struct niu *VAR_6, struct tx_ring_info *VAR_7)
{
 int VAR_8, VAR_9 = VAR_7->tx_channel;
 u64 VAR_10, VAR_11;

 VAR_8 = FUNC_9(VAR_6, VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_8(VAR_6, VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_7(VAR_6, VAR_9);
 if (VAR_8)
  return VAR_8;

 FUNC_10(FUNC_0(VAR_9), VAR_7->max_burst);
 FUNC_10(FUNC_4(VAR_9), 0);

 if (VAR_7->descr_dma & ~(VAR_5 |
         VAR_4)) {
  FUNC_6(VAR_6->dev, "TX ring channel %d DMA addr (%llx) is not aligned\n",
      VAR_9, (unsigned long long)VAR_7->descr_dma);
  return -VAR_0;
 }






 VAR_11 = (VAR_7->pending / 8);

 VAR_10 = ((VAR_11 << VAR_3) |
        VAR_7->descr_dma);
 FUNC_10(FUNC_5(VAR_9), VAR_10);

 if (((VAR_7->mbox_dma >> 32) & ~VAR_1) ||
     ((u32)VAR_7->mbox_dma & ~VAR_2)) {
  FUNC_6(VAR_6->dev, "TX ring channel %d MBOX addr (%llx) has invalid bits\n",
       VAR_9, (unsigned long long)VAR_7->mbox_dma);
  return -VAR_0;
 }
 FUNC_10(FUNC_1(VAR_9), VAR_7->mbox_dma >> 32);
 FUNC_10(FUNC_2(VAR_9), VAR_7->mbox_dma & VAR_2);

 FUNC_10(FUNC_3(VAR_9), 0);

 VAR_7->last_pkt_cnt = 0;

 return 0;
}
