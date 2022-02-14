
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int sd3_curr_limit; } ;
struct mmc_card {scalar_t__ sd_bus_speed; int host; TYPE_1__ sw_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_card*,int,int,int,int*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_card *VAR_12, u8 *VAR_13)
{
 int VAR_14 = VAR_8;
 int VAR_15;
 u32 VAR_16;






 if ((VAR_12->sd_bus_speed != VAR_11) &&
     (VAR_12->sd_bus_speed != VAR_10) &&
     (VAR_12->sd_bus_speed != VAR_9))
  return 0;





 VAR_16 = FUNC_3(VAR_12->host);
 if (VAR_16 >= 800 &&
     VAR_12->sw_caps.sd3_curr_limit & VAR_3)
  VAR_14 = VAR_7;
 else if (VAR_16 >= 600 &&
   VAR_12->sw_caps.sd3_curr_limit & VAR_2)
  VAR_14 = VAR_6;
 else if (VAR_16 >= 400 &&
   VAR_12->sw_caps.sd3_curr_limit & VAR_1)
  VAR_14 = VAR_5;
 else if (VAR_16 >= 200 &&
   VAR_12->sw_caps.sd3_curr_limit & VAR_0)
  VAR_14 = VAR_4;

 if (VAR_14 != VAR_8) {
  VAR_15 = FUNC_1(VAR_12, 1, 3, VAR_14, VAR_13);
  if (VAR_15)
   return VAR_15;

  if (((VAR_13[15] >> 4) & 0x0F) != VAR_14)
   FUNC_2("%s: Problem setting current limit!\n",
    FUNC_0(VAR_12->host));

 }

 return 0;
}
