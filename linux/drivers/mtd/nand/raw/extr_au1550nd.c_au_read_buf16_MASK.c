
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
typedef int u16 ;
struct TYPE_2__ {int IO_ADDR_R; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0, u_char *VAR_1, int VAR_2)
{
 int VAR_3;
 u16 *VAR_4 = (u16 *) VAR_1;
 VAR_2 >>= 1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4[VAR_3] = FUNC_0(VAR_0->legacy.IO_ADDR_R);
  FUNC_1();
 }
}
