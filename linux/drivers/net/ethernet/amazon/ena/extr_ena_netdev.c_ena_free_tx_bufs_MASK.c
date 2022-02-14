
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ena_tx_buffer {int skb; } ;
struct ena_ring {size_t ring_size; int qid; int netdev; struct ena_tx_buffer* tx_buffer_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ena_ring*,struct ena_tx_buffer*) ;
 int FUNC_2 (int ,char*,int ,size_t) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int ,size_t) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ena_ring *VAR_0)
{
 bool VAR_1 = 1;
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->ring_size; VAR_2++) {
  struct ena_tx_buffer *VAR_3 = &VAR_0->tx_buffer_info[VAR_2];

  if (!VAR_3->skb)
   continue;

  if (VAR_1) {
   FUNC_4(VAR_0->netdev,
          "free uncompleted tx skb qid %d idx 0x%x\n",
          VAR_0->qid, VAR_2);
   VAR_1 = 0;
  } else {
   FUNC_2(VAR_0->netdev,
       "free uncompleted tx skb qid %d idx 0x%x\n",
       VAR_0->qid, VAR_2);
  }

  FUNC_1(VAR_0, VAR_3);

  FUNC_0(VAR_3->skb);
 }
 FUNC_5(FUNC_3(VAR_0->netdev,
        VAR_0->qid));
}
