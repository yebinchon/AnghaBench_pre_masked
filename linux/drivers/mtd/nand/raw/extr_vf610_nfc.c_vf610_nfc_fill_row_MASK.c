
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_4, int VAR_5, u32 *VAR_6,
          u32 *VAR_7)
{
 *VAR_7 = FUNC_0(0, VAR_5 & 0xff) | FUNC_0(1, VAR_5 >> 8);
 *VAR_6 |= VAR_0 | VAR_1;

 if (VAR_4->options & VAR_3) {
  *VAR_7 |= FUNC_0(2, VAR_5 >> 16);
  *VAR_6 |= VAR_2;
 }
}
