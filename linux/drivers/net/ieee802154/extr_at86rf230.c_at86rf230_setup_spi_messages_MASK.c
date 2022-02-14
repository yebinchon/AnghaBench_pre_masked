
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int function; } ;
struct TYPE_7__ {struct at86rf230_state_change* context; } ;
struct TYPE_8__ {int len; int rx_buf; int tx_buf; } ;
struct at86rf230_state_change {TYPE_5__ timer; TYPE_2__ msg; TYPE_3__ trx; int buf; int irq; struct at86rf230_local* lp; } ;
struct at86rf230_local {TYPE_1__* spi; } ;
struct TYPE_6__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(struct at86rf230_local *VAR_3,
        struct at86rf230_state_change *VAR_4)
{
 VAR_4->lp = VAR_3;
 VAR_4->irq = VAR_3->spi->irq;
 FUNC_2(&VAR_4->msg);
 VAR_4->msg.context = VAR_4;
 VAR_4->trx.len = 2;
 VAR_4->trx.tx_buf = VAR_4->buf;
 VAR_4->trx.rx_buf = VAR_4->buf;
 FUNC_1(&VAR_4->trx, &VAR_4->msg);
 FUNC_0(&VAR_4->timer, VAR_0, VAR_1);
 VAR_4->timer.function = VAR_2;
}
