
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ionic_rxq_desc {int len; int addr; } ;
struct ionic_queue {TYPE_1__* head; } ;
struct ionic_desc_info {struct ionic_rxq_desc* desc; } ;
struct TYPE_2__ {struct ionic_rxq_desc* desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_queue*,int,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct ionic_queue *VAR_1, struct ionic_desc_info *VAR_2,
        struct sk_buff *VAR_3)
{
 struct ionic_rxq_desc *VAR_4 = VAR_2->desc;
 struct ionic_rxq_desc *VAR_5 = VAR_1->head->desc;

 VAR_5->addr = VAR_4->addr;
 VAR_5->len = VAR_4->len;

 FUNC_0(VAR_1, 1, VAR_0, VAR_3);
}
