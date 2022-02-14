
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct socrates_nand_host {int io_base; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 struct socrates_nand_host* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_7, int VAR_8,
       unsigned int VAR_9)
{
 struct socrates_nand_host *VAR_10 = FUNC_0(VAR_7);
 uint32_t VAR_11;

 if (VAR_8 == VAR_5)
  return;

 if (VAR_9 & VAR_4)
  VAR_11 = VAR_1;
 else
  VAR_11 = VAR_0;

 if (VAR_9 & VAR_6)
  VAR_11 |= VAR_3;

 VAR_11 |= (VAR_8 & 0xff) << VAR_2;

 FUNC_1(VAR_10->io_base, VAR_11);
}
