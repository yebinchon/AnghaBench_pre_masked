
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nand_chip {int controller; } ;
struct mtd_info {char* name; } ;
struct atmel_nand_controller {TYPE_4__* dev; TYPE_2__* caps; } ;
struct atmel_nand {TYPE_3__* cs; } ;
struct TYPE_10__ {int of_node; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_8__ {scalar_t__ legacy_of_bindings; TYPE_1__* ops; } ;
struct TYPE_7__ {int (* ecc_init ) (struct nand_chip*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 char* FUNC_2 (TYPE_4__*,int ,char*,int ,int ) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;
 struct atmel_nand* FUNC_5 (struct nand_chip*) ;
 struct atmel_nand_controller* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_2)
{
 struct atmel_nand_controller *VAR_3 = FUNC_6(VAR_2->controller);
 struct atmel_nand *VAR_4 = FUNC_5(VAR_2);
 struct mtd_info *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 VAR_6 = VAR_3->caps->ops->ecc_init(VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_3->caps->legacy_of_bindings || !VAR_3->dev->of_node) {





  VAR_5->name = "atmel_nand";
 } else if (!VAR_5->name) {
  VAR_5->name = FUNC_2(VAR_3->dev, VAR_1,
        "%s:nand.%d", FUNC_1(VAR_3->dev),
        VAR_4->cs[0].id);
  if (!VAR_5->name) {
   FUNC_0(VAR_3->dev, "Failed to allocate mtd->name\n");
   return -VAR_0;
  }
 }

 return 0;
}
