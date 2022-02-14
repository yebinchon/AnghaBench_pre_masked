
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct pn533_frame_ops {int (* tx_frame_finish ) (int ) ;int (* tx_update_payload_len ) (int ,int) ;int (* tx_frame_init ) (int ,int ) ;int tx_tail_len; int tx_header_len; } ;
struct pn533 {struct pn533_frame_ops* ops; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pn533 *VAR_0, u8 VAR_1,
      struct sk_buff *VAR_2)
{

 int VAR_3 = VAR_2->len;
 struct pn533_frame_ops *VAR_4 = VAR_0->ops;


 FUNC_0(VAR_2, VAR_4->tx_header_len);
 FUNC_1(VAR_2, VAR_4->tx_tail_len);

 VAR_4->tx_frame_init(VAR_2->data, VAR_1);
 VAR_4->tx_update_payload_len(VAR_2->data, VAR_3);
 VAR_4->tx_frame_finish(VAR_2->data);
}
