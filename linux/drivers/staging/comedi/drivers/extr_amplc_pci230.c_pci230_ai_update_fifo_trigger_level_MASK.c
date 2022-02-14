
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci230_private {scalar_t__ hwver; unsigned int adcfifothresh; unsigned short adccon; scalar_t__ daqio; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pci230_private* private; } ;
struct comedi_cmd {int flags; unsigned int scan_end_arg; } ;
struct TYPE_2__ {unsigned int cur_chan; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_1 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_8,
      struct comedi_subdevice *VAR_9)
{
 struct pci230_private *VAR_10 = VAR_8->private;
 struct comedi_cmd *VAR_11 = &VAR_9->async->cmd;
 unsigned int VAR_12;
 unsigned short VAR_13;
 unsigned short VAR_14;

 if (VAR_11->flags & VAR_0)
  VAR_12 = VAR_11->scan_end_arg - VAR_9->async->cur_chan;
 else
  VAR_12 = FUNC_0(VAR_9, VAR_4);

 if (VAR_12 >= VAR_4) {
  VAR_13 = VAR_5;
 } else if (VAR_12 > 1 && VAR_10->hwver > 0) {

  if (VAR_10->adcfifothresh != VAR_12) {
   VAR_10->adcfifothresh = VAR_12;
   FUNC_1(VAR_12, VAR_10->daqio + VAR_1);
  }
  VAR_13 = VAR_2;
 } else {
  VAR_13 = VAR_7;
 }
 VAR_14 = (VAR_10->adccon & ~VAR_6) | VAR_13;
 if (VAR_14 != VAR_10->adccon) {
  VAR_10->adccon = VAR_14;
  FUNC_1(VAR_14, VAR_10->daqio + VAR_3);
 }
}
