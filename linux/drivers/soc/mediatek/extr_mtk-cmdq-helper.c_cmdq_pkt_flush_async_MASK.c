
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct cmdq_pkt* data; int cb; } ;
struct TYPE_6__ {void* data; int cb; } ;
struct cmdq_pkt {int cmd_buf_size; int pa_base; TYPE_2__ async_cb; TYPE_1__ cb; scalar_t__ cl; } ;
struct cmdq_client {scalar_t__ timeout_ms; TYPE_4__* chan; int lock; int timer; int pkt_cnt; } ;
typedef int cmdq_async_flush_cb ;
struct TYPE_9__ {TYPE_3__* mbox; } ;
struct TYPE_8__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmdq_pkt*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,struct cmdq_pkt*) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct cmdq_pkt *VAR_4, cmdq_async_flush_cb VAR_5,
    void *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = 0;
 struct cmdq_client *VAR_9 = (struct cmdq_client *)VAR_4->cl;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4->cb.cb = VAR_5;
 VAR_4->cb.data = VAR_6;
 VAR_4->async_cb.cb = VAR_2;
 VAR_4->async_cb.data = VAR_4;

 FUNC_1(VAR_9->chan->mbox->dev, VAR_4->pa_base,
       VAR_4->cmd_buf_size, VAR_1);

 if (VAR_9->timeout_ms != VAR_0) {
  FUNC_6(&VAR_9->lock, VAR_8);
  if (VAR_9->pkt_cnt++ == 0)
   FUNC_4(&VAR_9->timer, VAR_3 +
      FUNC_5(VAR_9->timeout_ms));
  FUNC_7(&VAR_9->lock, VAR_8);
 }

 FUNC_3(VAR_9->chan, VAR_4);

 FUNC_2(VAR_9->chan, 0);

 return 0;
}
