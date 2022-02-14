
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmdq_pkt {struct cmdq_pkt* va_base; int buf_size; int pa_base; scalar_t__ cl; } ;
struct cmdq_client {TYPE_2__* chan; } ;
struct TYPE_4__ {TYPE_1__* mbox; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct cmdq_pkt*) ;

void FUNC_2(struct cmdq_pkt *VAR_1)
{
 struct cmdq_client *VAR_2 = (struct cmdq_client *)VAR_1->cl;

 FUNC_0(VAR_2->chan->mbox->dev, VAR_1->pa_base, VAR_1->buf_size,
    VAR_0);
 FUNC_1(VAR_1->va_base);
 FUNC_1(VAR_1);
}
