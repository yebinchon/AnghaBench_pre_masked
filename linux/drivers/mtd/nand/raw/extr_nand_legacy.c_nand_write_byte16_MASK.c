
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int (* write_buf ) (struct nand_chip*,int *,int) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;


 int FUNC_0 (struct nand_chip*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_0, uint8_t VAR_1)
{
 uint16_t VAR_2 = VAR_1;
 VAR_0->legacy.write_buf(VAR_0, (uint8_t *)&VAR_2, 2);
}
