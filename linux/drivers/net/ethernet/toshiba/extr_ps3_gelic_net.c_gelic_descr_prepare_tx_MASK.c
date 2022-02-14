
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data; int dev; } ;
struct gelic_descr {int next; scalar_t__ next_descr_addr; scalar_t__ data_status; struct sk_buff* skb; void* buf_size; void* buf_addr; } ;
struct TYPE_5__ {int head; } ;
struct gelic_card {TYPE_2__ tx_chain; TYPE_1__* vlan; scalar_t__ vlan_required; } ;
typedef enum gelic_port_type { ____Placeholder_gelic_port_type } gelic_port_type ;
typedef int dma_addr_t ;
struct TYPE_6__ {int type; } ;
struct TYPE_4__ {int tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct gelic_card*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct gelic_descr*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 TYPE_3__* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct gelic_card *VAR_2,
      struct gelic_descr *VAR_3,
      struct sk_buff *VAR_4)
{
 dma_addr_t VAR_5;

 if (VAR_2->vlan_required) {
  struct sk_buff *VAR_6;
  enum gelic_port_type VAR_7;

  VAR_7 = FUNC_6(VAR_4->dev)->type;
  VAR_6 = FUNC_5(VAR_4,
          VAR_2->vlan[VAR_7].tx);
  if (!VAR_6)
   return -VAR_1;
  VAR_4 = VAR_6;
 }

 VAR_5 = FUNC_3(FUNC_1(VAR_2), VAR_4->data, VAR_4->len, VAR_0);

 if (!VAR_5) {
  FUNC_2(FUNC_1(VAR_2),
   "dma map 2 failed (%p, %i). Dropping packet\n",
   VAR_4->data, VAR_4->len);
  return -VAR_1;
 }

 VAR_3->buf_addr = FUNC_0(VAR_5);
 VAR_3->buf_size = FUNC_0(VAR_4->len);
 VAR_3->skb = VAR_4;
 VAR_3->data_status = 0;
 VAR_3->next_descr_addr = 0;
 FUNC_4(VAR_3, VAR_4);


 VAR_2->tx_chain.head = VAR_3->next;
 return 0;
}
