
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int complete; struct mrf24j40* context; } ;
struct TYPE_5__ {int len; int rx_buf; int tx_buf; } ;
struct mrf24j40 {TYPE_1__ irq_msg; TYPE_2__ irq_trx; int irq_buf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct mrf24j40 *VAR_1)
{
 FUNC_1(&VAR_1->irq_msg);
 VAR_1->irq_msg.context = VAR_1;
 VAR_1->irq_msg.complete = VAR_0;
 VAR_1->irq_trx.len = 2;
 VAR_1->irq_trx.tx_buf = VAR_1->irq_buf;
 VAR_1->irq_trx.rx_buf = VAR_1->irq_buf;
 FUNC_0(&VAR_1->irq_trx, &VAR_1->irq_msg);
}
