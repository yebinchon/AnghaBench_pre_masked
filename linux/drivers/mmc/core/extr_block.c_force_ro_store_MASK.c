
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_blk_data {scalar_t__ read_only; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct mmc_blk_data* FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_blk_data*) ;
 int FUNC_3 (int ,int) ;
 unsigned long FUNC_4 (char const*,char**,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 char *VAR_6;
 struct mmc_blk_data *VAR_7 = FUNC_1(FUNC_0(VAR_1));
 unsigned long VAR_8 = FUNC_4(VAR_3, &VAR_6, 0);
 if (VAR_6 == VAR_3) {
  VAR_5 = -VAR_0;
  goto out;
 }

 FUNC_3(FUNC_0(VAR_1), VAR_8 || VAR_7->read_only);
 VAR_5 = VAR_4;
out:
 FUNC_2(VAR_7);
 return VAR_5;
}
