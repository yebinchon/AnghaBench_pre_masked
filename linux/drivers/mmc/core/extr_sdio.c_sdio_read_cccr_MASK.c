
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int hs_max_dtr; int sd3_bus_mode; int sd3_drv_type; } ;
struct TYPE_5__ {unsigned char sdio_vsn; int multi_block; int low_speed; int wide_bus; int high_power; int high_speed; } ;
struct TYPE_4__ {int sda_spec3; } ;
struct mmc_card {TYPE_3__ sw_caps; TYPE_2__ cccr; int host; TYPE_1__ scr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_card*,int ,int ,int ,int ,unsigned char*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mmc_card *VAR_28, u32 VAR_29)
{
 int VAR_30;
 int VAR_31;
 int VAR_32 = VAR_29 & VAR_1;
 unsigned char VAR_33;
 unsigned char VAR_34;

 VAR_30 = FUNC_2(VAR_28, 0, 0, VAR_6, 0, &VAR_33);
 if (VAR_30)
  goto out;

 VAR_31 = VAR_33 & 0x0f;

 if (VAR_31 > VAR_11) {
  FUNC_3("%s: unrecognised CCCR structure version %d\n",
   FUNC_1(VAR_28->host), VAR_31);
  return -VAR_0;
 }

 VAR_28->cccr.sdio_vsn = (VAR_33 & 0xf0) >> 4;

 VAR_30 = FUNC_2(VAR_28, 0, 0, VAR_2, 0, &VAR_33);
 if (VAR_30)
  goto out;

 if (VAR_33 & VAR_5)
  VAR_28->cccr.multi_block = 1;
 if (VAR_33 & VAR_4)
  VAR_28->cccr.low_speed = 1;
 if (VAR_33 & VAR_3)
  VAR_28->cccr.wide_bus = 1;

 if (VAR_31 >= VAR_9) {
  VAR_30 = FUNC_2(VAR_28, 0, 0, VAR_8, 0, &VAR_33);
  if (VAR_30)
   goto out;

  if (VAR_33 & VAR_17)
   VAR_28->cccr.high_power = 1;
 }

 if (VAR_31 >= VAR_10) {
  VAR_30 = FUNC_2(VAR_28, 0, 0, VAR_12, 0, &VAR_34);
  if (VAR_30)
   goto out;

  VAR_28->scr.sda_spec3 = 0;
  VAR_28->sw_caps.sd3_bus_mode = 0;
  VAR_28->sw_caps.sd3_drv_type = 0;
  if (VAR_31 >= VAR_11 && VAR_32) {
   VAR_28->scr.sda_spec3 = 1;
   VAR_30 = FUNC_2(VAR_28, 0, 0,
    VAR_13, 0, &VAR_33);
   if (VAR_30)
    goto out;

   if (FUNC_0(VAR_28->host)) {
    if (VAR_33 & VAR_19)
     VAR_28->sw_caps.sd3_bus_mode
      |= VAR_25;

    if (VAR_33 & VAR_21)
     VAR_28->sw_caps.sd3_bus_mode
      |= VAR_27;

    if (VAR_33 & VAR_20)
     VAR_28->sw_caps.sd3_bus_mode
      |= VAR_26;
   }

   VAR_30 = FUNC_2(VAR_28, 0, 0,
    VAR_7, 0, &VAR_33);
   if (VAR_30)
    goto out;

   if (VAR_33 & VAR_14)
    VAR_28->sw_caps.sd3_drv_type |= VAR_22;
   if (VAR_33 & VAR_15)
    VAR_28->sw_caps.sd3_drv_type |= VAR_23;
   if (VAR_33 & VAR_16)
    VAR_28->sw_caps.sd3_drv_type |= VAR_24;
  }


  if (!VAR_28->sw_caps.sd3_bus_mode) {
   if (VAR_34 & VAR_18) {
    VAR_28->cccr.high_speed = 1;
    VAR_28->sw_caps.hs_max_dtr = 50000000;
   } else {
    VAR_28->cccr.high_speed = 0;
    VAR_28->sw_caps.hs_max_dtr = 25000000;
   }
  }
 }

out:
 return VAR_30;
}
