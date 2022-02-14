
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_pos {int dummy; } ;
struct nand_device {int dummy; } ;
struct mtd_info {int dummy; } ;
struct erase_info {int fail_addr; scalar_t__ len; scalar_t__ addr; } ;


 struct nand_device* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct nand_device*,struct nand_pos*) ;
 int FUNC_2 (struct nand_device*,scalar_t__,struct nand_pos*) ;
 scalar_t__ FUNC_3 (struct nand_pos*,struct nand_pos*) ;
 int FUNC_4 (struct nand_device*,struct nand_pos*) ;
 int FUNC_5 (struct nand_device*,struct nand_pos*) ;

int FUNC_6(struct mtd_info *VAR_0, struct erase_info *VAR_1)
{
 struct nand_device *VAR_2 = FUNC_0(VAR_0);
 struct nand_pos VAR_3, VAR_4;
 int VAR_5;

 FUNC_2(VAR_2, VAR_1->addr, &VAR_3);
 FUNC_2(VAR_2, VAR_1->addr + VAR_1->len - 1, &VAR_4);
 while (FUNC_3(&VAR_3, &VAR_4) <= 0) {
  VAR_5 = FUNC_1(VAR_2, &VAR_3);
  if (VAR_5) {
   VAR_1->fail_addr = FUNC_5(VAR_2, &VAR_3);

   return VAR_5;
  }

  FUNC_4(VAR_2, &VAR_3);
 }

 return 0;
}
