
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct macb_dma_desc_ptp {int ts_2; int ts_1; } ;
struct macb_dma_desc {int addr; } ;
struct macb {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct macb*,int ,int ,struct timespec64*) ;
 int FUNC_2 (int ,int ) ;
 struct macb_dma_desc_ptp* FUNC_3 (struct macb*,struct macb_dma_desc*) ;
 int FUNC_4 (struct skb_shared_hwtstamps*,int ,int) ;
 struct skb_shared_hwtstamps* FUNC_5 (struct sk_buff*) ;

void FUNC_6(struct macb *VAR_1, struct sk_buff *VAR_2,
       struct macb_dma_desc *VAR_3)
{
 struct skb_shared_hwtstamps *VAR_4 = FUNC_5(VAR_2);
 struct macb_dma_desc_ptp *VAR_5;
 struct timespec64 VAR_6;

 if (FUNC_0(VAR_0, VAR_3->addr)) {
  VAR_5 = FUNC_3(VAR_1, VAR_3);
  FUNC_1(VAR_1, VAR_5->ts_1, VAR_5->ts_2, &VAR_6);
  FUNC_4(VAR_4, 0, sizeof(struct skb_shared_hwtstamps));
  VAR_4->hwtstamp = FUNC_2(VAR_6.tv_sec, VAR_6.tv_nsec);
 }
}
