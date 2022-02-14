
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


typedef int u8 ;
typedef int u32 ;
struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; } ;
struct TYPE_28__ {TYPE_7__* shared; TYPE_2__* chip_info; TYPE_12__* lvds_setting_info2; TYPE_12__* lvds_setting_info; TYPE_1__* tmds_setting_info; int depth; } ;
struct TYPE_27__ {int depth; } ;
struct TYPE_25__ {scalar_t__ iga_path; } ;
struct TYPE_26__ {int iga1_devices; int iga2_devices; TYPE_6__ tmds_setting_info; } ;
struct TYPE_24__ {int line_length; } ;
struct TYPE_23__ {int line_length; } ;
struct TYPE_22__ {int port; int mask; int value; int index; } ;
struct TYPE_21__ {scalar_t__ gfx_chip_name; int lvds_chip_info2; int lvds_chip_info; } ;
struct TYPE_20__ {scalar_t__ iga_path; } ;
struct TYPE_19__ {int (* set_secondary_clock_state ) (int ) ;int (* set_secondary_pll_state ) (int ) ;int (* set_primary_clock_state ) (int ) ;int (* set_primary_pll_state ) (int ) ;int (* set_secondary_clock_source ) (int ,int) ;int (* set_primary_clock_source ) (int ,int) ;int (* set_engine_pll_state ) (int ) ;} ;
struct TYPE_18__ {int table_length; TYPE_3__* io_reg_table; } ;
struct TYPE_17__ {scalar_t__ iga_path; void* display_method; } ;
struct TYPE_16__ {struct fb_var_screeninfo var; TYPE_5__ fix; } ;
struct TYPE_15__ {struct fb_var_screeninfo var; TYPE_4__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_14__ VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct fb_var_screeninfo*) ;
 int FUNC_7 () ;
 TYPE_13__* VAR_15 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int,scalar_t__) ;
 int FUNC_29 (int,int ) ;
 int FUNC_30 (int,int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_31 (struct fb_var_screeninfo*,int,int,scalar_t__) ;
 int FUNC_32 (struct fb_var_screeninfo*,int,int,scalar_t__) ;
 int FUNC_33 (struct fb_var_screeninfo*,int ) ;
 int FUNC_34 (int ,int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_35 (struct fb_var_screeninfo*,int,int,TYPE_12__*,int *) ;
 int FUNC_36 () ;
 scalar_t__ FUNC_37 (int ,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_38 () ;
 int FUNC_39 (int ,int ,scalar_t__) ;
 int FUNC_40 (int ,int,int ,int ) ;
 TYPE_11__* VAR_32 ;
 TYPE_10__* VAR_33 ;
 TYPE_9__* VAR_34 ;
 TYPE_8__* VAR_35 ;

int FUNC_41(void)
{
 int VAR_36, VAR_37 = 0, VAR_38 = 0;
 int VAR_39;
 u32 VAR_40 = VAR_34->shared->iga1_devices
  | VAR_34->shared->iga2_devices;
 u8 VAR_41, VAR_42, VAR_43;
 struct fb_var_screeninfo VAR_44;

 FUNC_2();
 FUNC_0();
 FUNC_29(VAR_40, VAR_12);

 FUNC_7();



 if ((VAR_34->chip_info->gfx_chip_name == VAR_6
  || VAR_34->chip_info->gfx_chip_name == VAR_8)
  && VAR_32->var.xres == 1024 && VAR_32->var.yres == 768) {
  for (VAR_36 = 0; VAR_36 < VAR_15[0].table_length; VAR_36++) {
   VAR_42 = VAR_15[0].io_reg_table[VAR_36].index;
   VAR_39 = VAR_15[0].io_reg_table[VAR_36].port;
   VAR_41 = VAR_15[0].io_reg_table[VAR_36].value;
   VAR_43 = VAR_15[0].io_reg_table[VAR_36].mask;
   FUNC_40(VAR_42, VAR_39, VAR_41, VAR_43);
  }
 }

 FUNC_25(VAR_32->fix.line_length);
 FUNC_27(VAR_22 ? VAR_33->fix.line_length
  : VAR_32->fix.line_length);
 FUNC_24(VAR_34->depth);
 FUNC_26(VAR_22 ? VAR_35->depth
  : VAR_34->depth);
 FUNC_28(VAR_34->shared->iga1_devices, VAR_3);
 FUNC_28(VAR_34->shared->iga2_devices, VAR_4);
 if (VAR_34->shared->iga2_devices)
  FUNC_5();
 else
  FUNC_4();





 if (VAR_22) {
  VAR_44 = VAR_33->var;
 } else if (VAR_21) {
  FUNC_33(&VAR_44, FUNC_34(
   VAR_30, VAR_31, VAR_29));
  VAR_37 = VAR_32->var.xres;
  VAR_38 = VAR_32->var.yres;
  VAR_44 = VAR_32->var.bits_per_pixel;
 }


 if (VAR_16) {
  if (VAR_34->shared->iga2_devices & VAR_11
   && VAR_21)
   FUNC_32(&VAR_44, VAR_37, VAR_38, VAR_4);
  else
   FUNC_32(&VAR_32->var, 0, 0,
    (VAR_34->shared->iga1_devices & VAR_11)
    ? VAR_3 : VAR_4);




  if (VAR_32->var.xres % 8) {
   FUNC_38();
   FUNC_39(VAR_0, VAR_9,
    FUNC_37(VAR_9, VAR_0) - 1);
   FUNC_36();
  }
 }

 if (VAR_17) {
  if (VAR_34->shared->tmds_setting_info.iga_path == VAR_4
   && VAR_21)
   FUNC_31(&VAR_44, VAR_37, VAR_38, VAR_4);
  else
   FUNC_31(&VAR_32->var, 0, 0,
    VAR_34->tmds_setting_info->iga_path);
 }

 if (VAR_20) {
  if (VAR_21 &&
   (VAR_34->lvds_setting_info->iga_path == VAR_4)) {
   FUNC_35(&VAR_44, VAR_37, VAR_38,
    VAR_34->lvds_setting_info,
    &VAR_34->chip_info->lvds_chip_info);
  } else {

   if (VAR_34->lvds_setting_info->iga_path == VAR_3) {
    VAR_34->lvds_setting_info->display_method =
        VAR_5;
   }
   FUNC_35(&VAR_32->var, 0, 0,
    VAR_34->lvds_setting_info,
    &VAR_34->chip_info->lvds_chip_info);
  }
 }
 if (VAR_19) {
  if (VAR_21 &&
   (VAR_34->lvds_setting_info2->iga_path == VAR_4)) {
   FUNC_35(&VAR_44, VAR_37, VAR_38,
    VAR_34->lvds_setting_info2,
    &VAR_34->chip_info->lvds_chip_info2);
  } else {

   if (VAR_34->lvds_setting_info2->iga_path == VAR_3) {
    VAR_34->lvds_setting_info2->display_method =
        VAR_5;
   }
   FUNC_35(&VAR_32->var, 0, 0,
    VAR_34->lvds_setting_info2,
    &VAR_34->chip_info->lvds_chip_info2);
  }
 }

 if ((VAR_34->chip_info->gfx_chip_name == VAR_7)
     && (VAR_20 || VAR_17))
  FUNC_8();


 if (!VAR_23) {
  VAR_24 = VAR_32->var.xres;
  VAR_25 = VAR_32->var.yres;
  VAR_26 = VAR_32->var.bits_per_pixel;
  VAR_27 = VAR_28;

  if (VAR_17)
   VAR_18 = VAR_2;
  else
   VAR_18 = VAR_1;
 }
 FUNC_1();
 if (!VAR_21)
  FUNC_30(VAR_40, FUNC_6(&VAR_32->var));
 else {
  FUNC_30(VAR_34->shared->iga1_devices,
   FUNC_6(&VAR_32->var));
  FUNC_30(VAR_34->shared->iga2_devices,
   FUNC_6(&VAR_44));
 }

 VAR_14.set_engine_pll_state(VAR_13);
 VAR_14.set_primary_clock_source(VAR_10, 1);
 VAR_14.set_secondary_clock_source(VAR_10, 1);







 if (VAR_34->shared->iga1_devices) {
  VAR_14.set_primary_pll_state(VAR_13);
  VAR_14.set_primary_clock_state(VAR_13);
 } else {
  VAR_14.set_primary_pll_state(VAR_12);
  VAR_14.set_primary_clock_state(VAR_12);
 }

 if (VAR_34->shared->iga2_devices) {
  VAR_14.set_secondary_pll_state(VAR_13);
  VAR_14.set_secondary_clock_state(VAR_13);
 } else {
  VAR_14.set_secondary_pll_state(VAR_12);
  VAR_14.set_secondary_clock_state(VAR_12);
 }


 FUNC_29(VAR_40, VAR_13);
 FUNC_3();
 return 1;
}
