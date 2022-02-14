
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tx_queue {int tx_curr_desc; int tx_ring_size; scalar_t__ tso_hdrs_dma; struct tx_desc* tx_desc_area; } ;
struct tx_desc {int byte_cnt; int cmd_sts; scalar_t__ buf_ptr; scalar_t__ l4i_chk; } ;
struct sk_buff {int dummy; } ;
struct mv643xx_eth_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct mv643xx_eth_private*,struct sk_buff*,int *,int*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct mv643xx_eth_private* FUNC_4 (struct tx_queue*) ;

__attribute__((used)) static inline void
FUNC_5(struct sk_buff *VAR_4, struct tx_queue *VAR_5, int VAR_6,
  u32 *VAR_7, bool VAR_8)
{
 struct mv643xx_eth_private *VAR_9 = FUNC_4(VAR_5);
 int VAR_10 = FUNC_1(VAR_4) + FUNC_3(VAR_4);
 int VAR_11;
 struct tx_desc *VAR_12;
 int VAR_13;
 u32 VAR_14 = 0;
 u16 VAR_15 = 0;
 u32 VAR_16;

 VAR_11 = VAR_5->tx_curr_desc;
 VAR_12 = &VAR_5->tx_desc_area[VAR_11];

 VAR_13 = FUNC_2(VAR_9, VAR_4, &VAR_15, &VAR_14, VAR_6);
 if (VAR_13)
  FUNC_0(1, "failed to prepare checksum!");



 VAR_12->l4i_chk = 0;

 VAR_12->byte_cnt = VAR_10;
 VAR_12->buf_ptr = VAR_5->tso_hdrs_dma +
   VAR_5->tx_curr_desc * VAR_2;
 VAR_16 = VAR_14 | VAR_0 | VAR_3 |
       VAR_1;




 if (VAR_8)
  *VAR_7 = VAR_16;
 else
  VAR_12->cmd_sts = VAR_16;

 VAR_5->tx_curr_desc++;
 if (VAR_5->tx_curr_desc == VAR_5->tx_ring_size)
  VAR_5->tx_curr_desc = 0;
}
