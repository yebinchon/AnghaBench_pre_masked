
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_ecc_ctrl {scalar_t__ size; int strength; int write_oob; int write_oob_raw; int write_page; int write_page_raw; int read_oob; int read_oob_raw; int read_page; int read_page_raw; int steps; } ;
struct TYPE_5__ {int algo; } ;
struct nand_chip {TYPE_2__ ecc; int bbt_options; int controller; } ;
struct mtd_info {scalar_t__ writesize; int oobsize; } ;
struct marvell_nfc {int dev; TYPE_1__* caps; } ;
struct marvell_hw_ecc_layout {int writesize; scalar_t__ chunk; int strength; scalar_t__ data_bytes; int nchunks; } ;
struct TYPE_6__ {struct marvell_hw_ecc_layout const* layout; } ;
struct TYPE_4__ {int is_nfcv2; } ;


 int FUNC_0 (struct marvell_hw_ecc_layout*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct marvell_hw_ecc_layout* VAR_20 ;
 int FUNC_2 (struct mtd_info*,int *) ;
 struct nand_chip* FUNC_3 (struct mtd_info*) ;
 TYPE_3__* FUNC_4 (struct nand_chip*) ;
 struct marvell_nfc* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_21,
      struct nand_ecc_ctrl *VAR_22)
{
 struct nand_chip *VAR_23 = FUNC_3(VAR_21);
 struct marvell_nfc *VAR_24 = FUNC_5(VAR_23->controller);
 const struct marvell_hw_ecc_layout *VAR_25;
 int VAR_26;

 if (!VAR_24->caps->is_nfcv2 &&
     (VAR_21->writesize + VAR_21->oobsize > VAR_1)) {
  FUNC_1(VAR_24->dev,
   "NFCv1: writesize (%d) cannot be bigger than a chunk (%d)\n",
   VAR_21->writesize, VAR_1 - VAR_21->oobsize);
  return -VAR_0;
 }

 FUNC_4(VAR_23)->layout = ((void*)0);
 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_20); VAR_26++) {
  VAR_25 = &VAR_20[VAR_26];
  if (VAR_21->writesize == VAR_25->writesize &&
      VAR_22->size == VAR_25->chunk && VAR_22->strength == VAR_25->strength) {
   FUNC_4(VAR_23)->layout = VAR_25;
   break;
  }
 }

 if (!FUNC_4(VAR_23)->layout ||
     (!VAR_24->caps->is_nfcv2 && VAR_22->strength > 1)) {
  FUNC_1(VAR_24->dev,
   "ECC strength %d at page size %d is not supported\n",
   VAR_22->strength, VAR_21->writesize);
  return -VAR_0;
 }


 if (VAR_25->writesize == 2048 && VAR_25->strength == 8) {
  if (VAR_21->oobsize < 128) {
   FUNC_1(VAR_24->dev, "Requested layout needs at least 128 OOB bytes\n");
   return -VAR_0;
  } else {
   VAR_23->bbt_options |= VAR_2;
  }
 }

 FUNC_2(VAR_21, &VAR_5);
 VAR_22->steps = VAR_25->nchunks;
 VAR_22->size = VAR_25->data_bytes;

 if (VAR_22->strength == 1) {
  VAR_23->ecc.algo = VAR_4;
  VAR_22->read_page_raw = VAR_16;
  VAR_22->read_page = VAR_15;
  VAR_22->read_oob_raw = VAR_14;
  VAR_22->read_oob = VAR_22->read_oob_raw;
  VAR_22->write_page_raw = VAR_19;
  VAR_22->write_page = VAR_18;
  VAR_22->write_oob_raw = VAR_17;
  VAR_22->write_oob = VAR_22->write_oob_raw;
 } else {
  VAR_23->ecc.algo = VAR_3;
  VAR_22->strength = 16;
  VAR_22->read_page_raw = VAR_9;
  VAR_22->read_page = VAR_8;
  VAR_22->read_oob_raw = VAR_7;
  VAR_22->read_oob = VAR_6;
  VAR_22->write_page_raw = VAR_13;
  VAR_22->write_page = VAR_12;
  VAR_22->write_oob_raw = VAR_11;
  VAR_22->write_oob = VAR_10;
 }

 return 0;
}
