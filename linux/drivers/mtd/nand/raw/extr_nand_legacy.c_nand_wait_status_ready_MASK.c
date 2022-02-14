
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int dummy; } ;
typedef int status ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct nand_chip*,int*,int,int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 VAR_3 = VAR_1 + FUNC_0(VAR_3);
 do {
  u8 VAR_5;

  VAR_4 = FUNC_1(VAR_2, &VAR_5, sizeof(VAR_5), 1);
  if (VAR_4)
   return;

  if (VAR_5 & VAR_0)
   break;
  FUNC_3();
 } while (FUNC_2(VAR_1, VAR_3));
}
