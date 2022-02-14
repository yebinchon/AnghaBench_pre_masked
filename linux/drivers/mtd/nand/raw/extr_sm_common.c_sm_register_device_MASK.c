
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_flash_dev {int dummy; } ;
struct TYPE_3__ {int * ops; } ;
struct TYPE_4__ {TYPE_1__ dummy_controller; } ;
struct nand_chip {TYPE_2__ legacy; int options; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int *,int ) ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int,struct nand_flash_dev*) ;
 struct nand_flash_dev* VAR_1 ;
 struct nand_flash_dev* VAR_2 ;
 int VAR_3 ;

int FUNC_4(struct mtd_info *VAR_4, int VAR_5)
{
 struct nand_chip *VAR_6 = FUNC_1(VAR_4);
 struct nand_flash_dev *VAR_7;
 int VAR_8;

 VAR_6->options |= VAR_0;


 VAR_6->legacy.dummy_controller.ops = &VAR_3;
 VAR_7 = VAR_5 ? VAR_1 : VAR_2;
 VAR_8 = FUNC_3(VAR_6, 1, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_4, ((void*)0), 0);
 if (VAR_8)
  FUNC_2(VAR_6);

 return VAR_8;
}
