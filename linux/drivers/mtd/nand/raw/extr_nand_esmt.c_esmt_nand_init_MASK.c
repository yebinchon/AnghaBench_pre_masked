
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_3)
{
 if (FUNC_0(VAR_3))






  VAR_3->options |= VAR_0 | VAR_2 |
     VAR_1;

 return 0;
}
