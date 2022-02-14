
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vdd; int clock; } ;
struct mmc_host {TYPE_1__ ios; } ;
struct mmc_ext_csd {unsigned int raw_pwr_cl_26_195; unsigned int raw_pwr_cl_52_195; unsigned int raw_pwr_cl_ddr_52_195; unsigned int raw_pwr_cl_200_195; unsigned int raw_pwr_cl_26_360; unsigned int raw_pwr_cl_52_360; unsigned int raw_pwr_cl_ddr_52_360; unsigned int raw_pwr_cl_ddr_200_360; unsigned int raw_pwr_cl_200_360; int generic_cmd6_time; } ;
struct mmc_card {struct mmc_ext_csd ext_csd; struct mmc_host* host; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_card*,int ,int ,unsigned int,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_12,
       unsigned int VAR_13)
{
 struct mmc_host *VAR_14 = VAR_12->host;
 struct mmc_ext_csd *VAR_15 = &VAR_12->ext_csd;
 unsigned int VAR_16 = 0;
 int VAR_17 = 0;

 switch (1 << VAR_14->ios.vdd) {
 case 137:
  if (VAR_14->ios.clock <= VAR_9)
   VAR_16 = VAR_15->raw_pwr_cl_26_195;
  else if (VAR_14->ios.clock <= VAR_10)
   VAR_16 = (VAR_13 <= VAR_1) ?
    VAR_15->raw_pwr_cl_52_195 :
    VAR_15->raw_pwr_cl_ddr_52_195;
  else if (VAR_14->ios.clock <= VAR_11)
   VAR_16 = VAR_15->raw_pwr_cl_200_195;
  break;
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  if (VAR_14->ios.clock <= VAR_9)
   VAR_16 = VAR_15->raw_pwr_cl_26_360;
  else if (VAR_14->ios.clock <= VAR_10)
   VAR_16 = (VAR_13 <= VAR_1) ?
    VAR_15->raw_pwr_cl_52_360 :
    VAR_15->raw_pwr_cl_ddr_52_360;
  else if (VAR_14->ios.clock <= VAR_11)
   VAR_16 = (VAR_13 == VAR_3) ?
    VAR_15->raw_pwr_cl_ddr_200_360 :
    VAR_15->raw_pwr_cl_200_360;
  break;
 default:
  FUNC_2("%s: Voltage range not supported for power class\n",
   FUNC_0(VAR_14));
  return -VAR_0;
 }

 if (VAR_13 & (VAR_1 | VAR_3))
  VAR_16 = (VAR_16 & VAR_7) >>
    VAR_8;
 else
  VAR_16 = (VAR_16 & VAR_5) >>
    VAR_6;


 if (VAR_16 > 0) {
  VAR_17 = FUNC_1(VAR_12, VAR_2,
     VAR_4,
     VAR_16,
     VAR_12->ext_csd.generic_cmd6_time);
 }

 return VAR_17;
}
