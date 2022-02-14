
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int hw_stopped; int stopped; struct mxser_port* driver_data; } ;
struct TYPE_3__ {unsigned char* xmit_buf; } ;
struct mxser_port {int xmit_cnt; int xmit_head; scalar_t__ type; int IER; int slock; scalar_t__ ioaddr; TYPE_2__* board; TYPE_1__ port; } ;
struct TYPE_4__ {scalar_t__ chip_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_4, unsigned char VAR_5)
{
 struct mxser_port *VAR_6 = VAR_4->driver_data;
 unsigned long VAR_7;

 if (!VAR_6->port.xmit_buf)
  return 0;

 if (VAR_6->xmit_cnt >= VAR_1 - 1)
  return 0;

 FUNC_1(&VAR_6->slock, VAR_7);
 VAR_6->port.xmit_buf[VAR_6->xmit_head++] = VAR_5;
 VAR_6->xmit_head &= VAR_1 - 1;
 VAR_6->xmit_cnt++;
 FUNC_2(&VAR_6->slock, VAR_7);
 if (!VAR_4->stopped) {
  if (!VAR_4->hw_stopped ||
    (VAR_6->type == VAR_0) ||
    VAR_6->board->chip_flag) {
   FUNC_1(&VAR_6->slock, VAR_7);
   FUNC_0(VAR_6->IER & ~VAR_3, VAR_6->ioaddr + VAR_2);
   VAR_6->IER |= VAR_3;
   FUNC_0(VAR_6->IER, VAR_6->ioaddr + VAR_2);
   FUNC_2(&VAR_6->slock, VAR_7);
  }
 }
 return 1;
}
