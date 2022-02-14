
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_10__ {int options; int bytes; void* strength; void* size; int algo; } ;
struct TYPE_8__ {void* step_size; void* strength; } ;
struct TYPE_9__ {TYPE_2__ eccreq; } ;
struct nand_chip {int options; TYPE_4__ ecc; TYPE_3__ base; int controller; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct TYPE_11__ {int bytes; int nsectors; void* strength; void* sectorsize; scalar_t__ ooboffset; } ;
struct atmel_pmecc_user_req {int pagesize; int oobsize; TYPE_5__ ecc; } ;
struct atmel_nand_controller {int pmecc; TYPE_6__* dev; TYPE_1__* caps; } ;
struct atmel_nand {int pmecc; } ;
struct TYPE_12__ {int of_node; } ;
struct TYPE_7__ {scalar_t__ legacy_of_bindings; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct atmel_pmecc_user_req*) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (struct mtd_info*,int *) ;
 int VAR_7 ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (int ,char*,void**) ;
 struct atmel_nand* FUNC_7 (struct nand_chip*) ;
 struct atmel_nand_controller* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_8)
{
 struct mtd_info *VAR_9 = FUNC_5(VAR_8);
 struct atmel_nand *VAR_10 = FUNC_7(VAR_8);
 struct atmel_nand_controller *VAR_11;
 struct atmel_pmecc_user_req VAR_12;

 VAR_11 = FUNC_8(VAR_8->controller);

 if (!VAR_11->pmecc) {
  FUNC_3(VAR_11->dev, "HW ECC not supported\n");
  return -VAR_3;
 }

 if (VAR_11->caps->legacy_of_bindings) {
  u32 VAR_13;

  if (!FUNC_6(VAR_11->dev->of_node, "atmel,pmecc-cap",
       &VAR_13))
   VAR_8->ecc.strength = VAR_13;

  if (!FUNC_6(VAR_11->dev->of_node,
       "atmel,pmecc-sector-size",
       &VAR_13))
   VAR_8->ecc.size = VAR_13;
 }

 if (VAR_8->ecc.options & VAR_5)
  VAR_12.ecc.strength = VAR_0;
 else if (VAR_8->ecc.strength)
  VAR_12.ecc.strength = VAR_8->ecc.strength;
 else if (VAR_8->base.eccreq.strength)
  VAR_12.ecc.strength = VAR_8->base.eccreq.strength;
 else
  VAR_12.ecc.strength = VAR_0;

 if (VAR_8->ecc.size)
  VAR_12.ecc.sectorsize = VAR_8->ecc.size;
 else if (VAR_8->base.eccreq.step_size)
  VAR_12.ecc.sectorsize = VAR_8->base.eccreq.step_size;
 else
  VAR_12.ecc.sectorsize = VAR_2;

 VAR_12.pagesize = VAR_9->writesize;
 VAR_12.oobsize = VAR_9->oobsize;

 if (VAR_9->writesize <= 512) {
  VAR_12.ecc.bytes = 4;
  VAR_12.ecc.ooboffset = 0;
 } else {
  VAR_12.ecc.bytes = VAR_9->oobsize - 2;
  VAR_12.ecc.ooboffset = VAR_1;
 }

 VAR_10->pmecc = FUNC_2(VAR_11->pmecc, &VAR_12);
 if (FUNC_0(VAR_10->pmecc))
  return FUNC_1(VAR_10->pmecc);

 VAR_8->ecc.algo = VAR_4;
 VAR_8->ecc.size = VAR_12.ecc.sectorsize;
 VAR_8->ecc.bytes = VAR_12.ecc.bytes / VAR_12.ecc.nsectors;
 VAR_8->ecc.strength = VAR_12.ecc.strength;

 VAR_8->options |= VAR_6;

 FUNC_4(VAR_9, &VAR_7);

 return 0;
}
