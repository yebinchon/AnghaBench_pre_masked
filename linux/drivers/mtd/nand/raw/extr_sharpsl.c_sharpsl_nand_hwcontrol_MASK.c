
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sharpsl_nand {scalar_t__ io; } ;
struct TYPE_2__ {scalar_t__ IO_ADDR_W; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct sharpsl_nand* FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_3, int VAR_4,
       unsigned int VAR_5)
{
 struct sharpsl_nand *VAR_6 = FUNC_0(FUNC_1(VAR_3));

 if (VAR_5 & VAR_2) {
  unsigned char VAR_7 = VAR_5 & 0x07;

  VAR_7 |= (VAR_5 & 0x01) << 4;

  VAR_7 ^= 0x11;

  FUNC_3((FUNC_2(VAR_6->io + VAR_0) & ~0x17) | VAR_7, VAR_6->io + VAR_0);
 }

 if (VAR_4 != VAR_1)
  FUNC_3(VAR_4, VAR_3->legacy.IO_ADDR_W);
}
