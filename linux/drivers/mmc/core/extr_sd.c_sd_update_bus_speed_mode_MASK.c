
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sd3_bus_mode; } ;
struct mmc_card {scalar_t__ sd_bus_speed; TYPE_1__ sw_caps; TYPE_2__* host; } ;
struct TYPE_4__ {int caps; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct mmc_card *VAR_15)
{




 if (!FUNC_0(VAR_15->host)) {
  VAR_15->sd_bus_speed = 0;
  return;
 }

 if ((VAR_15->host->caps & VAR_1) &&
     (VAR_15->sw_caps.sd3_bus_mode & VAR_6)) {
   VAR_15->sd_bus_speed = VAR_11;
 } else if ((VAR_15->host->caps & VAR_0) &&
     (VAR_15->sw_caps.sd3_bus_mode & VAR_5)) {
   VAR_15->sd_bus_speed = VAR_10;
 } else if ((VAR_15->host->caps & (VAR_1 |
      VAR_4)) && (VAR_15->sw_caps.sd3_bus_mode &
      VAR_9)) {
   VAR_15->sd_bus_speed = VAR_14;
 } else if ((VAR_15->host->caps & (VAR_1 |
      VAR_4 | VAR_3)) &&
     (VAR_15->sw_caps.sd3_bus_mode & VAR_8)) {
   VAR_15->sd_bus_speed = VAR_13;
 } else if ((VAR_15->host->caps & (VAR_1 |
      VAR_4 | VAR_3 |
      VAR_2)) && (VAR_15->sw_caps.sd3_bus_mode &
      VAR_7)) {
   VAR_15->sd_bus_speed = VAR_12;
 }
}
