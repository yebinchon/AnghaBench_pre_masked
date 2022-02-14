
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sh_flctl {int page_size; int flcmncr_base; scalar_t__ hwecc; void* erase_ADRCNT; void* rw_ADRCNT; } ;
struct TYPE_2__ {int size; int bytes; int strength; int algo; int mode; int write_page; int read_page; } ;
struct nand_chip {int options; TYPE_1__ ecc; int * badblock_pattern; int base; } ;
struct mtd_info {int writesize; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
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
 int FUNC_0 (struct mtd_info*,int *) ;
 struct sh_flctl* FUNC_1 (struct mtd_info*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_17)
{
 u64 VAR_18 = FUNC_3(&VAR_17->base);
 struct mtd_info *VAR_19 = FUNC_2(VAR_17);
 struct sh_flctl *VAR_20 = FUNC_1(VAR_19);





 if (VAR_17->options & VAR_5)
  VAR_20->flcmncr_base |= VAR_9;

 if (VAR_19->writesize == 512) {
  VAR_20->page_size = 0;
  if (VAR_18 > (32 << 20)) {

   VAR_20->rw_ADRCNT = VAR_4;
   VAR_20->erase_ADRCNT = VAR_3;
  } else if (VAR_18 > (2 << 16)) {

   VAR_20->rw_ADRCNT = VAR_3;
   VAR_20->erase_ADRCNT = VAR_2;
  } else {
   VAR_20->rw_ADRCNT = VAR_2;
   VAR_20->erase_ADRCNT = VAR_1;
  }
 } else {
  VAR_20->page_size = 1;
  if (VAR_18 > (128 << 20)) {

   VAR_20->rw_ADRCNT = VAR_0;
   VAR_20->erase_ADRCNT = VAR_3;
  } else if (VAR_18 > (8 << 16)) {

   VAR_20->rw_ADRCNT = VAR_4;
   VAR_20->erase_ADRCNT = VAR_2;
  } else {
   VAR_20->rw_ADRCNT = VAR_3;
   VAR_20->erase_ADRCNT = VAR_1;
  }
 }

 if (VAR_20->hwecc) {
  if (VAR_19->writesize == 512) {
   FUNC_0(VAR_19, &VAR_13);
   VAR_17->badblock_pattern = &VAR_14;
  } else {
   FUNC_0(VAR_19, &VAR_12);
   VAR_17->badblock_pattern = &VAR_11;
  }

  VAR_17->ecc.size = 512;
  VAR_17->ecc.bytes = 10;
  VAR_17->ecc.strength = 4;
  VAR_17->ecc.read_page = VAR_15;
  VAR_17->ecc.write_page = VAR_16;
  VAR_17->ecc.mode = VAR_7;


  VAR_20->flcmncr_base |= VAR_10;
 } else {
  VAR_17->ecc.mode = VAR_8;
  VAR_17->ecc.algo = VAR_6;
 }

 return 0;
}
