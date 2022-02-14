
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ IO_ADDR_W; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_5, int VAR_6,
        unsigned int VAR_7)
{
 if (VAR_6 == VAR_3)
  return;

 if (VAR_7 & VAR_2)
  FUNC_2(VAR_5->legacy.IO_ADDR_W + (1 << VAR_1), VAR_6);
 else
  FUNC_2(VAR_5->legacy.IO_ADDR_W + (1 << VAR_0), VAR_6);


 FUNC_0();
 FUNC_1(VAR_4);
}
