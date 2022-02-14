
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci224_private {int* ao_scan_vals; size_t* ao_scan_order; int daccon; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; struct pci224_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; unsigned int chanlist_len; scalar_t__ scan_begin_src; int scan_begin_arg; } ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 void* FUNC_0 (int,unsigned short,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 unsigned short VAR_4 ;

 unsigned short VAR_5 ;
 int VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned short VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (struct comedi_subdevice*,int*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_3 (struct comedi_subdevice*,int ) ;
 int FUNC_4 (int ,char*) ;
 unsigned short FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_19,
      struct comedi_subdevice *VAR_20)
{
 struct pci224_private *VAR_21 = VAR_19->private;
 struct comedi_cmd *VAR_22 = &VAR_20->async->cmd;
 unsigned int VAR_23 = FUNC_3(VAR_20, 0);
 unsigned int VAR_24;
 unsigned short VAR_25;
 unsigned int VAR_26, VAR_27;


 VAR_25 = FUNC_5(VAR_19->iobase + VAR_3);
 switch (VAR_25 & VAR_4) {
 case 130:
  VAR_24 = VAR_13;
  if (VAR_22->stop_src == VAR_17 &&
      VAR_20->async->scans_done >= VAR_22->stop_arg) {

   VAR_20->async->events |= VAR_0;
   FUNC_2(VAR_19, VAR_20);
   return;
  }
  break;
 case 128:
  VAR_24 = VAR_16;
  break;
 case 129:
  VAR_24 = VAR_15;
  break;
 default:
  VAR_24 = VAR_14;
  break;
 }
 if (VAR_24 >= VAR_16) {

  if (VAR_23 == 0) {

   FUNC_4(VAR_19->class_dev, "AO buffer underrun\n");
   VAR_20->async->events |= VAR_1;
  }
 }

 VAR_24 /= VAR_22->chanlist_len;


 if (VAR_23 > VAR_24)
  VAR_23 = VAR_24;


 for (VAR_27 = 0; VAR_27 < VAR_23; VAR_27++) {
  FUNC_1(VAR_20, &VAR_21->ao_scan_vals[0],
     VAR_22->chanlist_len);
  for (VAR_26 = 0; VAR_26 < VAR_22->chanlist_len; VAR_26++) {
   FUNC_6(VAR_21->ao_scan_vals[VAR_21->ao_scan_order[VAR_26]],
        VAR_19->iobase + VAR_12);
  }
 }
 if (VAR_22->stop_src == VAR_17 &&
     VAR_20->async->scans_done >= VAR_22->stop_arg) {




  VAR_21->daccon = FUNC_0(VAR_21->daccon,
       VAR_5,
       VAR_6);
  FUNC_6(VAR_21->daccon, VAR_19->iobase + VAR_3);
 }
 if ((VAR_21->daccon & VAR_9) ==
     VAR_10) {
  unsigned short VAR_28;
  if (VAR_22->scan_begin_src == VAR_18) {
   VAR_28 = VAR_11;
  } else {

   if (VAR_22->scan_begin_arg & VAR_2)
    VAR_28 = VAR_7;
   else
    VAR_28 = VAR_8;
  }
  VAR_21->daccon =
      FUNC_0(VAR_21->daccon, VAR_28, VAR_9);
  FUNC_6(VAR_21->daccon, VAR_19->iobase + VAR_3);
 }

 FUNC_2(VAR_19, VAR_20);
}
