
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int complete; struct mcr20a_local* context; } ;
struct TYPE_5__ {int len; int rx_buf; int tx_buf; } ;
struct mcr20a_local {TYPE_1__ irq_msg; TYPE_2__ irq_xfer_data; TYPE_2__ irq_xfer_header; int irq_data; int irq_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct mcr20a_local *VAR_2)
{
 FUNC_1(&VAR_2->irq_msg);
 VAR_2->irq_msg.context = VAR_2;
 VAR_2->irq_msg.complete = VAR_1;
 VAR_2->irq_xfer_header.len = 1;
 VAR_2->irq_xfer_header.tx_buf = VAR_2->irq_header;
 VAR_2->irq_xfer_header.rx_buf = VAR_2->irq_header;

 VAR_2->irq_xfer_data.len = VAR_0;
 VAR_2->irq_xfer_data.rx_buf = VAR_2->irq_data;

 FUNC_0(&VAR_2->irq_xfer_header, &VAR_2->irq_msg);
 FUNC_0(&VAR_2->irq_xfer_data, &VAR_2->irq_msg);
}
