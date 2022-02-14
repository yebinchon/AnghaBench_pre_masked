
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* onfi; } ;
struct nand_chip {int onfi_timing_mode_default; int data_interface; TYPE_2__* controller; TYPE_3__ parameters; } ;
struct TYPE_8__ {int async_timing_mode; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* setup_data_interface ) (struct nand_chip*,int ,int *) ;} ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int ,int) ;
 int FUNC_4 (struct nand_chip*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (!FUNC_2(VAR_2))
  return 0;






 if (VAR_2->parameters.onfi) {
  VAR_3 = VAR_2->parameters.onfi->async_timing_mode;
 } else {
  if (!VAR_2->onfi_timing_mode_default)
   return 0;

  VAR_3 = FUNC_0(VAR_2->onfi_timing_mode_default, 0);
 }

 for (VAR_4 = FUNC_1(VAR_3) - 1; VAR_4 >= 0; VAR_4--) {
  VAR_5 = FUNC_3(VAR_2, VAR_1, VAR_4);
  if (VAR_5)
   continue;





  VAR_5 = VAR_2->controller->ops->setup_data_interface(VAR_2,
       VAR_0,
       &VAR_2->data_interface);
  if (!VAR_5) {
   VAR_2->onfi_timing_mode_default = VAR_4;
   break;
  }
 }

 return 0;
}
