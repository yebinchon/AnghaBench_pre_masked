
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {scalar_t__ IO_ADDR_W; scalar_t__ IO_ADDR_R; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_2, u_char VAR_3)
{
 int VAR_4 = 100000;

 while (VAR_4 && FUNC_0(VAR_2->legacy.IO_ADDR_R + VAR_1) & VAR_0) {
  FUNC_1(1);
  VAR_4--;
 }
 FUNC_2(VAR_3, VAR_2->legacy.IO_ADDR_W + 0x801);
}
