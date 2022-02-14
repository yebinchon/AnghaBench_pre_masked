
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sd3_bus_mode; int uhs_max_dtr; } ;
struct mmc_card {TYPE_2__* host; TYPE_1__ sw_caps; int quirk_max_rate; int sd_bus_speed; } ;
struct TYPE_6__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
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
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct mmc_card*,int,int ,int ,unsigned char,unsigned char*) ;
 int FUNC_3 (TYPE_2__*,unsigned int) ;
 int FUNC_4 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct mmc_card *VAR_32)
{
 unsigned int VAR_33, VAR_34;
 int VAR_35;
 unsigned char VAR_36;
 unsigned int VAR_37;





 if (!FUNC_1(VAR_32->host))
  return 0;

 VAR_33 = VAR_14;
 VAR_34 = VAR_7;
 if ((VAR_32->host->caps & VAR_1) &&
     (VAR_32->sw_caps.sd3_bus_mode & VAR_18)) {
   VAR_33 = VAR_13;
   VAR_34 = VAR_6;
   VAR_32->sw_caps.uhs_max_dtr = VAR_25;
   VAR_32->sd_bus_speed = VAR_24;
 } else if ((VAR_32->host->caps & VAR_0) &&
     (VAR_32->sw_caps.sd3_bus_mode & VAR_17)) {
   VAR_33 = VAR_12;
   VAR_34 = VAR_5;
   VAR_32->sw_caps.uhs_max_dtr = VAR_23;
   VAR_32->sd_bus_speed = VAR_22;
 } else if ((VAR_32->host->caps & (VAR_1 |
      VAR_4)) && (VAR_32->sw_caps.sd3_bus_mode &
      VAR_21)) {
   VAR_33 = VAR_16;
   VAR_34 = VAR_9;
   VAR_32->sw_caps.uhs_max_dtr = VAR_31;
   VAR_32->sd_bus_speed = VAR_30;
 } else if ((VAR_32->host->caps & (VAR_1 |
      VAR_4 | VAR_3)) &&
     (VAR_32->sw_caps.sd3_bus_mode & VAR_20)) {
   VAR_33 = VAR_15;
   VAR_34 = VAR_8;
   VAR_32->sw_caps.uhs_max_dtr = VAR_29;
   VAR_32->sd_bus_speed = VAR_28;
 } else if ((VAR_32->host->caps & (VAR_1 |
      VAR_4 | VAR_3 |
      VAR_2)) && (VAR_32->sw_caps.sd3_bus_mode &
      VAR_19)) {
   VAR_33 = VAR_14;
   VAR_34 = VAR_7;
   VAR_32->sw_caps.uhs_max_dtr = VAR_27;
   VAR_32->sd_bus_speed = VAR_26;
 }

 VAR_35 = FUNC_2(VAR_32, 0, 0, VAR_10, 0, &VAR_36);
 if (VAR_35)
  return VAR_35;

 VAR_36 &= ~VAR_11;
 VAR_36 |= VAR_33;
 VAR_35 = FUNC_2(VAR_32, 1, 0, VAR_10, VAR_36, ((void*)0));
 if (VAR_35)
  return VAR_35;

 VAR_37 = FUNC_0(VAR_32->quirk_max_rate,
    VAR_32->sw_caps.uhs_max_dtr);

 if (VAR_33) {
  FUNC_4(VAR_32->host, VAR_34);
  FUNC_3(VAR_32->host, VAR_37);
 }

 return 0;
}
