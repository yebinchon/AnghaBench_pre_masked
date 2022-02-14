
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* dev_ready ) (struct nand_chip*) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nand_chip*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0, unsigned long VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0->legacy.dev_ready(VAR_0))
   break;
  FUNC_2();
  FUNC_0(1);
 }
}
