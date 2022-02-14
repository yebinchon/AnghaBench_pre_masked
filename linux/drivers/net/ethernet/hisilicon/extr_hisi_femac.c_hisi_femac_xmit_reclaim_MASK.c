
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct hisi_femac_queue {size_t tail; int num; struct sk_buff** skb; } ;
struct hisi_femac_priv {int tx_fifo_used_cnt; scalar_t__ port_base; struct hisi_femac_queue txq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct hisi_femac_priv*,struct sk_buff*,size_t) ;
 int FUNC_2 (struct net_device*,unsigned int,unsigned int) ;
 int FUNC_3 (struct net_device*,char*,int,int) ;
 struct hisi_femac_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_2)
{
 struct sk_buff *VAR_3;
 struct hisi_femac_priv *VAR_4 = FUNC_4(VAR_2);
 struct hisi_femac_queue *VAR_5 = &VAR_4->txq;
 unsigned int VAR_6 = 0, VAR_7 = 0;
 u32 VAR_8;

 FUNC_6(VAR_2);

 VAR_8 = FUNC_9(VAR_4->port_base + VAR_0) & VAR_1;
 while (VAR_8 < VAR_4->tx_fifo_used_cnt) {
  VAR_3 = VAR_5->skb[VAR_5->tail];
  if (FUNC_10(!VAR_3)) {
   FUNC_3(VAR_2, "xmitq_cnt_inuse=%d, tx_fifo_used=%d\n",
       VAR_8, VAR_4->tx_fifo_used_cnt);
   break;
  }
  FUNC_1(VAR_4, VAR_3, VAR_5->tail);
  VAR_7++;
  VAR_6 += VAR_3->len;
  FUNC_0(VAR_3);

  VAR_4->tx_fifo_used_cnt--;

  VAR_8 = FUNC_9(VAR_4->port_base + VAR_0) & VAR_1;
  VAR_5->skb[VAR_5->tail] = ((void*)0);
  VAR_5->tail = (VAR_5->tail + 1) % VAR_5->num;
 }

 FUNC_2(VAR_2, VAR_7, VAR_6);

 if (FUNC_10(FUNC_5(VAR_2)) && VAR_7)
  FUNC_8(VAR_2);

 FUNC_7(VAR_2);
}
