
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int* bbt; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct nand_chip *VAR_2, int VAR_3,
  uint8_t VAR_4)
{
 uint8_t VAR_5 = (VAR_4 & VAR_0) << ((VAR_3 & VAR_0) * 2);
 VAR_2->bbt[VAR_3 >> VAR_1] |= VAR_5;
}
