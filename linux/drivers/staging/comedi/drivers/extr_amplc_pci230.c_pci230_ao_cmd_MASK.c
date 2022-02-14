
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci230_private {int hwver; unsigned short daccon; scalar_t__ daqio; scalar_t__ ao_bipolar; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct pci230_private* private; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; unsigned int chanlist_len; int flags; int scan_begin_arg; int * chanlist; } ;
struct TYPE_2__ {int inttrig; struct comedi_cmd cmd; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (unsigned short,scalar_t__) ;
 int VAR_16 ;
 int FUNC_5 (struct comedi_device*,int ,int ) ;
 int FUNC_6 (struct comedi_device*,int,int ,int ,int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_17, struct comedi_subdevice *VAR_18)
{
 struct pci230_private *VAR_19 = VAR_17->private;
 unsigned short VAR_20;
 unsigned int VAR_21;


 struct comedi_cmd *VAR_22 = &VAR_18->async->cmd;

 if (VAR_22->scan_begin_src == VAR_15) {

  if (!FUNC_5(VAR_17, VAR_14, VAR_3))
   return -VAR_0;
 }





 VAR_21 = FUNC_1(VAR_22->chanlist[0]);
 VAR_19->ao_bipolar = FUNC_2(VAR_18, VAR_21);
 VAR_20 = VAR_19->ao_bipolar ? VAR_11 : VAR_12;

 if (VAR_19->hwver >= 2) {
  unsigned short VAR_23;
  unsigned int VAR_24;

  VAR_23 = 0;
  for (VAR_24 = 0; VAR_24 < VAR_22->chanlist_len; VAR_24++)
   VAR_23 |= 1 << FUNC_0(VAR_22->chanlist[VAR_24]);


  FUNC_4(VAR_23, VAR_19->daqio + VAR_4);
  VAR_20 |= VAR_5 | VAR_6 |
     VAR_7 |
     VAR_9 | VAR_8;
 }


 FUNC_4(VAR_20, VAR_19->daqio + VAR_10);

 VAR_19->daccon = VAR_20 & ~(VAR_6 |
         VAR_7);

 if (VAR_22->scan_begin_src == VAR_15) {





  FUNC_3(FUNC_7(1, VAR_1),
       VAR_17->iobase + VAR_13);
  FUNC_6(VAR_17, 1, VAR_2,
     VAR_22->scan_begin_arg,
     VAR_22->flags);
 }


 VAR_18->async->inttrig = VAR_16;

 return 0;
}
