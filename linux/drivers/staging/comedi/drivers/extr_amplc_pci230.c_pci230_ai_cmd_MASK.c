
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci230_private {scalar_t__ hwver; int adcg; unsigned short adccon; scalar_t__ daqio; scalar_t__ ai_bipolar; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct pci230_private* private; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; unsigned int chanlist_len; scalar_t__ convert_src; int convert_arg; int scan_end_arg; int scan_begin_arg; scalar_t__ start_src; int flags; int * chanlist; } ;
struct comedi_async {int inttrig; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 unsigned short VAR_16 ;
 unsigned short VAR_17 ;
 unsigned short VAR_18 ;
 scalar_t__ VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_5 (unsigned char,scalar_t__) ;
 int FUNC_6 (unsigned short,scalar_t__) ;
 unsigned int* VAR_26 ;
 int VAR_27 ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_8 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_9 (struct comedi_device*,int,int ,int,int ) ;
 unsigned char FUNC_10 (int,int ) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_28, struct comedi_subdevice *VAR_29)
{
 struct pci230_private *VAR_30 = VAR_28->private;
 unsigned int VAR_31, VAR_32, VAR_33, VAR_34;
 unsigned int VAR_35;
 unsigned short VAR_36, VAR_37;
 unsigned char VAR_38;


 struct comedi_async *VAR_39 = VAR_29->async;
 struct comedi_cmd *VAR_40 = &VAR_39->cmd;




 VAR_35 = 0;




 VAR_35 |= VAR_22;
 if (VAR_40->scan_begin_src != VAR_23) {

  VAR_35 |= VAR_20;
  if (VAR_40->scan_begin_src == VAR_25) {

   VAR_35 |= VAR_21;
  }
 }

 if (!FUNC_8(VAR_28, VAR_35, VAR_7))
  return -VAR_2;
 VAR_36 = VAR_11;
 VAR_37 = 0;

 if (FUNC_0(VAR_40->chanlist[0]) == VAR_0) {

  VAR_34 = 1;
  VAR_36 |= VAR_13;
 } else {

  VAR_34 = 0;
  VAR_36 |= VAR_14;
 }

 VAR_33 = FUNC_2(VAR_40->chanlist[0]);
 VAR_30->ai_bipolar = FUNC_4(VAR_29, VAR_33);
 if (VAR_30->ai_bipolar)
  VAR_36 |= VAR_16;
 else
  VAR_36 |= VAR_17;

 for (VAR_31 = 0; VAR_31 < VAR_40->chanlist_len; VAR_31++) {
  unsigned int VAR_41;

  VAR_32 = FUNC_1(VAR_40->chanlist[VAR_31]);
  VAR_33 = FUNC_2(VAR_40->chanlist[VAR_31]);
  if (VAR_34) {
   VAR_41 = 2 * VAR_32;
   if (VAR_30->hwver == 0) {




    VAR_37 |= 3 << VAR_41;
   } else {




    VAR_37 |= 1 << VAR_41;
   }
  } else {
   VAR_41 = VAR_32 & ~1;
   VAR_37 |= 1 << VAR_32;
  }
  VAR_30->adcg = (VAR_30->adcg & ~(3 << VAR_41)) |
    (VAR_26[VAR_33] << VAR_41);
 }


 FUNC_6(VAR_37, VAR_30->daqio + VAR_9);


 FUNC_6(VAR_30->adcg, VAR_30->daqio + VAR_10);





 FUNC_3(VAR_28->pacer, 2, VAR_5);





 VAR_36 |= VAR_15 | VAR_18;
 VAR_30->adccon = VAR_36;
 FUNC_6(VAR_36 | VAR_12, VAR_30->daqio + VAR_8);
 FUNC_11(25, 100);


 FUNC_6(VAR_36 | VAR_12, VAR_30->daqio + VAR_8);

 if (VAR_40->convert_src == VAR_25) {





  VAR_38 = FUNC_10(2, VAR_3);
  FUNC_5(VAR_38, VAR_28->iobase + VAR_19);

  FUNC_9(VAR_28, 2, VAR_6, VAR_40->convert_arg,
     VAR_40->flags);
  if (VAR_40->scan_begin_src != VAR_23) {
   VAR_38 = FUNC_10(0, VAR_4);
   FUNC_5(VAR_38, VAR_28->iobase + VAR_19);
   FUNC_9(VAR_28, 0, VAR_5,
      ((u64)VAR_40->convert_arg *
       VAR_40->scan_end_arg),
      VAR_1);
   if (VAR_40->scan_begin_src == VAR_25) {






    VAR_38 = FUNC_10(1, VAR_3);
    FUNC_5(VAR_38, VAR_28->iobase + VAR_19);
    FUNC_9(VAR_28, 1, VAR_6,
       VAR_40->scan_begin_arg,
       VAR_40->flags);
   }
  }
 }

 if (VAR_40->start_src == VAR_24)
  VAR_29->async->inttrig = VAR_27;
 else
  FUNC_7(VAR_28, VAR_29);

 return 0;
}
