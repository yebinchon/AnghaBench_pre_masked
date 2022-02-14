
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mvneta_tx_queue {size_t txq_put_index; scalar_t__ tso_hdrs_phys; int ** tx_skb; } ;
struct mvneta_tx_desc {int data_size; scalar_t__ buf_phys_addr; int command; } ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_port*,struct sk_buff*) ;
 int FUNC_1 (struct mvneta_tx_queue*) ;
 struct mvneta_tx_desc* FUNC_2 (struct mvneta_tx_queue*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_5(struct sk_buff *VAR_2,
     struct mvneta_port *VAR_3, struct mvneta_tx_queue *VAR_4)
{
 struct mvneta_tx_desc *VAR_5;
 int VAR_6 = FUNC_3(VAR_2) + FUNC_4(VAR_2);

 VAR_4->tx_skb[VAR_4->txq_put_index] = ((void*)0);
 VAR_5 = FUNC_2(VAR_4);
 VAR_5->data_size = VAR_6;
 VAR_5->command = FUNC_0(VAR_3, VAR_2);
 VAR_5->command |= VAR_0;
 VAR_5->buf_phys_addr = VAR_4->tso_hdrs_phys +
     VAR_4->txq_put_index * VAR_1;
 FUNC_1(VAR_4);
}
