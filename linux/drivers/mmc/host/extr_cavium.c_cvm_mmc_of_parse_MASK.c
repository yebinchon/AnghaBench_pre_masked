
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_3__ {int vmmc; } ;
struct mmc_host {int ocr_avail; int caps; size_t f_max; int f_min; TYPE_1__ supply; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct cvm_mmc_slot {size_t cmd_cnt; size_t dat_cnt; TYPE_2__* host; struct mmc_host* mmc; } ;
struct TYPE_4__ {unsigned long long sys_freq; scalar_t__* slot; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,struct device_node*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct device_node*,char*,size_t*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, struct cvm_mmc_slot *VAR_7)
{
 u32 VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 struct device_node *VAR_12 = VAR_6->of_node;
 struct mmc_host *VAR_13 = VAR_7->mmc;
 u64 VAR_14;
 int VAR_15;

 VAR_15 = FUNC_4(VAR_12, "reg", &VAR_8);
 if (VAR_15) {
  FUNC_1(VAR_6, "Missing or invalid reg property on %pOF\n", VAR_12);
  return VAR_15;
 }

 if (VAR_8 >= VAR_0 || VAR_7->host->slot[VAR_8]) {
  FUNC_1(VAR_6, "Invalid reg property on %pOF\n", VAR_12);
  return -VAR_1;
 }

 VAR_15 = FUNC_3(VAR_13);
 if (VAR_15)
  return VAR_15;




 if (FUNC_0(VAR_13->supply.vmmc))
  VAR_13->ocr_avail = VAR_4 | VAR_5;


 VAR_15 = FUNC_2(VAR_13);
 if (VAR_15)
  return VAR_15;


 if (!(VAR_13->caps & (VAR_3 | VAR_2))) {
  FUNC_4(VAR_12, "cavium,bus-max-width", &VAR_11);
  if (VAR_11 == 8)
   VAR_13->caps |= VAR_3 | VAR_2;
  else if (VAR_11 == 4)
   VAR_13->caps |= VAR_2;
 }


 if (!VAR_13->f_max)
  FUNC_4(VAR_12, "spi-max-frequency", &VAR_13->f_max);
 if (!VAR_13->f_max || VAR_13->f_max > 52000000)
  VAR_13->f_max = 52000000;
 VAR_13->f_min = 400000;


 VAR_14 = 1000000000000ull / VAR_7->host->sys_freq;
 FUNC_4(VAR_12, "cavium,cmd-clk-skew", &VAR_9);
 FUNC_4(VAR_12, "cavium,dat-clk-skew", &VAR_10);
 VAR_7->cmd_cnt = (VAR_9 + VAR_14 / 2) / VAR_14;
 VAR_7->dat_cnt = (VAR_10 + VAR_14 / 2) / VAR_14;

 return VAR_8;
}
