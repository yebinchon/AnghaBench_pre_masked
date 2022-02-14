
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int command; } ;
struct tx_cmd {TYPE_3__ cmd; int dma_addr; struct sk_buff* skb; } ;
struct sk_buff {int len; } ;
struct TYPE_7__ {int tx_aborted_errors; int tx_errors; } ;
struct TYPE_6__ {int parent; } ;
struct net_device {TYPE_2__ stats; TYPE_1__ dev; } ;
struct i596_scb {int dummy; } ;
struct i596_private {TYPE_4__* dma; int cmd_backlog; struct i596_cmd* cmd_head; } ;
struct i596_cmd {void* b_next; struct i596_cmd* v_next; int command; } ;
struct TYPE_10__ {void* cmd; } ;
struct TYPE_9__ {TYPE_5__ scb; } ;



 int VAR_0 ;
 int FUNC_0 (struct net_device*,TYPE_5__*,int) ;
 int FUNC_1 (struct net_device*,struct i596_cmd*,int) ;
 void* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct net_device*,TYPE_4__*,int,char*) ;

__attribute__((used)) static inline void FUNC_6(struct net_device *VAR_2, struct i596_private *VAR_3)
{
 struct i596_cmd *VAR_4;

 while (VAR_3->cmd_head != ((void*)0)) {
  VAR_4 = VAR_3->cmd_head;
  VAR_3->cmd_head = VAR_4->v_next;
  VAR_3->cmd_backlog--;

  switch (FUNC_2(VAR_4->command) & 0x7) {
  case 128:
   {
    struct tx_cmd *VAR_5 = (struct tx_cmd *) VAR_4;
    struct sk_buff *VAR_6 = VAR_5->skb;
    FUNC_4(VAR_2->dev.parent,
       VAR_5->dma_addr,
       VAR_6->len, VAR_0);

    FUNC_3(VAR_6);

    VAR_2->stats.tx_errors++;
    VAR_2->stats.tx_aborted_errors++;

    VAR_4->v_next = ((void*)0);
    VAR_4->b_next = VAR_1;
    VAR_5->cmd.command = 0;
    break;
   }
  default:
   VAR_4->v_next = ((void*)0);
   VAR_4->b_next = VAR_1;
  }
  FUNC_1(VAR_2, VAR_4, sizeof(struct i596_cmd));
 }

 FUNC_5(VAR_2, VAR_3->dma, 100, "i596_cleanup_cmd timed out");
 VAR_3->dma->scb.cmd = VAR_1;
 FUNC_0(VAR_2, &(VAR_3->dma->scb), sizeof(struct i596_scb));
}
