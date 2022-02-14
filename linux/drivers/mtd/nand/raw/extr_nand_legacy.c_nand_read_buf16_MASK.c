
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u16 ;
struct TYPE_2__ {int IO_ADDR_R; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 u16 *VAR_3 = (u16 *) VAR_1;

 FUNC_0(VAR_0->legacy.IO_ADDR_R, VAR_3, VAR_2 >> 1);
}
