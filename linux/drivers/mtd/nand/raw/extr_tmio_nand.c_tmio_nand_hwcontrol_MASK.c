
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tmio_nand {scalar_t__ read_good; scalar_t__ fcr; } ;
struct TYPE_2__ {scalar_t__ IO_ADDR_W; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 struct tmio_nand* FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_10, int VAR_11,
    unsigned int VAR_12)
{
 struct tmio_nand *VAR_13 = FUNC_0(FUNC_1(VAR_10));

 if (VAR_12 & VAR_8) {
  u8 VAR_14;

  if (VAR_12 & VAR_9) {
   VAR_14 = VAR_3;

   if (VAR_12 & VAR_6)
    VAR_14 |= VAR_2;
   else
    VAR_14 &= ~VAR_2;

   if (VAR_12 & VAR_5)
    VAR_14 |= VAR_1;
   else
    VAR_14 &= ~VAR_1;
  } else {
   VAR_14 = VAR_4;
  }

  FUNC_2(VAR_14, VAR_13->fcr + VAR_0);
  VAR_13->read_good = 0;
 }

 if (VAR_11 != VAR_7)
  FUNC_2(VAR_11, VAR_10->legacy.IO_ADDR_W);
}
