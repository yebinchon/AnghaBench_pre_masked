
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {unsigned int len; } ;
struct ef4_tx_queue {unsigned int tx_min_size; int insert_count; } ;
struct ef4_tx_buffer {unsigned int len; int flags; struct sk_buff* skb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int * FUNC_2 (struct ef4_tx_queue*,struct ef4_tx_buffer*) ;
 struct ef4_tx_buffer* FUNC_3 (struct ef4_tx_queue*) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (struct sk_buff*,int ,int *,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ef4_tx_queue *VAR_3,
    struct sk_buff *VAR_4)
{
 unsigned int VAR_5 = VAR_3->tx_min_size;
 unsigned int VAR_6 = VAR_4->len;
 struct ef4_tx_buffer *VAR_7;
 u8 *VAR_8;
 int VAR_9;

 FUNC_0(VAR_6 > VAR_1);

 VAR_7 = FUNC_3(VAR_3);

 VAR_8 = FUNC_2(VAR_3, VAR_7);
 if (FUNC_6(!VAR_8))
  return -VAR_2;

 VAR_9 = FUNC_5(VAR_4, 0, VAR_8, VAR_6);
 FUNC_1(VAR_9);
 if (FUNC_6(VAR_6 < VAR_5)) {
  FUNC_4(VAR_8 + VAR_6, 0, VAR_5 - VAR_6);
  VAR_7->len = VAR_5;
 } else {
  VAR_7->len = VAR_6;
 }

 VAR_7->skb = VAR_4;
 VAR_7->flags = VAR_0;

 ++VAR_3->insert_count;
 return VAR_9;
}
