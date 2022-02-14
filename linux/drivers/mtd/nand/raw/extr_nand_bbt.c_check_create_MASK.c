
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int bbt_options; int base; struct nand_bbt_descr* bbt_md; struct nand_bbt_descr* bbt_td; } ;
struct nand_bbt_descr {int options; int* pages; int* version; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nand_chip*,int *,struct nand_bbt_descr*,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nand_chip*,int *,struct nand_bbt_descr*,int) ;
 int FUNC_6 (struct nand_chip*,int *,struct nand_bbt_descr*,struct nand_bbt_descr*,int) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_5, uint8_t *VAR_6,
   struct nand_bbt_descr *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct nand_bbt_descr *VAR_15 = VAR_5->bbt_td;
 struct nand_bbt_descr *VAR_16 = VAR_5->bbt_md;
 struct nand_bbt_descr *VAR_17, *VAR_18;


 if (VAR_15->options & VAR_2)
  VAR_9 = FUNC_4(&VAR_5->base);
 else
  VAR_9 = 1;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_10 = 0;
  VAR_11 = 0;
  VAR_17 = ((void*)0);
  VAR_18 = ((void*)0);
  VAR_13 = VAR_14 = 0;

  VAR_12 = (VAR_15->options & VAR_2) ? VAR_8 : -1;

  if (VAR_16) {
   if (VAR_15->pages[VAR_8] == -1 && VAR_16->pages[VAR_8] == -1) {
    VAR_11 = 1;
    VAR_10 = 0x03;
   } else if (VAR_15->pages[VAR_8] == -1) {
    VAR_17 = VAR_16;
    VAR_10 = 0x01;
   } else if (VAR_16->pages[VAR_8] == -1) {
    VAR_17 = VAR_15;
    VAR_10 = 0x02;
   } else if (VAR_15->version[VAR_8] == VAR_16->version[VAR_8]) {
    VAR_17 = VAR_15;
    if (!(VAR_15->options & VAR_3))
     VAR_18 = VAR_16;
   } else if (((int8_t)(VAR_15->version[VAR_8] - VAR_16->version[VAR_8])) > 0) {
    VAR_17 = VAR_15;
    VAR_10 = 0x02;
   } else {
    VAR_17 = VAR_16;
    VAR_10 = 0x01;
   }
  } else {
   if (VAR_15->pages[VAR_8] == -1) {
    VAR_11 = 1;
    VAR_10 = 0x01;
   } else {
    VAR_17 = VAR_15;
   }
  }

  if (VAR_11) {

   if (!(VAR_15->options & VAR_0))
    continue;


   if (!(VAR_5->bbt_options & VAR_1))
    FUNC_0(VAR_5, VAR_6, VAR_7, VAR_12);

   VAR_15->version[VAR_8] = 1;
   if (VAR_16)
    VAR_16->version[VAR_8] = 1;
  }


  if (VAR_17) {
   VAR_13 = FUNC_5(VAR_5, VAR_6, VAR_17, VAR_12);
   if (FUNC_3(VAR_13)) {

    VAR_17->pages[VAR_8] = -1;
    VAR_17->version[VAR_8] = 0;
    VAR_8--;
    continue;
   }
  }

  if (VAR_18) {
   VAR_14 = FUNC_5(VAR_5, VAR_6, VAR_18, VAR_12);
   if (FUNC_3(VAR_14)) {

    VAR_18->pages[VAR_8] = -1;
    VAR_18->version[VAR_8] = 0;
    VAR_8--;
    continue;
   }
  }


  if (FUNC_2(VAR_13) || FUNC_2(VAR_14))
   VAR_10 = 0x03;


  if (VAR_16) {
   VAR_15->version[VAR_8] = FUNC_1(VAR_15->version[VAR_8], VAR_16->version[VAR_8]);
   VAR_16->version[VAR_8] = VAR_15->version[VAR_8];
  }


  if ((VAR_10 & 0x01) && (VAR_15->options & VAR_4)) {
   VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_15, VAR_16, VAR_12);
   if (VAR_13 < 0)
    return VAR_13;
  }


  if ((VAR_10 & 0x02) && VAR_16 && (VAR_16->options & VAR_4)) {
   VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_16, VAR_15, VAR_12);
   if (VAR_13 < 0)
    return VAR_13;
  }
 }
 return 0;
}
