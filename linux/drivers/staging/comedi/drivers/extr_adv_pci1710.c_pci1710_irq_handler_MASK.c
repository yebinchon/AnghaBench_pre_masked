
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci1710_private {int ctrl; int mux_scan; int ctrl_ext; scalar_t__ ai_et; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int pacer; scalar_t__ iobase; struct comedi_subdevice* read_subdev; int attached; struct pci1710_private* private; } ;
struct comedi_cmd {int flags; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct comedi_device *VAR_13 = VAR_12;
 struct pci1710_private *VAR_14 = VAR_13->private;
 struct comedi_subdevice *VAR_15;
 struct comedi_cmd *VAR_16;

 if (!VAR_13->attached)
  return VAR_2;

 VAR_15 = VAR_13->read_subdev;
 VAR_16 = &VAR_15->async->cmd;


 if (!(FUNC_2(VAR_13->iobase + VAR_10) & VAR_9))
  return VAR_2;

 if (VAR_14->ai_et) {
  VAR_14->ai_et = 0;
  VAR_14->ctrl &= VAR_5;
  VAR_14->ctrl |= VAR_7;
  FUNC_4(VAR_14->ctrl, VAR_13->iobase + VAR_6);
  VAR_14->ctrl = VAR_14->ctrl_ext;
  FUNC_3(0, VAR_13->iobase + VAR_3);
  FUNC_3(0, VAR_13->iobase + VAR_4);

  FUNC_4(VAR_14->mux_scan, VAR_13->iobase + VAR_8);
  FUNC_4(VAR_14->ctrl, VAR_13->iobase + VAR_6);
  FUNC_0(VAR_13->pacer, 1, 2, 1);
  return VAR_1;
 }

 if (VAR_16->flags & VAR_0)
  FUNC_5(VAR_13, VAR_15);
 else
  FUNC_6(VAR_13, VAR_15);

 FUNC_1(VAR_13, VAR_15);

 return VAR_1;
}
