
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_set {int nr_partitions; int partitions; int name; } ;
struct s3c2410_nand_mtd {int chip; } ;
struct s3c2410_nand_info {int dummy; } ;
struct mtd_info {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,int ) ;
 struct mtd_info* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct s3c2410_nand_info *VAR_1,
          struct s3c2410_nand_mtd *VAR_2,
          struct s3c2410_nand_set *VAR_3)
{
 if (VAR_3) {
  struct mtd_info *VAR_4 = FUNC_1(&VAR_2->chip);

  VAR_4->name = VAR_3->name;

  return FUNC_0(VAR_4, VAR_3->partitions,
        VAR_3->nr_partitions);
 }

 return -VAR_0;
}
