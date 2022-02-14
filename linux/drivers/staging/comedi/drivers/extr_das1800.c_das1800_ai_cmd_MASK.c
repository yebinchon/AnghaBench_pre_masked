
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {int irq_dma_bits; int dma_bits; int ai_is_unipolar; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct das1800_private* private; } ;
struct comedi_cmd {int flags; scalar_t__ stop_src; scalar_t__ start_src; int start_arg; int stop_arg; scalar_t__ scan_begin_src; scalar_t__ convert_src; int chanlist_len; int convert_arg; int * chanlist; } ;
struct comedi_async {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (struct comedi_subdevice*,int ) ;
 int FUNC_7 (struct comedi_device*,int *,int) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_26,
     struct comedi_subdevice *VAR_27)
{
 struct das1800_private *VAR_28 = VAR_26->private;
 int VAR_29, VAR_30;
 struct comedi_async *VAR_31 = VAR_27->async;
 const struct comedi_cmd *VAR_32 = &VAR_31->cmd;
 unsigned int VAR_33 = FUNC_0(VAR_32->chanlist[0]);





 if (VAR_32->flags & (VAR_5 | VAR_4))
  VAR_28->irq_dma_bits &= ~VAR_14;
 else
  VAR_28->irq_dma_bits |= VAR_28->dma_bits;

 if (VAR_32->flags & VAR_5) {

  VAR_28->irq_dma_bits &= ~VAR_16;
 } else {

  VAR_28->irq_dma_bits |= VAR_16;
 }

 FUNC_5(VAR_26, VAR_27);

 VAR_28->ai_is_unipolar = FUNC_4(VAR_27, VAR_33);

 VAR_29 = VAR_15;
 if (VAR_32->stop_src == VAR_22)
  VAR_29 |= VAR_0;
 if (VAR_32->start_src == VAR_22)
  VAR_29 |= VAR_20 | VAR_3;
 else
  VAR_29 |= VAR_2;
 if (VAR_29 & (VAR_0 | VAR_20)) {
  if ((VAR_32->start_arg & VAR_6) || (VAR_32->stop_arg & VAR_6))
   VAR_29 |= VAR_21;
 }

 VAR_30 = FUNC_6(VAR_27, VAR_32->chanlist[0]);

 if (VAR_32->scan_begin_src == VAR_23) {

  if (VAR_32->convert_src == VAR_24) {

   VAR_30 |= VAR_19;
  } else {

   VAR_30 |= VAR_25;
  }
 } else if (VAR_32->scan_begin_src == VAR_24) {

  VAR_30 |= VAR_1 | VAR_19;
 } else {

  VAR_30 |= VAR_1 | VAR_25;
 }

 FUNC_7(VAR_26, VAR_32->chanlist, VAR_32->chanlist_len);


 if ((VAR_32->scan_begin_src == VAR_23 ||
      VAR_32->scan_begin_src == VAR_24) &&
     VAR_32->convert_src == VAR_24) {
  FUNC_3(VAR_26->pacer);
  FUNC_2(VAR_26->pacer, 1, 2, 1);
 }


 if (VAR_32->stop_src == VAR_22)
  FUNC_1(VAR_26->pacer, 0, 1, VAR_18 | VAR_17);

 FUNC_8(VAR_26, VAR_27);
 FUNC_9(VAR_30, VAR_26->iobase + VAR_12);

 if (VAR_30 & VAR_1) {
  FUNC_9(VAR_32->convert_arg / 1000 - 1,
       VAR_26->iobase + VAR_9);
  FUNC_9(VAR_32->chanlist_len - 1, VAR_26->iobase + VAR_8);
 }


 FUNC_9(VAR_28->irq_dma_bits, VAR_26->iobase + VAR_11);
 FUNC_9(VAR_29, VAR_26->iobase + VAR_10);
 FUNC_9(VAR_7, VAR_26->iobase + VAR_13);

 return 0;
}
