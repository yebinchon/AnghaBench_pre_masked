
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16_private_struct {int ctrl_reg; scalar_t__ can_burst; int timer; scalar_t__ timer_running; struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma {int chan; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; struct das16_private_struct* private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{
 struct das16_private_struct *VAR_7 = VAR_5->private;
 struct comedi_isadma *VAR_8 = VAR_7->dma;
 unsigned long VAR_9;

 FUNC_3(&VAR_5->spinlock, VAR_9);


 VAR_7->ctrl_reg &= ~(VAR_2 | VAR_1 |
          VAR_3);
 FUNC_2(VAR_7->ctrl_reg, VAR_5->iobase + VAR_4);

 FUNC_0(VAR_8->chan);


 if (VAR_7->timer_running) {
  VAR_7->timer_running = 0;
  FUNC_1(&VAR_7->timer);
 }

 if (VAR_7->can_burst)
  FUNC_2(0, VAR_5->iobase + VAR_0);

 FUNC_4(&VAR_5->spinlock, VAR_9);

 return 0;
}
