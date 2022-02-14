
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {TYPE_3__* tmds_setting_info; TYPE_2__* chip_info; } ;
struct TYPE_7__ {scalar_t__ iga_path; } ;
struct TYPE_5__ {int output_interface; int tmds_chip_slave_addr; int i2c_port; } ;
struct TYPE_6__ {int gfx_chip_name; TYPE_1__ tmds_chip_info; } ;


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
 scalar_t__ VAR_13 ;





 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ,int ,int,int) ;
 int VAR_18 ;
 int FUNC_5 (int ,int ,int,int) ;
 TYPE_4__* VAR_19 ;

void FUNC_6(void)
{
 u8 VAR_20;

 switch (VAR_19->chip_info->tmds_chip_info.output_interface) {
 case 130:
  FUNC_5(VAR_5, VAR_15, 0x01, VAR_0);
  FUNC_5(VAR_6, VAR_15, 0x21, VAR_0 + VAR_2);
  FUNC_0();
  if (VAR_19->chip_info->gfx_chip_name == VAR_14)
   FUNC_2(0x88, 0x3b);
  else


   FUNC_3(VAR_15, 0x91, 0x00, 0x20);
  break;

 case 129:
  if (VAR_19->chip_info->gfx_chip_name == VAR_14)
   FUNC_5(VAR_10, VAR_15, 0x21, VAR_0 + VAR_2);


  if (VAR_19->chip_info->gfx_chip_name == VAR_14)
   FUNC_2(0x88, 0x3b);
  else


   FUNC_3(VAR_15, 0x91, 0x00, 0x20);


  if (VAR_18 == 1) {
   FUNC_5(VAR_9, VAR_15, 0x1f, 0x1f);
   FUNC_5(VAR_8, VAR_15, 0x00, VAR_3 + VAR_0);
   if (VAR_16 == 24) {
    if (VAR_17 == 1)
     VAR_20 = 0x3F;
    else
     VAR_20 = 0x37;
    FUNC_4(VAR_19->chip_info->
     tmds_chip_info.i2c_port,
     VAR_19->chip_info->
     tmds_chip_info.tmds_chip_slave_addr,
     0x08, VAR_20);
   }
  }
  break;

 case 132:
  if (VAR_19->chip_info->gfx_chip_name != VAR_14)
   FUNC_3(VAR_15, VAR_11, 0x03, 0x03);

  FUNC_3(VAR_15, 0x91, 0x00, 0x20);
  break;

 case 131:
  if (VAR_19->chip_info->gfx_chip_name == VAR_14)
   break;

  FUNC_1();
  FUNC_3(VAR_15, 0x91, 0x00, 0x20);
  break;

 case 128:

  FUNC_5(VAR_9, VAR_15, 0, VAR_4);


  FUNC_5(VAR_12, VAR_15, 0, VAR_1);
  break;
 }

 if (VAR_19->tmds_setting_info->iga_path == VAR_13) {

  FUNC_5(VAR_7, VAR_15, 0x00, VAR_0);
 }
}
