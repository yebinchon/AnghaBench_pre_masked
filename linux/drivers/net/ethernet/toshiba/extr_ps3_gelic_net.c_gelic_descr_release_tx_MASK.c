
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct gelic_descr {struct sk_buff* skb; scalar_t__ data_error; scalar_t__ data_status; scalar_t__ valid_size; scalar_t__ result_size; scalar_t__ next_descr_addr; scalar_t__ buf_size; scalar_t__ buf_addr; } ;
struct gelic_card {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct gelic_card*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (struct gelic_descr*,int ) ;

__attribute__((used)) static void FUNC_6(struct gelic_card *VAR_3,
           struct gelic_descr *VAR_4)
{
 struct sk_buff *VAR_5 = VAR_4->skb;

 FUNC_0(!(FUNC_1(VAR_4->data_status) & VAR_2));

 FUNC_4(FUNC_2(VAR_3), FUNC_1(VAR_4->buf_addr), VAR_5->len,
    VAR_0);
 FUNC_3(VAR_5);

 VAR_4->buf_addr = 0;
 VAR_4->buf_size = 0;
 VAR_4->next_descr_addr = 0;
 VAR_4->result_size = 0;
 VAR_4->valid_size = 0;
 VAR_4->data_status = 0;
 VAR_4->data_error = 0;
 VAR_4->skb = ((void*)0);


 FUNC_5(VAR_4, VAR_1);
}
