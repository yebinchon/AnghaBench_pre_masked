
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9ndfmc_priv {struct platform_device* dev; } ;
struct platform_device {int dummy; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct txx9ndfmc_priv* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static struct platform_device *FUNC_2(struct mtd_info *VAR_0)
{
 struct nand_chip *VAR_1 = FUNC_0(VAR_0);
 struct txx9ndfmc_priv *VAR_2 = FUNC_1(VAR_1);
 return VAR_2->dev;
}
