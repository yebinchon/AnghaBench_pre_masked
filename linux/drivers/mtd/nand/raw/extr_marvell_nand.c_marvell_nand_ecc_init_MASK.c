
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_ecc_ctrl {int mode; int size; int strength; } ;
struct TYPE_4__ {int step_size; int strength; } ;
struct TYPE_5__ {TYPE_1__ eccreq; } ;
struct nand_chip {TYPE_2__ base; int controller; } ;
struct mtd_info {int writesize; } ;
struct marvell_nfc {int dev; TYPE_3__* caps; } ;
struct TYPE_6__ {int is_nfcv2; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mtd_info*,struct nand_ecc_ctrl*) ;
 struct nand_chip* FUNC_3 (struct mtd_info*) ;
 struct marvell_nfc* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_3,
     struct nand_ecc_ctrl *VAR_4)
{
 struct nand_chip *VAR_5 = FUNC_3(VAR_3);
 struct marvell_nfc *VAR_6 = FUNC_4(VAR_5->controller);
 int VAR_7;

 if (VAR_4->mode != 130 && (!VAR_4->size || !VAR_4->strength)) {
  if (VAR_5->base.eccreq.step_size && VAR_5->base.eccreq.strength) {
   VAR_4->size = VAR_5->base.eccreq.step_size;
   VAR_4->strength = VAR_5->base.eccreq.strength;
  } else {
   FUNC_1(VAR_6->dev,
     "No minimum ECC strength, using 1b/512B\n");
   VAR_4->size = 512;
   VAR_4->strength = 1;
  }
 }

 switch (VAR_4->mode) {
 case 131:
  VAR_7 = FUNC_2(VAR_3, VAR_4);
  if (VAR_7)
   return VAR_7;
  break;
 case 130:
 case 128:
 case 129:
  if (!VAR_6->caps->is_nfcv2 && VAR_3->writesize != VAR_2 &&
      VAR_3->writesize != VAR_1) {
   FUNC_0(VAR_6->dev, "NFCv1 cannot write %d bytes pages\n",
    VAR_3->writesize);
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
