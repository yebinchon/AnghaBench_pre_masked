
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dummy_controller; } ;
struct nand_chip {int buf_align; int * controller; TYPE_1__ legacy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0)
{

 if (!VAR_0->controller) {
  VAR_0->controller = &VAR_0->legacy.dummy_controller;
  FUNC_0(VAR_0->controller);
 }

 FUNC_1(VAR_0);

 if (!VAR_0->buf_align)
  VAR_0->buf_align = 1;
}
