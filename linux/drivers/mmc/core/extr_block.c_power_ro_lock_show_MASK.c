
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int boot_ro_lock; } ;
struct mmc_card {TYPE_2__ ext_csd; } ;
struct TYPE_3__ {struct mmc_card* card; } ;
struct mmc_blk_data {TYPE_1__ queue; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 struct mmc_blk_data* FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_blk_data*) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6;
 struct mmc_blk_data *VAR_7 = FUNC_1(FUNC_0(VAR_3));
 struct mmc_card *VAR_8 = VAR_7->queue.card;
 int VAR_9 = 0;

 if (VAR_8->ext_csd.boot_ro_lock & VAR_0)
  VAR_9 = 2;
 else if (VAR_8->ext_csd.boot_ro_lock & VAR_1)
  VAR_9 = 1;

 VAR_6 = FUNC_3(VAR_5, VAR_2, "%d\n", VAR_9);

 FUNC_2(VAR_7);

 return VAR_6;
}
