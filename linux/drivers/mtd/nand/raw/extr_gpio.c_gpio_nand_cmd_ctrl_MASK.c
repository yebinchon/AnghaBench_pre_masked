
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct TYPE_3__ {int IO_ADDR_W; } ;
struct TYPE_4__ {TYPE_1__ legacy; } ;
struct gpiomtd {TYPE_2__ nand_chip; scalar_t__ ale; scalar_t__ cle; scalar_t__ nce; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct gpiomtd*) ;
 struct gpiomtd* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_5, int VAR_6,
          unsigned int VAR_7)
{
 struct gpiomtd *VAR_8 = FUNC_1(FUNC_3(VAR_5));

 FUNC_0(VAR_8);

 if (VAR_7 & VAR_3) {
  if (VAR_8->nce)
   FUNC_2(VAR_8->nce, !(VAR_7 & VAR_4));
  FUNC_2(VAR_8->cle, !!(VAR_7 & VAR_1));
  FUNC_2(VAR_8->ale, !!(VAR_7 & VAR_0));
  FUNC_0(VAR_8);
 }
 if (VAR_6 == VAR_2)
  return;

 FUNC_4(VAR_6, VAR_8->nand_chip.legacy.IO_ADDR_W);
 FUNC_0(VAR_8);
}
