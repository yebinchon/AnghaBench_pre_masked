
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct atmio16d_private* private; } ;
struct comedi_cmd {int chanlist_len; int scan_end_arg; int convert_arg; unsigned int stop_arg; int scan_begin_arg; int * chanlist; } ;
struct atmio16d_private {int com_reg_1_state; int com_reg_2_state; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_18,
      struct comedi_subdevice *VAR_19)
{
 struct atmio16d_private *VAR_20 = VAR_18->private;
 struct comedi_cmd *VAR_21 = &VAR_19->async->cmd;
 unsigned int VAR_22, VAR_23;
 unsigned int VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28;






 FUNC_3(VAR_18);


 if (VAR_21->chanlist_len < 2) {
  VAR_20->com_reg_1_state &= ~VAR_9;
  FUNC_2(VAR_20->com_reg_1_state, VAR_18->iobase + VAR_12);
 } else {
  VAR_20->com_reg_1_state |= VAR_9;
  VAR_20->com_reg_2_state |= VAR_11;
  FUNC_2(VAR_20->com_reg_1_state, VAR_18->iobase + VAR_12);
  FUNC_2(VAR_20->com_reg_2_state, VAR_18->iobase + VAR_13);
 }


 for (VAR_28 = 0; VAR_28 < VAR_21->chanlist_len; ++VAR_28) {
  VAR_26 = FUNC_0(VAR_21->chanlist[VAR_28]);
  VAR_27 = FUNC_1(VAR_21->chanlist[VAR_28]);
  FUNC_2(VAR_28, VAR_18->iobase + VAR_15);
  VAR_25 = VAR_26 | (VAR_27 << 6);
  if (VAR_28 == VAR_21->scan_end_arg - 1)
   VAR_25 |= 0x0010;
  FUNC_2(VAR_25, VAR_18->iobase + VAR_16);
 }





 if (VAR_21->convert_arg < 65536000) {
  VAR_23 = VAR_5;
  VAR_22 = VAR_21->convert_arg / 1000;
 } else if (VAR_21->convert_arg < 655360000) {
  VAR_23 = VAR_3;
  VAR_22 = VAR_21->convert_arg / 10000;
 } else {
  VAR_23 = VAR_4;
  VAR_22 = VAR_21->convert_arg / 100000;
 }
 FUNC_2(0xFF03, VAR_18->iobase + VAR_1);
 FUNC_2(VAR_23, VAR_18->iobase + VAR_2);
 FUNC_2(0xFF0B, VAR_18->iobase + VAR_1);
 FUNC_2(0x2, VAR_18->iobase + VAR_2);
 FUNC_2(0xFF44, VAR_18->iobase + VAR_1);
 FUNC_2(0xFFF3, VAR_18->iobase + VAR_1);
 FUNC_2(VAR_22, VAR_18->iobase + VAR_2);
 FUNC_2(0xFF24, VAR_18->iobase + VAR_1);



 VAR_24 = VAR_21->stop_arg * VAR_21->scan_end_arg;
 FUNC_2(0xFF04, VAR_18->iobase + VAR_1);
 FUNC_2(0x1025, VAR_18->iobase + VAR_2);
 FUNC_2(0xFF0C, VAR_18->iobase + VAR_1);
 if (VAR_24 < 65536) {

  FUNC_2(VAR_24, VAR_18->iobase + VAR_2);
  FUNC_2(0xFF48, VAR_18->iobase + VAR_1);
  FUNC_2(0xFFF4, VAR_18->iobase + VAR_1);
  FUNC_2(0xFF28, VAR_18->iobase + VAR_1);
  VAR_20->com_reg_1_state &= ~VAR_6;
  FUNC_2(VAR_20->com_reg_1_state, VAR_18->iobase + VAR_12);
 } else {


  VAR_25 = VAR_24 & 0xFFFF;
  if (VAR_25)
   FUNC_2(VAR_25 - 1, VAR_18->iobase + VAR_2);
  else
   FUNC_2(0xFFFF, VAR_18->iobase + VAR_2);

  FUNC_2(0xFF48, VAR_18->iobase + VAR_1);
  FUNC_2(0, VAR_18->iobase + VAR_2);
  FUNC_2(0xFF28, VAR_18->iobase + VAR_1);
  FUNC_2(0xFF05, VAR_18->iobase + VAR_1);
  FUNC_2(0x25, VAR_18->iobase + VAR_2);
  FUNC_2(0xFF0D, VAR_18->iobase + VAR_1);
  VAR_25 = VAR_24 & 0xFFFF;
  if ((VAR_25 == 0) || (VAR_25 == 1)) {
   FUNC_2((VAR_24 >> 16) & 0xFFFF,
        VAR_18->iobase + VAR_2);
  } else {
   FUNC_2(((VAR_24 >> 16) & 0xFFFF) + 1,
        VAR_18->iobase + VAR_2);
  }
  FUNC_2(0xFF70, VAR_18->iobase + VAR_1);
  VAR_20->com_reg_1_state |= VAR_6;
  FUNC_2(VAR_20->com_reg_1_state, VAR_18->iobase + VAR_12);
 }





 if (VAR_21->chanlist_len > 1) {
  if (VAR_21->scan_begin_arg < 65536000) {
   VAR_23 = VAR_5;
   VAR_22 = VAR_21->scan_begin_arg / 1000;
  } else if (VAR_21->scan_begin_arg < 655360000) {
   VAR_23 = VAR_3;
   VAR_22 = VAR_21->scan_begin_arg / 10000;
  } else {
   VAR_23 = VAR_4;
   VAR_22 = VAR_21->scan_begin_arg / 100000;
  }
  FUNC_2(0xFF02, VAR_18->iobase + VAR_1);
  FUNC_2(VAR_23, VAR_18->iobase + VAR_2);
  FUNC_2(0xFF0A, VAR_18->iobase + VAR_1);
  FUNC_2(0x2, VAR_18->iobase + VAR_2);
  FUNC_2(0xFF42, VAR_18->iobase + VAR_1);
  FUNC_2(0xFFF2, VAR_18->iobase + VAR_1);
  FUNC_2(VAR_22, VAR_18->iobase + VAR_2);
  FUNC_2(0xFF22, VAR_18->iobase + VAR_1);
 }


 FUNC_2(0, VAR_18->iobase + VAR_0);
 FUNC_2(0, VAR_18->iobase + VAR_15);
 FUNC_2(0, VAR_18->iobase + VAR_14);

 VAR_20->com_reg_1_state |= VAR_8;
 FUNC_2(VAR_20->com_reg_1_state, VAR_18->iobase + VAR_12);

 VAR_20->com_reg_1_state |= VAR_7;
 VAR_20->com_reg_2_state |= VAR_10;
 FUNC_2(VAR_20->com_reg_1_state, VAR_18->iobase + VAR_12);
 FUNC_2(VAR_20->com_reg_2_state, VAR_18->iobase + VAR_13);

 FUNC_2(0, VAR_18->iobase + VAR_17);

 return 0;
}
