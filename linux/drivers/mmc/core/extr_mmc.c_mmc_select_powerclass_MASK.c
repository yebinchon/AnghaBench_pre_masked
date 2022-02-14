
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bus_width; } ;
struct mmc_host {TYPE_1__ ios; } ;
struct mmc_card {int mmc_avail_type; struct mmc_host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mmc_card*,int) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct mmc_card *VAR_7)
{
 struct mmc_host *VAR_8 = VAR_7->host;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12;


 if (!FUNC_1(VAR_7))
  return 0;

 VAR_9 = VAR_8->ios.bus_width;

 if (VAR_9 == VAR_5)
  return 0;

 VAR_12 = VAR_7->mmc_avail_type & VAR_2;
 if (VAR_12)
  VAR_10 = (VAR_9 == VAR_6) ?
   VAR_4 : VAR_3;
 else
  VAR_10 = (VAR_9 == VAR_6) ?
   VAR_1 : VAR_0;

 VAR_11 = FUNC_0(VAR_7, VAR_10);
 if (VAR_11)
  FUNC_3("%s: power class selection to bus width %d ddr %d failed\n",
   FUNC_2(VAR_8), 1 << VAR_9, VAR_12);

 return VAR_11;
}
