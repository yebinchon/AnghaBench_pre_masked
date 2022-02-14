
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9111_private_data {scalar_t__ lcr_io_base; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; int class_dev; int attached; struct comedi_subdevice* read_subdev; struct pci9111_private_data* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned char VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_13, void *VAR_14)
{
 struct comedi_device *VAR_15 = VAR_14;
 struct pci9111_private_data *VAR_16 = VAR_15->private;
 struct comedi_subdevice *VAR_17 = VAR_15->read_subdev;
 struct comedi_async *VAR_18;
 struct comedi_cmd *VAR_19;
 unsigned int VAR_20;
 unsigned long VAR_21;
 unsigned char VAR_22;

 if (!VAR_15->attached) {


  return VAR_3;
 }

 VAR_18 = VAR_17->async;
 VAR_19 = &VAR_18->cmd;

 FUNC_5(&VAR_15->spinlock, VAR_21);


 VAR_22 = FUNC_2(VAR_16->lcr_io_base + VAR_10);
 if (!(((VAR_22 & VAR_11) != 0) &&
       (((VAR_22 & VAR_8) == VAR_8) ||
        ((VAR_22 & VAR_9) == VAR_9)))) {


  FUNC_6(&VAR_15->spinlock, VAR_21);
  return VAR_3;
 }

 if ((VAR_22 & VAR_8) == VAR_8) {


  VAR_20 = FUNC_2(VAR_15->iobase + VAR_4);


  if (!(VAR_20 & VAR_5)) {
   FUNC_6(&VAR_15->spinlock, VAR_21);
   FUNC_1(VAR_15->class_dev, "fifo overflow\n");
   FUNC_3(0, VAR_15->iobase + VAR_7);
   VAR_18->events |= VAR_1;
   FUNC_0(VAR_15, VAR_17);

   return VAR_2;
  }


  if (!(VAR_20 & VAR_6))
   FUNC_4(VAR_15, VAR_17);
 }

 if (VAR_19->stop_src == VAR_12 && VAR_18->scans_done >= VAR_19->stop_arg)
  VAR_18->events |= VAR_0;

 FUNC_3(0, VAR_15->iobase + VAR_7);

 FUNC_6(&VAR_15->spinlock, VAR_21);

 FUNC_0(VAR_15, VAR_17);

 return VAR_2;
}
