
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {int dummy; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {int dummy; } ;
struct bcm963xx_nvram {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*,struct mtd_partition const**,struct bcm963xx_nvram*) ;
 int FUNC_2 (struct mtd_info*,struct bcm963xx_nvram*) ;
 int FUNC_3 (struct mtd_info*) ;
 int FUNC_4 (struct bcm963xx_nvram*) ;
 struct bcm963xx_nvram* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_2,
     const struct mtd_partition **VAR_3,
     struct mtd_part_parser_data *VAR_4)
{
 struct bcm963xx_nvram *VAR_5 = ((void*)0);
 int VAR_6;

 if (FUNC_0(VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_5(sizeof(*VAR_5));
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_2, VAR_5);
 if (VAR_6)
  goto out;

 if (!FUNC_3(VAR_2))
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5);
 else
  VAR_6 = -VAR_0;

out:
 FUNC_4(VAR_5);
 return VAR_6;
}
