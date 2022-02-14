
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {scalar_t__ mode; int algo; int size; int bytes; int strength; int options; int priv; void* write_oob; void* read_oob; void* write_page_raw; void* read_page_raw; void* write_page; void* read_subpage; void* read_page; int correct; int calculate; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int oobsize; int writesize; int * ooblayout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mtd_info*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct mtd_info*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_17)
{
 struct mtd_info *VAR_18 = FUNC_7(VAR_17);
 struct nand_ecc_ctrl *VAR_19 = &VAR_17->ecc;

 if (FUNC_2(VAR_19->mode != VAR_3))
  return -VAR_1;

 switch (VAR_19->algo) {
 case 128:
  VAR_19->calculate = VAR_7;
  VAR_19->correct = VAR_8;
  VAR_19->read_page = VAR_12;
  VAR_19->read_subpage = VAR_13;
  VAR_19->write_page = VAR_16;
  VAR_19->read_page_raw = VAR_11;
  VAR_19->write_page_raw = VAR_15;
  VAR_19->read_oob = VAR_10;
  VAR_19->write_oob = VAR_14;
  if (!VAR_19->size)
   VAR_19->size = 256;
  VAR_19->bytes = 3;
  VAR_19->strength = 1;

  if (FUNC_0(VAR_0))
   VAR_19->options |= VAR_4;

  return 0;
 case 129:
  if (!FUNC_4()) {
   FUNC_1(1, "CONFIG_MTD_NAND_ECC_SW_BCH not enabled\n");
   return -VAR_1;
  }
  VAR_19->calculate = VAR_5;
  VAR_19->correct = VAR_6;
  VAR_19->read_page = VAR_12;
  VAR_19->read_subpage = VAR_13;
  VAR_19->write_page = VAR_16;
  VAR_19->read_page_raw = VAR_11;
  VAR_19->write_page_raw = VAR_15;
  VAR_19->read_oob = VAR_10;
  VAR_19->write_oob = VAR_14;






  if (!VAR_19->size && (VAR_18->oobsize >= 64)) {
   VAR_19->size = 512;
   VAR_19->strength = 4;
  }





  if (!VAR_18->ooblayout) {

   if (VAR_18->oobsize < 64) {
    FUNC_1(1, "OOB layout is required when using software BCH on small pages\n");
    return -VAR_1;
   }

   FUNC_5(VAR_18, &VAR_9);

  }






  if (VAR_18->ooblayout == &VAR_9 &&
      VAR_19->options & VAR_2) {
   int VAR_20, VAR_21;


   VAR_19->size = 1024;
   VAR_20 = VAR_18->writesize / VAR_19->size;


   VAR_21 = (VAR_18->oobsize - 2) / VAR_20;
   VAR_19->strength = VAR_21 * 8 / FUNC_3(8 * VAR_19->size);
  }


  VAR_19->bytes = 0;
  VAR_19->priv = FUNC_6(VAR_18);
  if (!VAR_19->priv) {
   FUNC_1(1, "BCH ECC initialization failed!\n");
   return -VAR_1;
  }
  return 0;
 default:
  FUNC_1(1, "Unsupported ECC algorithm!\n");
  return -VAR_1;
 }
}
