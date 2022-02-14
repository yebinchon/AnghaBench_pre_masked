
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9118_private {int ai_flags; int ai_add_front; int ai_add_back; int ai_neverending; int usedma; unsigned int softsshdelay; unsigned int ai_ns_min; unsigned int ai_n_realscanlen; int ai_do; int ai_cfg; scalar_t__ iobase_a; scalar_t__ ai_act_dmapos; int ai_ctrl; struct pci9118_dmabuf* dmabuf; int int_ctrl; scalar_t__ master; int ai12_startstop; } ;
struct pci9118_dmabuf {int hw; } ;
struct comedi_subdevice {unsigned int len_chanlist; TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; struct comedi_8254* pacer; struct pci9118_private* private; } ;
struct comedi_cmd {int flags; scalar_t__ start_src; scalar_t__ stop_src; int scan_end_arg; scalar_t__ convert_src; scalar_t__ scan_begin_src; unsigned int convert_arg; int chanlist_len; int scan_begin_arg; int chanlist; } ;
struct comedi_8254 {int divisor2; int divisor1; } ;
struct TYPE_2__ {int inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_0 (struct comedi_8254*,int*,int) ;
 int FUNC_1 (struct comedi_8254*,int ,int,int) ;
 int FUNC_2 (struct comedi_8254*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct comedi_device*) ;
 int VAR_33 ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_9 (struct comedi_device*,int) ;
 int FUNC_10 (struct comedi_device*,struct comedi_subdevice*,int *,int*,int,unsigned int,int *,int *,unsigned int) ;
 int FUNC_11 (struct comedi_device*,int) ;
 int FUNC_12 (struct comedi_device*,struct comedi_subdevice*,unsigned int,int ,unsigned int,unsigned int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct comedi_device *VAR_34, struct comedi_subdevice *VAR_35)
{
 struct pci9118_private *VAR_36 = VAR_34->private;
 struct comedi_8254 *VAR_37 = VAR_34->pacer;
 struct comedi_cmd *VAR_38 = &VAR_35->async->cmd;
 unsigned int VAR_39 = 0;
 unsigned int VAR_40;

 VAR_36->ai12_startstop = 0;
 VAR_36->ai_flags = VAR_38->flags;
 VAR_36->ai_add_front = 0;
 VAR_36->ai_add_back = 0;


 if (VAR_38->start_src == VAR_27)
  VAR_36->ai12_startstop |= VAR_24;
 if (VAR_38->stop_src == VAR_27) {
  VAR_36->ai_neverending = 1;
  VAR_36->ai12_startstop |= VAR_25;
 }
 if (VAR_38->stop_src == VAR_30)
  VAR_36->ai_neverending = 1;
 if (VAR_38->stop_src == VAR_26)
  VAR_36->ai_neverending = 0;





 VAR_36->ai_add_front = 0;
 VAR_36->ai_add_back = 0;
 if (VAR_36->master) {
  VAR_36->usedma = 1;
  if ((VAR_38->flags & VAR_3) &&
      (VAR_38->scan_end_arg == 1)) {
   if (VAR_38->convert_src == VAR_31)
    VAR_36->ai_add_back = 1;
   if (VAR_38->convert_src == VAR_32) {
    VAR_36->usedma = 0;




   }
  }
  if ((VAR_38->flags & VAR_3) &&
      (VAR_38->scan_end_arg & 1) &&
      (VAR_38->scan_end_arg > 1)) {
   if (VAR_38->scan_begin_src == VAR_28) {
    VAR_36->usedma = 0;



   } else {



    VAR_36->ai_add_back = 1;
   }
  }
 } else {
  VAR_36->usedma = 0;
 }





 if (VAR_38->convert_src == VAR_31 && VAR_36->softsshdelay) {
  VAR_36->ai_add_front = 2;
  if ((VAR_36->usedma == 1) && (VAR_36->ai_add_back == 1)) {

   VAR_36->ai_add_front++;
   VAR_36->ai_add_back = 0;
  }
  if (VAR_38->convert_arg < VAR_36->ai_ns_min)
   VAR_38->convert_arg = VAR_36->ai_ns_min;
  VAR_39 = VAR_36->softsshdelay / VAR_38->convert_arg;
  if (VAR_36->softsshdelay % VAR_38->convert_arg)
   VAR_39++;
  if (VAR_39 > (VAR_36->ai_add_front - 1)) {

   VAR_36->ai_add_front = VAR_39 + 1;
   if (VAR_36->usedma == 1)
    if ((VAR_36->ai_add_front +
         VAR_38->chanlist_len +
         VAR_36->ai_add_back) & 1)
     VAR_36->ai_add_front++;

  }
 }

 VAR_40 = VAR_36->ai_add_front + VAR_38->chanlist_len +
    VAR_36->ai_add_back;




 VAR_36->ai_n_realscanlen = VAR_40 *
        (VAR_38->scan_end_arg / VAR_38->chanlist_len);

 if (VAR_40 > VAR_35->len_chanlist) {
  FUNC_3(VAR_34->class_dev,
   "range/channel list is too long for actual configuration!\n");
  return -VAR_4;
 }





 FUNC_12(VAR_34, VAR_35, VAR_38->chanlist_len, VAR_38->chanlist,
        VAR_36->ai_add_front, VAR_36->ai_add_back);


 VAR_36->ai_do = 0;
 if (VAR_38->scan_begin_src != VAR_32 &&
     VAR_38->convert_src == VAR_32) {

  if (VAR_38->scan_begin_src == VAR_27)
   VAR_36->ai_do = 4;
  else
   VAR_36->ai_do = 1;

  FUNC_0(VAR_37, &VAR_38->convert_arg,
      VAR_36->ai_flags &
      VAR_2);
  FUNC_2(VAR_37);

  VAR_36->ai_ctrl |= VAR_20;

  if (!VAR_36->usedma) {
   VAR_36->ai_ctrl |= VAR_19;
   VAR_36->int_ctrl |= VAR_23;
  }

  if (VAR_38->scan_begin_src == VAR_27) {
   struct pci9118_dmabuf *VAR_41 = &VAR_36->dmabuf[0];

   VAR_36->ai_cfg |= VAR_9;
   FUNC_5(VAR_36->ai_cfg, VAR_34->iobase + VAR_15);
   FUNC_1(VAR_37, 0, VAR_41->hw >> 1,
      VAR_7 | VAR_6);
   VAR_36->ai_cfg |= VAR_16;
  }
 }

 if (VAR_38->scan_begin_src == VAR_32 &&
     VAR_38->convert_src != VAR_27) {
  if (!VAR_36->usedma) {
   FUNC_3(VAR_34->class_dev,
    "cmd->scan_begin_src=TRIG_TIMER works only with bus mastering!\n");
   return -VAR_5;
  }


  VAR_36->ai_do = 2;

  FUNC_10(VAR_34, VAR_35,
          &VAR_38->scan_begin_arg, &VAR_38->convert_arg,
          VAR_36->ai_flags,
          VAR_36->ai_n_realscanlen,
          &VAR_37->divisor1,
          &VAR_37->divisor2,
          VAR_36->ai_add_front);

  VAR_36->ai_ctrl |= VAR_20;
  VAR_36->ai_cfg |= VAR_10 | VAR_11;
  if (VAR_38->convert_src == VAR_31 && !VAR_36->softsshdelay)
   VAR_36->ai_cfg |= VAR_12;
  FUNC_5(VAR_36->ai_n_realscanlen,
       VAR_34->iobase + VAR_8);
 }

 if (VAR_38->scan_begin_src == VAR_28 &&
     VAR_38->convert_src == VAR_27) {

  VAR_36->ai_do = 3;

  VAR_36->ai_ctrl |= VAR_18;
 }

 if (VAR_36->ai_do == 0) {
  FUNC_3(VAR_34->class_dev,
   "Unable to determine acquisition mode! BUG in (*do_cmdtest)?\n");
  return -VAR_4;
 }

 if (VAR_36->usedma)
  VAR_36->ai_ctrl |= VAR_17;


 VAR_36->ai_cfg = VAR_13 | VAR_14;
 FUNC_5(VAR_36->ai_cfg, VAR_34->iobase + VAR_15);
 FUNC_13(1);
 FUNC_7(VAR_34);


 FUNC_4(VAR_34->iobase + VAR_21);
 FUNC_4(VAR_34->iobase + VAR_22);

 VAR_36->ai_act_dmapos = 0;

 if (VAR_36->usedma) {
  FUNC_8(VAR_34, VAR_35);

  FUNC_5(0x02000000 | VAR_0,
       VAR_36->iobase_a + VAR_1);
 } else {
  FUNC_9(VAR_34, 1);
 }


 if (VAR_38->start_src == VAR_31)
  FUNC_6(VAR_34);
 else if (VAR_38->start_src == VAR_29)
  VAR_35->async->inttrig = VAR_33;


 if (VAR_38->start_src == VAR_27 || VAR_38->stop_src == VAR_27)
  FUNC_11(VAR_34, 1);

 return 0;
}
