
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; int attached; struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned short FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, void *VAR_10)
{
 struct comedi_device *VAR_11 = VAR_10;
 struct comedi_subdevice *VAR_12 = VAR_11->read_subdev;
 struct comedi_async *VAR_13 = VAR_12->async;
 struct comedi_cmd *VAR_14 = &VAR_13->cmd;
 unsigned int VAR_15;

 if (!VAR_11->attached)
  return VAR_7;

 VAR_15 = FUNC_3(VAR_11->iobase + VAR_5);

 if (VAR_15 & VAR_3) {
  VAR_13->events |= VAR_1;

  FUNC_4(VAR_15 | VAR_4,
       VAR_11->iobase + VAR_5);
 }

 if (VAR_15 & VAR_2) {
  unsigned short VAR_16;

  VAR_16 = FUNC_2(VAR_11, VAR_12);
  FUNC_0(VAR_12, &VAR_16, 1);
 }

 if (VAR_14->stop_src == VAR_8 && VAR_13->scans_done >= VAR_14->stop_arg)
  VAR_13->events |= VAR_0;

 FUNC_1(VAR_11, VAR_12);

 return VAR_6;
}
