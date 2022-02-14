
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
struct atmel_nand_controller {TYPE_3__* caps; } ;
struct TYPE_4__ {int controller; } ;
struct atmel_nand {int numcs; TYPE_1__ base; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* setup_data_interface ) (struct atmel_nand*,int,struct nand_data_interface const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atmel_nand*,int,struct nand_data_interface const*) ;
 struct atmel_nand* FUNC_1 (struct nand_chip*) ;
 struct atmel_nand_controller* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2, int VAR_3,
     const struct nand_data_interface *VAR_4)
{
 struct atmel_nand *VAR_5 = FUNC_1(VAR_2);
 struct atmel_nand_controller *VAR_6;

 VAR_6 = FUNC_2(VAR_5->base.controller);

 if (VAR_3 >= VAR_5->numcs ||
     (VAR_3 < 0 && VAR_3 != VAR_1))
  return -VAR_0;

 return VAR_6->caps->ops->setup_data_interface(VAR_5, VAR_3, VAR_4);
}
