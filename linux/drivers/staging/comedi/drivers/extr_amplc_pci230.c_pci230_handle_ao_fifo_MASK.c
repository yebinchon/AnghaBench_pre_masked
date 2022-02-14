
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {scalar_t__ daqio; int daccon; } ;
struct comedi_subdevice {unsigned short* readback; struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct pci230_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; unsigned int chanlist_len; scalar_t__ stop_arg; int * chanlist; } ;
struct comedi_async {scalar_t__ scans_done; unsigned int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned short*,int) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,int ) ;
 int FUNC_3 (int ,char*) ;
 unsigned short FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct comedi_device*,unsigned short,unsigned int) ;

__attribute__((used)) static bool FUNC_7(struct comedi_device *VAR_16,
      struct comedi_subdevice *VAR_17)
{
 struct pci230_private *VAR_18 = VAR_16->private;
 struct comedi_async *VAR_19 = VAR_17->async;
 struct comedi_cmd *VAR_20 = &VAR_19->cmd;
 unsigned int VAR_21 = FUNC_2(VAR_17, 0);
 unsigned int VAR_22;
 unsigned short VAR_23;
 unsigned int VAR_24, VAR_25;
 unsigned int VAR_26 = 0;


 VAR_23 = FUNC_4(VAR_18->daqio + VAR_14);

 if (VAR_20->stop_src == VAR_15 && VAR_21 == 0)
  VAR_26 |= VAR_1;

 if (VAR_26 == 0) {

  if (VAR_23 & VAR_11) {
   FUNC_3(VAR_16->class_dev, "AO FIFO underrun\n");
   VAR_26 |= VAR_3 | VAR_2;
  }





  if (VAR_21 == 0 &&
      (VAR_23 & VAR_10) == 0) {
   FUNC_3(VAR_16->class_dev, "AO buffer underrun\n");
   VAR_26 |= VAR_3 | VAR_2;
  }
 }
 if (VAR_26 == 0) {

  if (VAR_23 & VAR_9)
   VAR_22 = VAR_5;
  else if (VAR_23 & VAR_10)
   VAR_22 = VAR_6;
  else if (VAR_23 & VAR_8)
   VAR_22 = VAR_4;
  else
   VAR_22 = VAR_7;

  VAR_22 /= VAR_20->chanlist_len;

  if (VAR_21 > VAR_22)
   VAR_21 = VAR_22;

  for (VAR_25 = 0; VAR_25 < VAR_21; VAR_25++) {
   for (VAR_24 = 0; VAR_24 < VAR_20->chanlist_len; VAR_24++) {
    unsigned int VAR_27 = FUNC_0(VAR_20->chanlist[VAR_24]);
    unsigned short VAR_28;

    FUNC_1(VAR_17, &VAR_28, 1);
    FUNC_6(VAR_16, VAR_28, VAR_27);
    VAR_17->readback[VAR_27] = VAR_28;
   }
  }

  if (VAR_20->stop_src == VAR_15 &&
      VAR_19->scans_done >= VAR_20->stop_arg) {





   VAR_18->daccon &= ~VAR_13;
   VAR_18->daccon |= VAR_12;
   FUNC_5(VAR_18->daccon, VAR_18->daqio + VAR_14);
  }

  VAR_23 = FUNC_4(VAR_18->daqio + VAR_14);
  if (VAR_23 & VAR_11) {
   FUNC_3(VAR_16->class_dev, "AO FIFO underrun\n");
   VAR_26 |= VAR_3 | VAR_2;
  }
 }
 VAR_19->events |= VAR_26;
 return !(VAR_19->events & VAR_0);
}
