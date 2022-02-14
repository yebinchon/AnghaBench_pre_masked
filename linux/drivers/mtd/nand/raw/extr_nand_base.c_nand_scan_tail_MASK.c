
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_ecc_ctrl {int mode; scalar_t__ algo; int size; int strength; int bytes; int steps; int total; void* calc_buf; void* code_buf; void* write_oob; void* write_oob_raw; void* read_oob; void* read_oob_raw; scalar_t__ calculate; scalar_t__ correct; void* write_page_raw; void* read_page_raw; void* write_page; void* read_page; int hwctl; int write_subpage; int read_subpage; } ;
struct TYPE_2__ {int page; } ;
struct nand_chip {int bbt_options; int options; int subpagesize; int page_shift; void* data_buf; int base; TYPE_1__ pagecache; void* oob_poi; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int writesize; int oobsize; int ecc_strength; int ecc_step_size; int oobavail; int subpage_sft; scalar_t__ bitflip_threshold; int _max_bad_blocks; int _block_markbad; int _block_isbad; int _block_isreserved; int _reboot; int _resume; int _suspend; int * _unlock; int * _lock; int _sync; int _write_oob; int _read_oob; int _panic_write; int * _unpoint; int * _point; int _erase; int flags; int owner; int name; int ooblayout; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;






 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (struct mtd_info*,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct nand_chip*) ;
 int VAR_15 ;
 int FUNC_10 (struct nand_chip*) ;
 scalar_t__ FUNC_11 (struct nand_chip*) ;
 int FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (struct nand_chip*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_14 (struct nand_chip*,int ) ;
 int FUNC_15 (struct nand_chip*) ;
 int FUNC_16 (struct nand_chip*,int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 struct mtd_info* FUNC_17 (struct nand_chip*) ;
 int VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 int VAR_39 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *,int ) ;
 int VAR_40 ;
 int FUNC_20 (int *) ;
 int VAR_41 ;
 int FUNC_21 (char*,...) ;
 int VAR_42 ;

__attribute__((used)) static int FUNC_22(struct nand_chip *VAR_43)
{
 struct mtd_info *VAR_44 = FUNC_17(VAR_43);
 struct nand_ecc_ctrl *VAR_45 = &VAR_43->ecc;
 int VAR_46, VAR_47;


 if (FUNC_2((VAR_43->bbt_options & VAR_4) &&
     !(VAR_43->bbt_options & VAR_5))) {
  return -VAR_0;
 }

 VAR_43->data_buf = FUNC_4(VAR_44->writesize + VAR_44->oobsize, VAR_2);
 if (!VAR_43->data_buf)
  return -VAR_1;







 FUNC_14(VAR_43, 0);
 VAR_46 = FUNC_13(VAR_43);
 FUNC_8(VAR_43);
 if (VAR_46)
  goto err_free_buf;


 VAR_43->oob_poi = VAR_43->data_buf + VAR_44->writesize;




 if (!VAR_44->ooblayout &&
     !(VAR_45->mode == 128 && VAR_45->algo == VAR_6)) {
  switch (VAR_44->oobsize) {
  case 8:
  case 16:
   FUNC_6(VAR_44, &VAR_18);
   break;
  case 64:
  case 128:
   FUNC_6(VAR_44, &VAR_16);
   break;
  default:







   if (VAR_45->mode == 130) {
    FUNC_6(VAR_44,
      &VAR_17);
    break;
   }

   FUNC_1(1, "No oob scheme defined for oobsize %d\n",
    VAR_44->oobsize);
   VAR_46 = -VAR_0;
   goto err_nand_manuf_cleanup;
  }
 }






 switch (VAR_45->mode) {
 case 132:

  if (!VAR_45->calculate || !VAR_45->correct || !VAR_45->hwctl) {
   FUNC_1(1, "No ECC functions supplied; hardware ECC not possible\n");
   VAR_46 = -VAR_0;
   goto err_nand_manuf_cleanup;
  }
  if (!VAR_45->read_page)
   VAR_45->read_page = VAR_23;


 case 133:

  if (!VAR_45->read_page)
   VAR_45->read_page = VAR_22;
  if (!VAR_45->write_page)
   VAR_45->write_page = VAR_35;
  if (!VAR_45->read_page_raw)
   VAR_45->read_page_raw = VAR_24;
  if (!VAR_45->write_page_raw)
   VAR_45->write_page_raw = VAR_36;
  if (!VAR_45->read_oob)
   VAR_45->read_oob = VAR_20;
  if (!VAR_45->write_oob)
   VAR_45->write_oob = VAR_33;
  if (!VAR_45->read_subpage)
   VAR_45->read_subpage = VAR_27;
  if (!VAR_45->write_subpage && VAR_45->hwctl && VAR_45->calculate)
   VAR_45->write_subpage = VAR_39;


 case 131:
  if ((!VAR_45->calculate || !VAR_45->correct || !VAR_45->hwctl) &&
      (!VAR_45->read_page ||
       VAR_45->read_page == VAR_22 ||
       !VAR_45->write_page ||
       VAR_45->write_page == VAR_35)) {
   FUNC_1(1, "No ECC functions supplied; hardware ECC not possible\n");
   VAR_46 = -VAR_0;
   goto err_nand_manuf_cleanup;
  }

  if (!VAR_45->read_page)
   VAR_45->read_page = VAR_26;
  if (!VAR_45->write_page)
   VAR_45->write_page = VAR_38;
  if (!VAR_45->read_page_raw)
   VAR_45->read_page_raw = VAR_25;
  if (!VAR_45->write_page_raw)
   VAR_45->write_page_raw = VAR_37;
  if (!VAR_45->read_oob)
   VAR_45->read_oob = VAR_21;
  if (!VAR_45->write_oob)
   VAR_45->write_oob = VAR_34;

  if (VAR_44->writesize >= VAR_45->size) {
   if (!VAR_45->strength) {
    FUNC_1(1, "Driver must set ecc.strength when using hardware ECC\n");
    VAR_46 = -VAR_0;
    goto err_nand_manuf_cleanup;
   }
   break;
  }
  FUNC_21("%d byte HW ECC not possible on %d byte page size, fallback to SW ECC\n",
   VAR_45->size, VAR_44->writesize);
  VAR_45->mode = 128;
  VAR_45->algo = VAR_7;


 case 128:
  VAR_46 = FUNC_15(VAR_43);
  if (VAR_46) {
   VAR_46 = -VAR_0;
   goto err_nand_manuf_cleanup;
  }
  break;

 case 129:
  if (!VAR_45->read_page || !VAR_45->write_page) {
   FUNC_1(1, "No ECC functions supplied; on-die ECC not possible\n");
   VAR_46 = -VAR_0;
   goto err_nand_manuf_cleanup;
  }
  if (!VAR_45->read_oob)
   VAR_45->read_oob = VAR_20;
  if (!VAR_45->write_oob)
   VAR_45->write_oob = VAR_33;
  break;

 case 130:
  FUNC_21("NAND_ECC_NONE selected by board driver. This is not recommended!\n");
  VAR_45->read_page = VAR_24;
  VAR_45->write_page = VAR_36;
  VAR_45->read_oob = VAR_20;
  VAR_45->read_page_raw = VAR_24;
  VAR_45->write_page_raw = VAR_36;
  VAR_45->write_oob = VAR_33;
  VAR_45->size = VAR_44->writesize;
  VAR_45->bytes = 0;
  VAR_45->strength = 0;
  break;

 default:
  FUNC_1(1, "Invalid NAND_ECC_MODE %d\n", VAR_45->mode);
  VAR_46 = -VAR_0;
  goto err_nand_manuf_cleanup;
 }

 if (VAR_45->correct || VAR_45->calculate) {
  VAR_45->calc_buf = FUNC_4(VAR_44->oobsize, VAR_2);
  VAR_45->code_buf = FUNC_4(VAR_44->oobsize, VAR_2);
  if (!VAR_45->calc_buf || !VAR_45->code_buf) {
   VAR_46 = -VAR_1;
   goto err_nand_manuf_cleanup;
  }
 }


 if (!VAR_45->read_oob_raw)
  VAR_45->read_oob_raw = VAR_45->read_oob;
 if (!VAR_45->write_oob_raw)
  VAR_45->write_oob_raw = VAR_45->write_oob;


 VAR_44->ecc_strength = VAR_45->strength;
 VAR_44->ecc_step_size = VAR_45->size;





 VAR_45->steps = VAR_44->writesize / VAR_45->size;
 if (VAR_45->steps * VAR_45->size != VAR_44->writesize) {
  FUNC_1(1, "Invalid ECC parameters\n");
  VAR_46 = -VAR_0;
  goto err_nand_manuf_cleanup;
 }
 VAR_45->total = VAR_45->steps * VAR_45->bytes;
 if (VAR_45->total > VAR_44->oobsize) {
  FUNC_1(1, "Total number of ECC bytes exceeded oobsize\n");
  VAR_46 = -VAR_0;
  goto err_nand_manuf_cleanup;
 }





 VAR_46 = FUNC_5(VAR_44);
 if (VAR_46 < 0)
  VAR_46 = 0;

 VAR_44->oobavail = VAR_46;


 if (!FUNC_9(VAR_43))
  FUNC_21("WARNING: %s: the ECC used on your system is too weak compared to the one required by the NAND chip\n",
   VAR_44->name);


 if (!(VAR_43->options & VAR_8) && FUNC_11(VAR_43)) {
  switch (VAR_45->steps) {
  case 2:
   VAR_44->subpage_sft = 1;
   break;
  case 4:
  case 8:
  case 16:
   VAR_44->subpage_sft = 2;
   break;
  }
 }
 VAR_43->subpagesize = VAR_44->writesize >> VAR_44->subpage_sft;


 VAR_43->pagecache.page = -1;


 switch (VAR_45->mode) {
 case 128:
  if (VAR_43->page_shift > 9)
   VAR_43->options |= VAR_11;
  break;

 default:
  break;
 }

 VAR_46 = FUNC_19(&VAR_43->base, &VAR_42, VAR_44->owner);
 if (VAR_46)
  goto err_nand_manuf_cleanup;


 if (VAR_43->options & VAR_9)
  VAR_44->flags = VAR_3;


 VAR_44->_erase = VAR_15;
 VAR_44->_point = ((void*)0);
 VAR_44->_unpoint = ((void*)0);
 VAR_44->_panic_write = VAR_41;
 VAR_44->_read_oob = VAR_19;
 VAR_44->_write_oob = VAR_32;
 VAR_44->_sync = VAR_31;
 VAR_44->_lock = ((void*)0);
 VAR_44->_unlock = ((void*)0);
 VAR_44->_suspend = VAR_30;
 VAR_44->_resume = VAR_28;
 VAR_44->_reboot = VAR_29;
 VAR_44->_block_isreserved = VAR_13;
 VAR_44->_block_isbad = VAR_12;
 VAR_44->_block_markbad = VAR_14;
 VAR_44->_max_bad_blocks = VAR_40;






 if (!VAR_44->bitflip_threshold)
  VAR_44->bitflip_threshold = FUNC_0(VAR_44->ecc_strength * 3, 4);


 VAR_46 = FUNC_10(VAR_43);
 if (VAR_46)
  goto err_nanddev_cleanup;


 for (VAR_47 = 0; VAR_47 < FUNC_20(&VAR_43->base); VAR_47++) {
  VAR_46 = FUNC_16(VAR_43, VAR_47);
  if (VAR_46)
   goto err_nanddev_cleanup;
 }


 if (VAR_43->options & VAR_10)
  return 0;


 VAR_46 = FUNC_7(VAR_43);
 if (VAR_46)
  goto err_nanddev_cleanup;

 return 0;


err_nanddev_cleanup:
 FUNC_18(&VAR_43->base);

err_nand_manuf_cleanup:
 FUNC_12(VAR_43);

err_free_buf:
 FUNC_3(VAR_43->data_buf);
 FUNC_3(VAR_45->code_buf);
 FUNC_3(VAR_45->calc_buf);

 return VAR_46;
}
