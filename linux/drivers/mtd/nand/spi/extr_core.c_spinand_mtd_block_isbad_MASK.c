
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinand_device {int lock; } ;
struct nand_pos {int dummy; } ;
struct nand_device {int dummy; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 struct nand_device* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct spinand_device* FUNC_3 (struct nand_device*) ;
 int FUNC_4 (struct nand_device*,struct nand_pos*) ;
 int FUNC_5 (struct nand_device*,int ,struct nand_pos*) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_0, loff_t VAR_1)
{
 struct nand_device *VAR_2 = FUNC_0(VAR_0);
 struct spinand_device *VAR_3 = FUNC_3(VAR_2);
 struct nand_pos VAR_4;
 int VAR_5;

 FUNC_5(VAR_2, VAR_1, &VAR_4);
 FUNC_1(&VAR_3->lock);
 VAR_5 = FUNC_4(VAR_2, &VAR_4);
 FUNC_2(&VAR_3->lock);

 return VAR_5;
}
