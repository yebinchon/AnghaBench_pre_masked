
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tango_nfc {scalar_t__ mem_base; } ;
struct TYPE_2__ {int (* waitfunc ) (struct nand_chip*) ;} ;
struct nand_chip {TYPE_1__ legacy; int controller; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tango_nfc*,int ,int ,int const*,int,int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*) ;
 struct tango_nfc* FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_6, const u8 *VAR_7,
       int VAR_8, int VAR_9)
{
 struct mtd_info *VAR_10 = FUNC_1(VAR_6);
 struct tango_nfc *VAR_11 = FUNC_3(VAR_6->controller);
 int VAR_12, VAR_13, VAR_14 = VAR_10->writesize;


 if (VAR_8)
  return -VAR_2;

 FUNC_4(0xffffffff, VAR_11->mem_base + VAR_3);
 VAR_12 = FUNC_0(VAR_11, VAR_0, VAR_5, VAR_7, VAR_14, VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_13 = VAR_6->legacy.waitfunc(VAR_6);
 if (VAR_13 & VAR_4)
  return -VAR_1;

 return 0;
}
