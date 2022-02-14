
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int (* waitfunc ) (struct nand_chip*) ;} ;
struct nand_chip {TYPE_4__ legacy; int oob_poi; int controller; } ;
struct mtd_info {int oobsize; } ;
struct atmel_nand {TYPE_2__* activecs; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int ncmds; int cs; int * cmds; int data; } ;
struct atmel_hsmc_nand_controller {TYPE_3__ base; TYPE_1__ op; } ;
struct TYPE_6__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (struct nand_chip*,int ,int) ;
 int FUNC_2 (struct nand_chip*,int) ;
 int FUNC_3 (struct nand_chip*,int ,int ) ;
 int FUNC_4 (struct nand_chip*,int const*,int) ;
 int FUNC_5 (struct atmel_hsmc_nand_controller*,int) ;
 int FUNC_6 (struct nand_chip*,int,int) ;
 int FUNC_7 (int ,char*,int) ;
 struct mtd_info* FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct nand_chip*) ;
 struct atmel_nand* FUNC_10 (struct nand_chip*) ;
 struct atmel_hsmc_nand_controller* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct nand_chip *VAR_6,
       const u8 *VAR_7, bool VAR_8,
       int VAR_9, bool VAR_10)
{
 struct mtd_info *VAR_11 = FUNC_8(VAR_6);
 struct atmel_nand *VAR_12 = FUNC_10(VAR_6);
 struct atmel_hsmc_nand_controller *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_11(VAR_6->controller);

 FUNC_4(VAR_6, VAR_7, 0);

 VAR_13->op.cmds[0] = VAR_3;
 VAR_13->op.ncmds = 1;
 FUNC_6(VAR_6, VAR_9, 0x0);
 VAR_13->op.cs = VAR_12->activecs->id;
 VAR_13->op.data = VAR_0;

 VAR_14 = FUNC_1(VAR_6, VAR_4, VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_13, 0);
 if (VAR_14) {
  FUNC_0(VAR_6, VAR_10);
  FUNC_7(VAR_13->base.dev,
   "Failed to transfer NAND page data (err = %d)\n",
   VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_2(VAR_6, VAR_10);

 FUNC_0(VAR_6, VAR_10);

 if (VAR_14)
  return VAR_14;

 FUNC_3(VAR_6, VAR_6->oob_poi, VAR_11->oobsize);

 VAR_13->op.cmds[0] = VAR_2;
 VAR_13->op.ncmds = 1;
 VAR_13->op.cs = VAR_12->activecs->id;
 VAR_14 = FUNC_5(VAR_13, 0);
 if (VAR_14)
  FUNC_7(VAR_13->base.dev, "Failed to program NAND page (err = %d)\n",
   VAR_14);

 VAR_15 = VAR_6->legacy.waitfunc(VAR_6);
 if (VAR_15 & VAR_5)
  return -VAR_1;

 return VAR_14;
}
