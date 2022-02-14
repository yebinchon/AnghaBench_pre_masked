
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_ecc_ctrl {int mode; int strength; scalar_t__ size; } ;
struct TYPE_3__ {int strength; scalar_t__ step_size; } ;
struct TYPE_4__ {TYPE_1__ eccreq; } ;
struct nand_chip {int bbt_options; int options; TYPE_2__ base; struct nand_ecc_ctrl ecc; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct device_node* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,struct nand_ecc_ctrl*,struct device_node*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_6)
{
 struct nand_ecc_ctrl *VAR_7 = &VAR_6->ecc;
 struct device_node *VAR_8 = FUNC_0(VAR_6);
 int VAR_9;

 if (VAR_6->bbt_options & VAR_2)
  VAR_6->bbt_options |= VAR_1;

 if (VAR_6->options & VAR_3)
  VAR_6->options |= VAR_4;

 VAR_6->options |= VAR_5;

 if (!VAR_7->size) {
  VAR_7->size = VAR_6->base.eccreq.step_size;
  VAR_7->strength = VAR_6->base.eccreq.strength;
 }

 if (!VAR_7->size || !VAR_7->strength)
  return -VAR_0;

 switch (VAR_7->mode) {
 case 130:
  VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_8);
  if (VAR_9)
   return VAR_9;
  break;
 case 129:
 case 128:
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
