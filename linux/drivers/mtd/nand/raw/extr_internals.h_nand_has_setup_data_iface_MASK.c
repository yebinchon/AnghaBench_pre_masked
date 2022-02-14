
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {int options; TYPE_2__* controller; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int setup_data_interface; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct nand_chip *VAR_1)
{
 if (!VAR_1->controller || !VAR_1->controller->ops ||
     !VAR_1->controller->ops->setup_data_interface)
  return 0;

 if (VAR_1->options & VAR_0)
  return 0;

 return 1;
}
