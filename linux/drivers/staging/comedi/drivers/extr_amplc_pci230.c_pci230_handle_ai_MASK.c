
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {scalar_t__ hwver; scalar_t__ daqio; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct pci230_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {int events; scalar_t__ scans_done; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 unsigned short FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_10,
        struct comedi_subdevice *VAR_11)
{
 struct pci230_private *VAR_12 = VAR_10->private;
 struct comedi_async *VAR_13 = VAR_11->async;
 struct comedi_cmd *VAR_14 = &VAR_13->cmd;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 unsigned short VAR_19;


 VAR_17 = FUNC_1(VAR_11, VAR_5);
 if (VAR_17 == 0)
  return;

 VAR_18 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  if (VAR_18 == 0) {

   VAR_15 = FUNC_3(VAR_12->daqio + VAR_4);
   if (VAR_15 & VAR_7) {




    FUNC_2(VAR_10->class_dev, "AI FIFO overrun\n");
    VAR_13->events |= VAR_2;
    break;
   } else if (VAR_15 & VAR_6) {

    break;
   } else if (VAR_15 & VAR_8) {

    VAR_18 = VAR_5;
   } else if (VAR_12->hwver > 0) {

    VAR_18 = FUNC_3(VAR_12->daqio +
       VAR_3);
    if (VAR_18 == 0)
     break;
   } else {

    VAR_18 = 1;
   }
  }

  VAR_19 = FUNC_4(VAR_10);
  if (!FUNC_0(VAR_11, &VAR_19, 1))
   break;

  VAR_18--;

  if (VAR_14->stop_src == VAR_9 &&
      VAR_13->scans_done >= VAR_14->stop_arg) {
   VAR_13->events |= VAR_1;
   break;
  }
 }


 if (!(VAR_13->events & VAR_0))
  FUNC_5(VAR_10, VAR_11);
}
