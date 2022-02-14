
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct orion_nand_data {int cle; int ale; } ;
struct TYPE_2__ {scalar_t__ IO_ADDR_W; } ;
struct nand_chip {int options; TYPE_1__ legacy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct orion_nand_data* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_4, int VAR_5,
    unsigned int VAR_6)
{
 struct orion_nand_data *VAR_7 = FUNC_0(VAR_4);
 u32 VAR_8;

 if (VAR_5 == VAR_3)
  return;

 if (VAR_6 & VAR_2)
  VAR_8 = (1 << VAR_7->cle);
 else if (VAR_6 & VAR_0)
  VAR_8 = (1 << VAR_7->ale);
 else
  return;

 if (VAR_4->options & VAR_1)
  VAR_8 <<= 1;

 FUNC_1(VAR_5, VAR_4->legacy.IO_ADDR_W + VAR_8);
}
