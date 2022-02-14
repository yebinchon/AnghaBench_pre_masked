
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {unsigned int len; } ;
struct efx_tx_queue {int insert_count; } ;
struct efx_tx_buffer {unsigned int len; int flags; struct sk_buff* skb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int * FUNC_2 (struct efx_tx_queue*,struct efx_tx_buffer*) ;
 struct efx_tx_buffer* FUNC_3 (struct efx_tx_queue*) ;
 int FUNC_4 (struct sk_buff*,int ,int *,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct efx_tx_queue *VAR_3,
    struct sk_buff *VAR_4)
{
 unsigned int VAR_5 = VAR_4->len;
 struct efx_tx_buffer *VAR_6;
 u8 *VAR_7;
 int VAR_8;

 FUNC_0(VAR_5 > VAR_1);

 VAR_6 = FUNC_3(VAR_3);

 VAR_7 = FUNC_2(VAR_3, VAR_6);
 if (FUNC_5(!VAR_7))
  return -VAR_2;

 VAR_8 = FUNC_4(VAR_4, 0, VAR_7, VAR_5);
 FUNC_1(VAR_8);
 VAR_6->len = VAR_5;

 VAR_6->skb = VAR_4;
 VAR_6->flags = VAR_0;

 ++VAR_3->insert_count;
 return VAR_8;
}
