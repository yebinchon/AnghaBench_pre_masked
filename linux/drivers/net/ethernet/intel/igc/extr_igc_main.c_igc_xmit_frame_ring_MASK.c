
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; } ;
struct igc_tx_buffer {int gso_segs; int protocol; int tx_flags; int bytecount; struct sk_buff* skb; } ;
struct igc_ring {size_t next_to_use; struct igc_tx_buffer* tx_buffer_info; } ;
typedef int netdev_tx_t ;
typedef int __be16 ;
struct TYPE_2__ {unsigned short nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct igc_ring*,scalar_t__) ;
 int FUNC_2 (struct igc_ring*,struct igc_tx_buffer*) ;
 int FUNC_3 (struct igc_ring*,struct igc_tx_buffer*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_2,
           struct igc_ring *VAR_3)
{
 u16 VAR_4 = FUNC_0(FUNC_5(VAR_2));
 __be16 VAR_5 = FUNC_7(VAR_2);
 struct igc_tx_buffer *VAR_6;
 u32 VAR_7 = 0;
 unsigned short VAR_8;
 u8 VAR_9 = 0;







 for (VAR_8 = 0; VAR_8 < FUNC_6(VAR_2)->nr_frags; VAR_8++)
  VAR_4 += FUNC_0(FUNC_4(
      &FUNC_6(VAR_2)->frags[VAR_8]));

 if (FUNC_1(VAR_3, VAR_4 + 3)) {

  return VAR_0;
 }


 VAR_6 = &VAR_3->tx_buffer_info[VAR_3->next_to_use];
 VAR_6->skb = VAR_2;
 VAR_6->bytecount = VAR_2->len;
 VAR_6->gso_segs = 1;


 VAR_6->tx_flags = VAR_7;
 VAR_6->protocol = VAR_5;

 FUNC_2(VAR_3, VAR_6);

 FUNC_3(VAR_3, VAR_6, VAR_9);

 return VAR_1;
}
