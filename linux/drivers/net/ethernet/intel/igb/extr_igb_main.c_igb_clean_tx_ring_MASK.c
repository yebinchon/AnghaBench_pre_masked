
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_adv_tx_desc {int dummy; } e1000_adv_tx_desc ;
typedef size_t u16 ;
struct igb_tx_buffer {union e1000_adv_tx_desc* next_to_watch; int skb; } ;
struct igb_ring {size_t next_to_clean; size_t next_to_use; size_t count; struct igb_tx_buffer* tx_buffer_info; int dev; } ;


 int VAR_0 ;
 union e1000_adv_tx_desc* FUNC_0 (struct igb_ring*,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct igb_tx_buffer*,int ) ;
 scalar_t__ FUNC_3 (struct igb_tx_buffer*,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct igb_ring*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct igb_ring *VAR_3)
{
 u16 VAR_4 = VAR_3->next_to_clean;
 struct igb_tx_buffer *VAR_5 = &VAR_3->tx_buffer_info[VAR_4];

 while (VAR_4 != VAR_3->next_to_use) {
  union e1000_adv_tx_desc *VAR_6, *VAR_7;


  FUNC_1(VAR_5->skb);


  FUNC_5(VAR_3->dev,
     FUNC_2(VAR_5, VAR_1),
     FUNC_3(VAR_5, VAR_2),
     VAR_0);


  VAR_6 = VAR_5->next_to_watch;
  VAR_7 = FUNC_0(VAR_3, VAR_4);


  while (VAR_7 != VAR_6) {
   VAR_5++;
   VAR_7++;
   VAR_4++;
   if (FUNC_8(VAR_4 == VAR_3->count)) {
    VAR_4 = 0;
    VAR_5 = VAR_3->tx_buffer_info;
    VAR_7 = FUNC_0(VAR_3, 0);
   }


   if (FUNC_3(VAR_5, VAR_2))
    FUNC_4(VAR_3->dev,
            FUNC_2(VAR_5, VAR_1),
            FUNC_3(VAR_5, VAR_2),
            VAR_0);
  }


  VAR_5++;
  VAR_4++;
  if (FUNC_8(VAR_4 == VAR_3->count)) {
   VAR_4 = 0;
   VAR_5 = VAR_3->tx_buffer_info;
  }
 }


 FUNC_6(FUNC_7(VAR_3));


 VAR_3->next_to_use = 0;
 VAR_3->next_to_clean = 0;
}
