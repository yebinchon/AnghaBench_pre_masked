
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci1710_private {int ctrl; int ctrl_ext; int ai_et; int saved_seglen; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct pci1710_private* private; } ;
struct comedi_cmd {int flags; scalar_t__ convert_src; scalar_t__ start_src; int chanlist_len; int chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_13, struct comedi_subdevice *VAR_14)
{
 struct pci1710_private *VAR_15 = VAR_13->private;
 struct comedi_cmd *VAR_16 = &VAR_14->async->cmd;

 FUNC_4(VAR_13, VAR_14, VAR_16->chanlist, VAR_16->chanlist_len,
      VAR_15->saved_seglen);

 FUNC_2(0, VAR_13->iobase + VAR_1);
 FUNC_2(0, VAR_13->iobase + VAR_2);

 VAR_15->ctrl &= VAR_3;
 if ((VAR_16->flags & VAR_0) == 0)
  VAR_15->ctrl |= VAR_7;

 if (VAR_16->convert_src == VAR_12) {
  FUNC_1(VAR_13->pacer);

  VAR_15->ctrl |= VAR_8 | VAR_6;
  if (VAR_16->start_src == VAR_10) {
   VAR_15->ctrl_ext = VAR_15->ctrl;
   VAR_15->ctrl &= ~(VAR_8 |
        VAR_7 |
        VAR_5);
   VAR_15->ctrl |= VAR_4;
   VAR_15->ai_et = 1;
  } else {
   VAR_15->ai_et = 0;
  }
  FUNC_3(VAR_15->ctrl, VAR_13->iobase + VAR_9);

  if (VAR_16->start_src == VAR_11)
   FUNC_0(VAR_13->pacer, 1, 2, 1);
 } else {
  VAR_15->ctrl |= VAR_4 | VAR_6;
  FUNC_3(VAR_15->ctrl, VAR_13->iobase + VAR_9);
 }

 return 0;
}
