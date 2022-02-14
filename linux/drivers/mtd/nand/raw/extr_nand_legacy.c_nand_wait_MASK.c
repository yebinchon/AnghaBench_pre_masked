
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
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 unsigned long VAR_1 ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (struct nand_chip*,int*,int,int) ;
 int FUNC_5 (struct nand_chip*,int *) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (struct nand_chip*,unsigned long) ;
 scalar_t__ FUNC_8 (struct nand_chip*) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_3)
{

 unsigned long VAR_4 = 400;
 u8 VAR_5;
 int VAR_6;





 FUNC_6(100);

 VAR_6 = FUNC_5(VAR_3, ((void*)0));
 if (VAR_6)
  return VAR_6;

 if (FUNC_2() || VAR_2)
  FUNC_7(VAR_3, VAR_4);
 else {
  VAR_4 = VAR_1 + FUNC_3(VAR_4);
  do {
   if (VAR_3->legacy.dev_ready) {
    if (VAR_3->legacy.dev_ready(VAR_3))
     break;
   } else {
    VAR_6 = FUNC_4(VAR_3, &VAR_5,
       sizeof(VAR_5), 1);
    if (VAR_6)
     return VAR_6;

    if (VAR_5 & VAR_0)
     break;
   }
   FUNC_1();
  } while (FUNC_9(VAR_1, VAR_4));
 }

 VAR_6 = FUNC_4(VAR_3, &VAR_5, sizeof(VAR_5), 1);
 if (VAR_6)
  return VAR_6;


 FUNC_0(!(VAR_5 & VAR_0));
 return VAR_5;
}
