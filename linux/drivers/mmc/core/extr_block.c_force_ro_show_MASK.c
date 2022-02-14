
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_blk_data {int read_only; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 struct mmc_blk_data* FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_blk_data*) ;
 int FUNC_4 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 int VAR_4;
 struct mmc_blk_data *VAR_5 = FUNC_2(FUNC_0(VAR_1));

 VAR_4 = FUNC_4(VAR_3, VAR_0, "%d\n",
         FUNC_1(FUNC_0(VAR_1)) ^
         VAR_5->read_only);
 FUNC_3(VAR_5);
 return VAR_4;
}
