
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tango_nfc {int dummy; } ;
struct TYPE_2__ {int (* read_oob_raw ) (struct nand_chip*,int) ;int (* read_oob ) (struct nand_chip*,int) ;} ;
struct nand_chip {TYPE_1__ ecc; int controller; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nand_chip*,int *) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct tango_nfc*,int ,int ,int *,int,int) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int) ;
 int FUNC_5 (struct nand_chip*,int) ;
 struct tango_nfc* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_2, u8 *VAR_3,
      int VAR_4, int VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_3(VAR_2);
 struct tango_nfc *VAR_7 = FUNC_6(VAR_2->controller);
 int VAR_8, VAR_9, VAR_10 = VAR_6->writesize;

 if (VAR_4)
  VAR_2->ecc.read_oob(VAR_2, VAR_5);

 VAR_8 = FUNC_2(VAR_7, VAR_0, VAR_1, VAR_3, VAR_10, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_9 = FUNC_1(VAR_2);
 if (VAR_9 < 0) {
  VAR_2->ecc.read_oob_raw(VAR_2, VAR_5);
  VAR_9 = FUNC_0(VAR_2, VAR_3);
 }

 return VAR_9;
}
