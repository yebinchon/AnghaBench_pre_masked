
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_controller {int transfer_one_message; int transfer_one; int transfer; TYPE_1__* mem_ops; } ;
struct TYPE_2__ {int exec_op; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct spi_controller *VAR_1)
{







 if (VAR_1->mem_ops) {
  if (!VAR_1->mem_ops->exec_op)
   return -VAR_0;
 } else if (!VAR_1->transfer && !VAR_1->transfer_one &&
     !VAR_1->transfer_one_message) {
  return -VAR_0;
 }

 return 0;
}
