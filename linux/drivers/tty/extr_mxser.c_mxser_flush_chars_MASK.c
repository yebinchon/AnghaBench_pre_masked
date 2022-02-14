
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; struct mxser_port* driver_data; } ;
struct TYPE_3__ {int xmit_buf; } ;
struct mxser_port {scalar_t__ xmit_cnt; scalar_t__ type; int IER; int slock; scalar_t__ ioaddr; TYPE_2__* board; TYPE_1__ port; } ;
struct TYPE_4__ {int chip_flag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_3)
{
 struct mxser_port *VAR_4 = VAR_3->driver_data;
 unsigned long VAR_5;

 if (VAR_4->xmit_cnt <= 0 || VAR_3->stopped || !VAR_4->port.xmit_buf ||
   (VAR_3->hw_stopped && VAR_4->type != VAR_0 &&
    !VAR_4->board->chip_flag))
  return;

 FUNC_1(&VAR_4->slock, VAR_5);

 FUNC_0(VAR_4->IER & ~VAR_2, VAR_4->ioaddr + VAR_1);
 VAR_4->IER |= VAR_2;
 FUNC_0(VAR_4->IER, VAR_4->ioaddr + VAR_1);

 FUNC_2(&VAR_4->slock, VAR_5);
}
