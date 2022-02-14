
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct mvpp2_txq_pcpu {int txq_put_index; scalar_t__ tso_headers_dma; } ;
struct mvpp2_tx_queue {int id; } ;
struct mvpp2_tx_desc {int dummy; } ;
struct mvpp2_port {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mvpp2_port*,struct sk_buff*) ;
 int FUNC_1 (struct mvpp2_port*,struct mvpp2_tx_desc*,int) ;
 int FUNC_2 (struct mvpp2_port*,struct mvpp2_tx_desc*,scalar_t__) ;
 int FUNC_3 (struct mvpp2_port*,struct mvpp2_tx_desc*,int) ;
 int FUNC_4 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_5 (struct mvpp2_port*,struct mvpp2_txq_pcpu*,int *,struct mvpp2_tx_desc*) ;
 struct mvpp2_tx_desc* FUNC_6 (struct mvpp2_tx_queue*) ;
 struct mvpp2_port* FUNC_7 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_8(struct sk_buff *VAR_3,
         struct net_device *VAR_4,
         struct mvpp2_tx_queue *VAR_5,
         struct mvpp2_tx_queue *VAR_6,
         struct mvpp2_txq_pcpu *VAR_7,
         int VAR_8)
{
 struct mvpp2_port *VAR_9 = FUNC_7(VAR_4);
 struct mvpp2_tx_desc *VAR_10 = FUNC_6(VAR_6);
 dma_addr_t VAR_11;

 FUNC_4(VAR_9, VAR_10, VAR_5->id);
 FUNC_3(VAR_9, VAR_10, VAR_8);

 VAR_11 = VAR_7->tso_headers_dma +
        VAR_7->txq_put_index * VAR_2;
 FUNC_2(VAR_9, VAR_10, VAR_11);

 FUNC_1(VAR_9, VAR_10, FUNC_0(VAR_9, VAR_3) |
         VAR_0 |
         VAR_1);
 FUNC_5(VAR_9, VAR_7, ((void*)0), VAR_10);
}
