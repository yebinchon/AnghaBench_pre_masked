
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {int data_interface; TYPE_2__* controller; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* setup_data_interface ) (struct nand_chip*,int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct nand_chip*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_1))
  return 0;
 FUNC_1(VAR_1, VAR_0, 0);
 VAR_3 = VAR_1->controller->ops->setup_data_interface(VAR_1, VAR_2,
       &VAR_1->data_interface);
 if (VAR_3)
  FUNC_2("Failed to configure data interface to SDR timing mode 0\n");

 return VAR_3;
}
