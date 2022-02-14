
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pic32_spi {int xfer_done; TYPE_2__* master; int tx_irq; int rx_irq; int fault_irq; } ;
struct TYPE_4__ {TYPE_1__* cur_msg; int dev; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pic32_spi *VAR_1, const char *VAR_2)
{

 FUNC_2(VAR_1->fault_irq);
 FUNC_2(VAR_1->rx_irq);
 FUNC_2(VAR_1->tx_irq);


 FUNC_1(&VAR_1->master->dev, "%s\n", VAR_2);
 if (VAR_1->master->cur_msg)
  VAR_1->master->cur_msg->status = -VAR_0;
 FUNC_0(&VAR_1->xfer_done);
}
