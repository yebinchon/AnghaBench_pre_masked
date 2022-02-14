
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int an_trig_etc_reg; int ai_cmd2; int aimode; int routing_tables; scalar_t__ is_611x; scalar_t__ is_6143; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ irq; int class_dev; struct ni_private* private; } ;
struct comedi_cmd {int chanlist_len; int start_src; int start_arg; int stop_src; int scan_begin_src; int scan_begin_arg; int convert_src; int convert_arg; int flags; int stop_arg; int chanlist; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_3 (int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_4 (int) ;
 int VAR_45 ;
 int VAR_46 ;
 unsigned int VAR_47 ;
 unsigned int VAR_48 ;
 unsigned int FUNC_5 (int ) ;
 unsigned int VAR_49 ;
 unsigned int FUNC_6 (int ) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;






 int FUNC_7 (int ,char*) ;
 int * VAR_65 ;
 int FUNC_8 (struct comedi_device*) ;
 int FUNC_9 (struct comedi_device*) ;
 int FUNC_10 (int ,int ,int *,int) ;
 int FUNC_11 (struct comedi_device*,struct comedi_subdevice*,int,int ) ;
 int FUNC_12 (struct comedi_device*,int,int ) ;
 int FUNC_13 (struct comedi_device*,int ,int,int) ;
 int FUNC_14 (struct comedi_device*,int,int ) ;
 int FUNC_15 (struct comedi_device*,int,int ) ;
 unsigned int VAR_66 ;

__attribute__((used)) static int FUNC_16(struct comedi_device *VAR_67, struct comedi_subdevice *VAR_68)
{
 struct ni_private *VAR_69 = VAR_67->private;
 const struct comedi_cmd *VAR_70 = &VAR_68->async->cmd;
 int VAR_71;
 int VAR_72 = 0;
 int VAR_73 = 0;
 int VAR_74 = 0;
 unsigned int VAR_75;
 int VAR_76 = 0;
 unsigned int VAR_77;

 if (VAR_67->irq == 0) {
  FUNC_7(VAR_67->class_dev, "cannot run command without an irq\n");
  return -VAR_4;
 }
 FUNC_9(VAR_67);

 FUNC_11(VAR_67, VAR_68, VAR_70->chanlist_len, VAR_70->chanlist);


 FUNC_15(VAR_67, VAR_60, VAR_61);





 VAR_69->an_trig_etc_reg &= ~VAR_50;
 FUNC_15(VAR_67, VAR_69->an_trig_etc_reg, VAR_51);

 VAR_77 = FUNC_6(0) | VAR_49;
 switch (VAR_70->start_src) {
 case 131:
 case 129:
  VAR_77 |= VAR_47 |
      FUNC_5(0);
  break;
 case 132:
  VAR_77 |= FUNC_5(
   FUNC_10(FUNC_0(VAR_70->start_arg),
            VAR_64,
            &VAR_69->routing_tables, 1));

  if (VAR_70->start_arg & VAR_3)
   VAR_77 |= VAR_48;
  if (VAR_70->start_arg & VAR_2)
   VAR_77 |= VAR_47;
  break;
 }
 FUNC_15(VAR_67, VAR_77, VAR_46);

 VAR_73 &= ~VAR_22;
 VAR_73 &= ~VAR_25;
 VAR_73 &= ~VAR_26;
 FUNC_15(VAR_67, VAR_73, VAR_23);

 if (VAR_70->chanlist_len == 1 || VAR_69->is_611x || VAR_69->is_6143) {

  VAR_74 |= VAR_44 |
         FUNC_4(31) |
         VAR_45;
 } else {

  VAR_74 |= FUNC_4(19);
 }
 FUNC_15(VAR_67, VAR_74, VAR_41);

 VAR_69->ai_cmd2 = 0;
 switch (VAR_70->stop_src) {
 case 133:
  VAR_75 = VAR_70->stop_arg - 1;

  if (VAR_69->is_611x) {

   VAR_75 += VAR_66;
  }

  FUNC_14(VAR_67, VAR_75, VAR_35);

  VAR_72 |= VAR_20 |
    VAR_19 |
    VAR_21;
  FUNC_15(VAR_67, VAR_72, VAR_18);

  FUNC_15(VAR_67, VAR_8, VAR_6);

  if (VAR_75 == 0) {
   VAR_69->ai_cmd2 |= VAR_13;
   VAR_76 |= VAR_57;




   if (VAR_70->chanlist_len > 1)
    VAR_74 |= VAR_44 |
           VAR_43;
  }
  break;
 case 130:

  FUNC_14(VAR_67, 0, VAR_35);

  VAR_72 |= VAR_20 |
    VAR_19 |
    VAR_16;
  FUNC_15(VAR_67, VAR_72, VAR_18);


  FUNC_15(VAR_67, VAR_8, VAR_6);
  break;
 }

 switch (VAR_70->scan_begin_src) {
 case 128:
  VAR_74 |= VAR_39 | VAR_42;
  FUNC_15(VAR_67, VAR_74, VAR_41);

  VAR_73 &= ~VAR_29;
  VAR_73 |= FUNC_2(0);

  FUNC_15(VAR_67, VAR_73, VAR_23);


  VAR_71 = FUNC_12(VAR_67, VAR_70->scan_begin_arg,
           VAR_0);
  FUNC_14(VAR_67, VAR_71, VAR_38);
  FUNC_15(VAR_67, VAR_12, VAR_6);
  break;
 case 132:
  if (VAR_70->scan_begin_arg & VAR_2)
   VAR_74 |= VAR_39;
  if (VAR_70->scan_begin_arg & VAR_3)
   VAR_74 |= VAR_40;
  if (VAR_70->scan_begin_src != VAR_70->convert_src ||
      (VAR_70->scan_begin_arg & ~VAR_2) !=
      (VAR_70->convert_arg & ~VAR_2))
   VAR_74 |= VAR_42;
  VAR_74 |= FUNC_3(
   FUNC_10(FUNC_0(VAR_70->scan_begin_arg),
            VAR_63,
            &VAR_69->routing_tables, 1));
  FUNC_15(VAR_67, VAR_74, VAR_41);
  break;
 }

 switch (VAR_70->convert_src) {
 case 128:
 case 129:
  if (VAR_70->convert_arg == 0 || VAR_70->convert_src == 129)
   VAR_71 = 1;
  else
   VAR_71 = FUNC_12(VAR_67, VAR_70->convert_arg,
            VAR_0);

  FUNC_15(VAR_67, 1, VAR_36);
  FUNC_15(VAR_67, VAR_71, VAR_37);

  VAR_73 &= ~VAR_27;
  VAR_73 |= VAR_28;
  FUNC_15(VAR_67, VAR_73, VAR_23);

  FUNC_15(VAR_67, VAR_10, VAR_6);

  VAR_73 |= VAR_27;
  VAR_73 |= VAR_28;
  FUNC_15(VAR_67, VAR_73, VAR_23);
  break;
 case 132:
  VAR_72 |= FUNC_1(
   FUNC_10(FUNC_0(VAR_70->convert_arg),
            VAR_62,
            &VAR_69->routing_tables, 1));
  if ((VAR_70->convert_arg & VAR_3) == 0)
   VAR_72 |= VAR_17;
  FUNC_15(VAR_67, VAR_72, VAR_18);

  VAR_73 |= VAR_24 |
    VAR_30;
  FUNC_15(VAR_67, VAR_73, VAR_23);

  break;
 }

 if (VAR_67->irq) {

  VAR_76 |= VAR_54 |
          VAR_56;


  VAR_76 |= VAR_55;


  if ((VAR_70->flags & VAR_1) ||
      (VAR_69->ai_cmd2 & VAR_13)) {

   VAR_69->aimode = 134;
  } else {
   VAR_69->aimode = 136;
  }

  switch (VAR_69->aimode) {
  case 136:





   FUNC_15(VAR_67, VAR_31,
          VAR_34);

   break;
  case 135:

   FUNC_15(VAR_67, VAR_33,
          VAR_34);
   break;
  case 134:




   FUNC_15(VAR_67, VAR_31,
          VAR_34);

   VAR_76 |= VAR_57;
   break;
  default:
   break;
  }


  FUNC_15(VAR_67, VAR_52, VAR_53);

  FUNC_13(VAR_67, VAR_58, VAR_76, 1);
 } else {

  FUNC_13(VAR_67, VAR_58, ~0, 0);


 }


 FUNC_15(VAR_67, VAR_59, VAR_61);

 switch (VAR_70->scan_begin_src) {
 case 128:
  FUNC_15(VAR_67, VAR_9 |
       VAR_11 |
       VAR_5 |
       VAR_7,
         VAR_6);
  break;
 case 132:
  FUNC_15(VAR_67, VAR_9 |
       VAR_11 |
       VAR_5 |
       VAR_7,
         VAR_6);
  break;
 }
 if (VAR_70->start_src == 129) {
  FUNC_15(VAR_67, VAR_15 |
       VAR_69->ai_cmd2,
         VAR_14);
  VAR_68->async->inttrig = ((void*)0);
 } else if (VAR_70->start_src == 132) {
  VAR_68->async->inttrig = ((void*)0);
 } else {
  VAR_68->async->inttrig = VAR_65;
 }

 return 0;
}
