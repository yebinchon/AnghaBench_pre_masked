
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {TYPE_1__* controller; int lock; scalar_t__ suspended; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 if (VAR_1->suspended) {
  FUNC_1(&VAR_1->lock);
  return -VAR_0;
 }
 FUNC_0(&VAR_1->controller->lock);

 return 0;
}
