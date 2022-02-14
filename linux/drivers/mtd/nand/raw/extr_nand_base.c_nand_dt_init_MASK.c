
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int algo; int strength; int size; int options; } ;
struct nand_chip {TYPE_1__ ecc; int bbt_options; int options; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct device_node* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 scalar_t__ FUNC_6 (struct device_node*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_4)
{
 struct device_node *VAR_5 = FUNC_0(VAR_4);
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (!VAR_5)
  return 0;

 if (FUNC_1(VAR_5) == 16)
  VAR_4->options |= VAR_1;

 if (FUNC_7(VAR_5, "nand-is-boot-medium"))
  VAR_4->options |= VAR_3;

 if (FUNC_6(VAR_5))
  VAR_4->bbt_options |= VAR_0;

 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = FUNC_5(VAR_5);
 VAR_9 = FUNC_4(VAR_5);

 if (VAR_6 >= 0)
  VAR_4->ecc.mode = VAR_6;

 if (VAR_7 >= 0)
  VAR_4->ecc.algo = VAR_7;

 if (VAR_8 >= 0)
  VAR_4->ecc.strength = VAR_8;

 if (VAR_9 > 0)
  VAR_4->ecc.size = VAR_9;

 if (FUNC_7(VAR_5, "nand-ecc-maximize"))
  VAR_4->ecc.options |= VAR_2;

 return 0;
}
