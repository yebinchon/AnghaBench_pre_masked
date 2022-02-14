
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int IO_ADDR_R; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_0, u_char *VAR_1, int VAR_2)
{
 while (VAR_2 > 0x800) {
  FUNC_0(VAR_1, VAR_0->legacy.IO_ADDR_R, 0x800);
  VAR_1 += 0x800;
  VAR_2 -= 0x800;
 }
 FUNC_0(VAR_1, VAR_0->legacy.IO_ADDR_R, VAR_2);
}
