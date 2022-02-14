
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* dev_ready ) (struct nand_chip*) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 unsigned long VAR_0 ;
 unsigned long FUNC_2 (unsigned long) ;
 scalar_t__ VAR_1 ;
 void FUNC_3 (struct nand_chip*,unsigned long) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct nand_chip*) ;
 scalar_t__ FUNC_6 (struct nand_chip*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

void FUNC_8(struct nand_chip *VAR_2)
{
 unsigned long VAR_3 = 400;

 if (FUNC_1() || VAR_1)
  return FUNC_3(VAR_2, VAR_3);


 VAR_3 = VAR_0 + FUNC_2(VAR_3);
 do {
  if (VAR_2->legacy.dev_ready(VAR_2))
   return;
  FUNC_0();
 } while (FUNC_7(VAR_0, VAR_3));

 if (!VAR_2->legacy.dev_ready(VAR_2))
  FUNC_4("timeout while waiting for chip to become ready\n");
}
