
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {int dummy; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct r852_device* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static inline struct r852_device *FUNC_2(struct mtd_info *VAR_0)
{
 struct nand_chip *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1);
}
