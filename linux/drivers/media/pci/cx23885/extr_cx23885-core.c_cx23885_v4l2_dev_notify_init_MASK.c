
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notify; } ;
struct cx23885_dev {TYPE_1__ v4l2_dev; int ir_tx_work; int ir_rx_work; int cx25840_work; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct cx23885_dev *VAR_4)
{
 FUNC_0(&VAR_4->cx25840_work, VAR_0);
 FUNC_0(&VAR_4->ir_rx_work, VAR_1);
 FUNC_0(&VAR_4->ir_tx_work, VAR_2);
 VAR_4->v4l2_dev.notify = VAR_3;
}
