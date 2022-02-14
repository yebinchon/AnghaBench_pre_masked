
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_nsec; int tv_sec; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct macb_dma_desc_ptp {int ts_2; int ts_1; } ;
struct macb {int dummy; } ;
typedef int shhwtstamps ;


 int FUNC_0 (struct macb*,int ,int ,struct timespec64*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_3 (struct sk_buff*,struct skb_shared_hwtstamps*) ;

__attribute__((used)) static void FUNC_4(struct macb *VAR_0, struct sk_buff *VAR_1,
     struct macb_dma_desc_ptp *VAR_2)
{
 struct skb_shared_hwtstamps VAR_3;
 struct timespec64 VAR_4;

 FUNC_0(VAR_0, VAR_2->ts_1, VAR_2->ts_2, &VAR_4);
 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.hwtstamp = FUNC_1(VAR_4.tv_sec, VAR_4.tv_nsec);
 FUNC_3(VAR_1, &VAR_3);
}
