
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct das6402_private {int irq; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct das6402_private* private; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_5,
     struct comedi_subdevice *VAR_6)
{
 struct das6402_private *VAR_7 = VAR_5->private;
 struct comedi_cmd *VAR_8 = &VAR_6->async->cmd;
 unsigned int VAR_9 = FUNC_0(VAR_8->chanlist[0]);
 unsigned int VAR_10 = FUNC_0(VAR_8->chanlist[VAR_8->chanlist_len - 1]);

 FUNC_6(VAR_5, VAR_6, VAR_8->chanlist[0], VAR_4);


 FUNC_8(FUNC_1(VAR_10) | FUNC_2(VAR_9),
      VAR_5->iobase + VAR_0);

 FUNC_5(VAR_5->pacer);
 FUNC_4(VAR_5->pacer, 1, 2, 1);


 FUNC_7(VAR_1 |
      FUNC_3(VAR_7->irq) |
      VAR_2, VAR_5->iobase + VAR_3);

 return 0;
}
