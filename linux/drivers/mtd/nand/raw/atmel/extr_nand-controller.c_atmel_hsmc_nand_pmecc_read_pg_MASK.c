
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int controller; } ;
struct mtd_info {int writesize; } ;
struct atmel_nand {TYPE_2__* activecs; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int data; int cs; int ncmds; int * cmds; } ;
struct atmel_hsmc_nand_controller {TYPE_4__ base; TYPE_3__ op; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {int id; TYPE_1__ rb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nand_chip*,int *,int) ;
 int FUNC_1 (struct nand_chip*,int) ;
 int FUNC_2 (struct nand_chip*,int ,int) ;
 int FUNC_3 (struct nand_chip*,int *,int,int,int) ;
 int FUNC_4 (struct nand_chip*,int *,int) ;
 int FUNC_5 (struct atmel_hsmc_nand_controller*,int) ;
 int FUNC_6 (struct nand_chip*,int,int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct nand_chip*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 struct atmel_nand* FUNC_10 (struct nand_chip*) ;
 struct atmel_hsmc_nand_controller* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct nand_chip *VAR_5, u8 *VAR_6,
      bool VAR_7, int VAR_8,
      bool VAR_9)
{
 struct mtd_info *VAR_10 = FUNC_9(VAR_5);
 struct atmel_nand *VAR_11 = FUNC_10(VAR_5);
 struct atmel_hsmc_nand_controller *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_11(VAR_5->controller);






 if (VAR_11->activecs->rb.type != VAR_0) {
  FUNC_8(VAR_5, VAR_8, 0, ((void*)0), 0);

  return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9);
 }

 VAR_12->op.cmds[VAR_12->op.ncmds++] = VAR_2;

 if (VAR_10->writesize > 512)
  VAR_12->op.cmds[VAR_12->op.ncmds++] = VAR_3;

 FUNC_6(VAR_5, VAR_8, 0x0);
 VAR_12->op.cs = VAR_11->activecs->id;
 VAR_12->op.data = VAR_1;

 VAR_13 = FUNC_2(VAR_5, VAR_4, VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_5(VAR_12, 0);
 if (VAR_13) {
  FUNC_1(VAR_5, VAR_9);
  FUNC_7(VAR_12->base.dev,
   "Failed to load NAND page data (err = %d)\n",
   VAR_13);
  return VAR_13;
 }

 FUNC_4(VAR_5, VAR_6, 1);

 VAR_13 = FUNC_0(VAR_5, VAR_6, VAR_9);

 FUNC_1(VAR_5, VAR_9);

 return VAR_13;
}
