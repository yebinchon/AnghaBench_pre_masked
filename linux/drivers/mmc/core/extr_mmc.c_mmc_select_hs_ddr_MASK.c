
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int bus_width; } ;
struct mmc_host {int caps; TYPE_1__ ios; } ;
struct TYPE_4__ {int generic_cmd6_time; } ;
struct mmc_card {int mmc_avail_type; TYPE_2__ ext_csd; struct mmc_host* host; } ;


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
 int FUNC_0 (struct mmc_card*,int ,int ,int,int ,int ,int,int,int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,int ) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mmc_card *VAR_14)
{
 struct mmc_host *VAR_15 = VAR_14->host;
 u32 VAR_16, VAR_17;
 int VAR_18 = 0;

 if (!(VAR_14->mmc_avail_type & VAR_3))
  return 0;

 VAR_16 = VAR_15->ios.bus_width;
 if (VAR_16 == VAR_7)
  return 0;

 VAR_17 = (VAR_16 == VAR_8) ?
  VAR_6 : VAR_5;

 VAR_18 = FUNC_0(VAR_14, VAR_4,
      VAR_0,
      VAR_17,
      VAR_14->ext_csd.generic_cmd6_time,
      VAR_13,
      1, 1, 1);
 if (VAR_18) {
  FUNC_3("%s: switch to bus width %d ddr failed\n",
   FUNC_1(VAR_15), 1 << VAR_16);
  return VAR_18;
 }
 if (VAR_14->mmc_avail_type & VAR_1) {
  VAR_18 = FUNC_2(VAR_15, VAR_10);
  if (!VAR_18)
   return 0;
 }

 if (VAR_14->mmc_avail_type & VAR_2 &&
     VAR_15->caps & VAR_9)
  VAR_18 = FUNC_2(VAR_15, VAR_11);


 if (VAR_18)
  VAR_18 = FUNC_2(VAR_15, VAR_12);

 return VAR_18;
}
