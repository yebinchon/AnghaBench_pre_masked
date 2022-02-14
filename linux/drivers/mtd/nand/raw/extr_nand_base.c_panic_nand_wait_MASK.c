
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ (* dev_ready ) (struct nand_chip*) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;
typedef int status ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nand_chip*,int*,int,int) ;
 scalar_t__ FUNC_2 (struct nand_chip*) ;

void FUNC_3(struct nand_chip *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1->legacy.dev_ready) {
   if (VAR_1->legacy.dev_ready(VAR_1))
    break;
  } else {
   int VAR_4;
   u8 VAR_5;

   VAR_4 = FUNC_1(VAR_1, &VAR_5, sizeof(VAR_5),
      1);
   if (VAR_4)
    return;

   if (VAR_5 & VAR_0)
    break;
  }
  FUNC_0(1);
 }
}
