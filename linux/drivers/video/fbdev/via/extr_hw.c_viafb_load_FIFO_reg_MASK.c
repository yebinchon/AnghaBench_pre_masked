
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct io_register {int dummy; } ;
struct TYPE_28__ {scalar_t__ gfx_chip_name; } ;
struct TYPE_27__ {int reg_num; struct io_register* reg; } ;
struct TYPE_26__ {int reg_num; struct io_register* reg; } ;
struct TYPE_25__ {int reg_num; struct io_register* reg; } ;
struct TYPE_24__ {int reg_num; struct io_register* reg; } ;
struct TYPE_23__ {int reg_num; struct io_register* reg; } ;
struct TYPE_22__ {int reg_num; struct io_register* reg; } ;
struct TYPE_21__ {int reg_num; struct io_register* reg; } ;
struct TYPE_20__ {int reg_num; struct io_register* reg; } ;
struct TYPE_19__ {TYPE_5__ iga2_fifo_depth_select_reg; TYPE_1__ iga1_fifo_depth_select_reg; } ;
struct TYPE_18__ {TYPE_8__ iga2_display_queue_expire_num_reg; TYPE_4__ iga1_display_queue_expire_num_reg; } ;
struct TYPE_17__ {TYPE_7__ iga2_fifo_high_threshold_select_reg; TYPE_3__ iga1_fifo_high_threshold_select_reg; } ;
struct TYPE_16__ {TYPE_6__ iga2_fifo_threshold_select_reg; TYPE_2__ iga1_fifo_threshold_select_reg; } ;
struct TYPE_15__ {TYPE_9__* chip_info; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_17 ;
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
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 scalar_t__ VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 TYPE_14__ VAR_93 ;
 TYPE_13__ VAR_94 ;
 TYPE_12__ VAR_95 ;
 TYPE_11__ VAR_96 ;
 int FUNC_8 (int,int,struct io_register*,int ) ;
 TYPE_10__* VAR_97 ;

void FUNC_9(int VAR_98, int VAR_99, int VAR_100)
{
 int VAR_101;
 int VAR_102;
 struct io_register *VAR_103 = ((void*)0);
 int VAR_104 = 0, VAR_105 =
     0, VAR_106 = 0, VAR_107 = 0;
 int VAR_108 = 0, VAR_109 =
     0, VAR_110 = 0, VAR_111 = 0;

 if (VAR_98 == VAR_16) {
  if (VAR_97->chip_info->gfx_chip_name == VAR_59) {
   VAR_104 = VAR_19;
   VAR_105 = VAR_20;
   VAR_106 =
       VAR_18;


   if ((VAR_99 > 1280) && (VAR_100 > 1024))
    VAR_107 = 16;
   else
    VAR_107 =
        VAR_17;

  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_63) {
   VAR_104 = VAR_51;
   VAR_105 = VAR_52;
   VAR_106 =
       VAR_50;
   VAR_107 =
       VAR_49;



   if ((VAR_99 > 1280) && (VAR_100 > 1024))
    VAR_107 = 16;
   else
    VAR_107 =
        VAR_49;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_57) {
   VAR_104 = VAR_2;
   VAR_105 = VAR_3;
   VAR_106 =
       VAR_1;



   if ((VAR_99 > 1280) && (VAR_100 > 1024))
    VAR_107 = 16;
   else
    VAR_107 =
        VAR_0;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_58) {
   VAR_104 = VAR_10;
   VAR_105 = VAR_11;
   VAR_106 =
       VAR_9;
   VAR_107 =
       VAR_8;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_60) {
   VAR_104 = VAR_27;
   VAR_105 = VAR_28;
   VAR_106 =
       VAR_26;
   VAR_107 =
       VAR_25;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_61) {
   VAR_104 = VAR_35;
   VAR_105 = VAR_36;
   VAR_106 =
       VAR_34;
   VAR_107 =
       VAR_33;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_62) {
   VAR_104 = VAR_43;
   VAR_105 = VAR_44;
   VAR_106 =
       VAR_42;
   VAR_107 =
       VAR_41;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_64) {
   VAR_104 = VAR_71;
   VAR_105 = VAR_72;
   VAR_106 =
       VAR_70;
   VAR_107 =
       VAR_69;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_65) {
   VAR_104 = VAR_79;
   VAR_105 = VAR_80;
   VAR_106 =
       VAR_78;
   VAR_107 =
       VAR_77;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_66) {
   VAR_104 = VAR_87;
   VAR_105 = VAR_88;
   VAR_106 =
       VAR_86;
   VAR_107 =
       VAR_85;
  }


  VAR_101 = FUNC_1(VAR_104);
  VAR_102 =
      VAR_93.iga1_fifo_depth_select_reg.reg_num;
  VAR_103 = VAR_93.iga1_fifo_depth_select_reg.reg;
  FUNC_8(VAR_101, VAR_102, VAR_103, VAR_68);


  VAR_101 = FUNC_3(VAR_105);
  VAR_102 =
      VAR_96.
      iga1_fifo_threshold_select_reg.reg_num;
  VAR_103 =
      VAR_96.
      iga1_fifo_threshold_select_reg.reg;
  FUNC_8(VAR_101, VAR_102, VAR_103, VAR_68);


  VAR_101 =
      FUNC_2(VAR_106);
  VAR_102 =
      VAR_95.
      iga1_fifo_high_threshold_select_reg.reg_num;
  VAR_103 =
      VAR_95.
      iga1_fifo_high_threshold_select_reg.reg;
  FUNC_8(VAR_101, VAR_102, VAR_103, VAR_68);


  VAR_101 =
      FUNC_0
      (VAR_107);
  VAR_102 =
      VAR_94.
      iga1_display_queue_expire_num_reg.reg_num;
  VAR_103 =
      VAR_94.
      iga1_display_queue_expire_num_reg.reg;
  FUNC_8(VAR_101, VAR_102, VAR_103, VAR_68);

 } else {
  if (VAR_97->chip_info->gfx_chip_name == VAR_59) {
   VAR_108 = VAR_23;
   VAR_109 = VAR_24;
   VAR_110 =
       VAR_22;



   if ((VAR_99 > 1280) && (VAR_100 > 1024))
    VAR_111 = 16;
   else
    VAR_111 =
        VAR_21;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_63) {
   VAR_108 = VAR_55;
   VAR_109 = VAR_56;
   VAR_110 =
       VAR_54;



   if ((VAR_99 > 1280) && (VAR_100 > 1024))
    VAR_111 = 16;
   else
    VAR_111 =
        VAR_53;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_57) {
   VAR_108 = VAR_6;
   VAR_109 = VAR_7;
   VAR_110 =
       VAR_5;



   if ((VAR_99 > 1280) && (VAR_100 > 1024))
    VAR_111 = 16;
   else
    VAR_111 =
        VAR_4;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_58) {
   VAR_108 = VAR_14;
   VAR_109 = VAR_15;
   VAR_110 =
       VAR_13;
   VAR_111 =
       VAR_12;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_60) {
   VAR_108 = VAR_31;
   VAR_109 = VAR_32;
   VAR_110 =
       VAR_30;
   VAR_111 =
       VAR_29;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_61) {
   VAR_108 = VAR_39;
   VAR_109 = VAR_40;
   VAR_110 =
       VAR_38;
   VAR_111 =
       VAR_37;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_62) {
   VAR_108 = VAR_47;
   VAR_109 = VAR_48;
   VAR_110 =
       VAR_46;
   VAR_111 =
       VAR_45;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_64) {
   VAR_108 = VAR_75;
   VAR_109 = VAR_76;
   VAR_110 =
       VAR_74;
   VAR_111 =
       VAR_73;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_65) {
   VAR_108 = VAR_83;
   VAR_109 = VAR_84;
   VAR_110 =
       VAR_82;
   VAR_111 =
       VAR_81;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_66) {
   VAR_108 = VAR_91;
   VAR_109 = VAR_92;
   VAR_110 =
       VAR_90;
   VAR_111 =
       VAR_89;
  }

  if (VAR_97->chip_info->gfx_chip_name == VAR_59) {

   VAR_101 =
       FUNC_5(VAR_108)
       - 1;

   VAR_102 =
       VAR_93.
       iga2_fifo_depth_select_reg.reg_num;
   VAR_103 =
       VAR_93.
       iga2_fifo_depth_select_reg.reg;
   FUNC_8(VAR_101,
    VAR_102, VAR_103, VAR_67);
  } else {


   VAR_101 =
       FUNC_5(VAR_108);
   VAR_102 =
       VAR_93.
       iga2_fifo_depth_select_reg.reg_num;
   VAR_103 =
       VAR_93.
       iga2_fifo_depth_select_reg.reg;
   FUNC_8(VAR_101,
    VAR_102, VAR_103, VAR_67);
  }


  VAR_101 = FUNC_7(VAR_109);
  VAR_102 =
      VAR_96.
      iga2_fifo_threshold_select_reg.reg_num;
  VAR_103 =
      VAR_96.
      iga2_fifo_threshold_select_reg.reg;
  FUNC_8(VAR_101, VAR_102, VAR_103, VAR_67);


  VAR_101 =
      FUNC_6(VAR_110);
  VAR_102 =
      VAR_95.
      iga2_fifo_high_threshold_select_reg.reg_num;
  VAR_103 =
      VAR_95.
      iga2_fifo_high_threshold_select_reg.reg;
  FUNC_8(VAR_101, VAR_102, VAR_103, VAR_67);


  VAR_101 =
      FUNC_4
      (VAR_111);
  VAR_102 =
      VAR_94.
      iga2_display_queue_expire_num_reg.reg_num;
  VAR_103 =
      VAR_94.
      iga2_display_queue_expire_num_reg.reg;
  FUNC_8(VAR_101, VAR_102, VAR_103, VAR_67);

 }

}
