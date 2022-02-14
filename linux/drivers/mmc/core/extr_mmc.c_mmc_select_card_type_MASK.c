
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u32 ;
struct mmc_host {int caps; int caps2; } ;
struct TYPE_2__ {unsigned int raw_card_type; unsigned int hs_max_dtr; unsigned int hs200_max_dtr; scalar_t__ strobe_support; } ;
struct mmc_card {unsigned int mmc_avail_type; TYPE_1__ ext_csd; struct mmc_host* host; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;

__attribute__((used)) static void FUNC_0(struct mmc_card *VAR_23)
{
 struct mmc_host *VAR_24 = VAR_23->host;
 u8 VAR_25 = VAR_23->ext_csd.raw_card_type;
 u32 VAR_26 = VAR_24->caps, VAR_27 = VAR_24->caps2;
 unsigned int VAR_28 = 0, VAR_29 = 0;
 unsigned int VAR_30 = 0;

 if (VAR_26 & VAR_18 &&
     VAR_25 & VAR_8) {
  VAR_28 = VAR_19;
  VAR_30 |= VAR_8;
 }

 if (VAR_26 & VAR_18 &&
     VAR_25 & VAR_9) {
  VAR_28 = VAR_20;
  VAR_30 |= VAR_9;
 }

 if (VAR_26 & (VAR_16 | VAR_17) &&
     VAR_25 & VAR_1) {
  VAR_28 = VAR_21;
  VAR_30 |= VAR_1;
 }

 if (VAR_26 & VAR_15 &&
     VAR_25 & VAR_0) {
  VAR_28 = VAR_21;
  VAR_30 |= VAR_0;
 }

 if (VAR_27 & VAR_11 &&
     VAR_25 & VAR_3) {
  VAR_29 = VAR_22;
  VAR_30 |= VAR_3;
 }

 if (VAR_27 & VAR_10 &&
     VAR_25 & VAR_2) {
  VAR_29 = VAR_22;
  VAR_30 |= VAR_2;
 }

 if (VAR_27 & VAR_13 &&
     VAR_25 & VAR_7) {
  VAR_29 = VAR_22;
  VAR_30 |= VAR_7;
 }

 if (VAR_27 & VAR_12 &&
     VAR_25 & VAR_6) {
  VAR_29 = VAR_22;
  VAR_30 |= VAR_6;
 }

 if ((VAR_27 & VAR_14) &&
     VAR_23->ext_csd.strobe_support &&
     (VAR_30 & VAR_4))
  VAR_30 |= VAR_5;

 VAR_23->ext_csd.hs_max_dtr = VAR_28;
 VAR_23->ext_csd.hs200_max_dtr = VAR_29;
 VAR_23->mmc_avail_type = VAR_30;
}
