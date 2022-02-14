
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int options; } ;
struct sh_flctl {int read_bytes; int index; int erase1_page_addr; int seqin_column; int seqin_page_addr; int seqin_read_cmd; TYPE_2__* pdev; int hwecc; int page_size; TYPE_1__ chip; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct sh_flctl*) ;
 int VAR_0 ;







 int VAR_1 ;


 int VAR_2 ;


 int FUNC_1 (struct sh_flctl*) ;
 int FUNC_2 (struct mtd_info*,int) ;
 int FUNC_3 (struct mtd_info*,int) ;
 int FUNC_4 (struct mtd_info*) ;
 int FUNC_5 (struct mtd_info*) ;
 struct sh_flctl* FUNC_6 (struct mtd_info*) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct sh_flctl*,int ) ;
 int FUNC_12 (struct sh_flctl*,int,int ) ;
 int FUNC_13 (struct mtd_info*,int,int) ;
 int FUNC_14 (struct mtd_info*,int const,unsigned int) ;
 int FUNC_15 (struct sh_flctl*) ;
 int FUNC_16 (struct sh_flctl*) ;
 int FUNC_17 (struct sh_flctl*,int,int ) ;
 int FUNC_18 (int,int ) ;

__attribute__((used)) static void FUNC_19(struct nand_chip *VAR_3, unsigned int VAR_4,
   int VAR_5, int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_7(VAR_3);
 struct sh_flctl *VAR_8 = FUNC_6(VAR_7);
 uint32_t VAR_9 = 0;

 FUNC_8(&VAR_8->pdev->dev);

 VAR_8->read_bytes = 0;
 if (VAR_4 != 136)
  VAR_8->index = 0;

 switch (VAR_4) {
 case 134:
 case 135:
  if (VAR_8->hwecc) {

   FUNC_3(VAR_7, VAR_6);
   break;
  }
  if (VAR_8->page_size)
   FUNC_14(VAR_7, VAR_4, (VAR_1 << 8)
    | VAR_4);
  else
   FUNC_14(VAR_7, VAR_4, VAR_4);

  FUNC_13(VAR_7, 0, VAR_6);

  VAR_8->read_bytes = VAR_7->writesize + VAR_7->oobsize;
  if (VAR_8->chip.options & VAR_0)
   VAR_5 >>= 1;
  VAR_8->index += VAR_5;
  goto read_normal_exit;

 case 132:
  if (VAR_8->hwecc) {

   FUNC_2(VAR_7, VAR_6);
   break;
  }

  if (VAR_8->page_size) {
   FUNC_14(VAR_7, VAR_4, (VAR_1 << 8)
    | 135);
   FUNC_13(VAR_7, VAR_7->writesize, VAR_6);
  } else {
   FUNC_14(VAR_7, VAR_4, VAR_4);
   FUNC_13(VAR_7, 0, VAR_6);
  }
  VAR_8->read_bytes = VAR_7->oobsize;
  goto read_normal_exit;

 case 130:
  if (VAR_8->hwecc)
   break;

  if (VAR_8->page_size)
   FUNC_14(VAR_7, VAR_4, (VAR_2 << 8)
    | VAR_4);
  else
   FUNC_14(VAR_7, VAR_4, VAR_4);

  FUNC_13(VAR_7, VAR_5, 0);

  VAR_8->read_bytes = VAR_7->writesize + VAR_7->oobsize - VAR_5;
  goto read_normal_exit;

 case 133:
  FUNC_14(VAR_7, VAR_4, VAR_4);


  if (VAR_8->chip.options & VAR_0)
   VAR_5 <<= 1;
  FUNC_13(VAR_7, VAR_5, 0);

  VAR_8->read_bytes = 8;
  FUNC_18(VAR_8->read_bytes, FUNC_0(VAR_8));
  FUNC_1(VAR_8);
  FUNC_15(VAR_8);
  FUNC_12(VAR_8, VAR_8->read_bytes, 0);
  FUNC_16(VAR_8);
  break;

 case 138:
  VAR_8->erase1_page_addr = VAR_6;
  break;

 case 137:
  FUNC_14(VAR_7, 138,
   (VAR_4 << 8) | 138);
  FUNC_13(VAR_7, -1, VAR_8->erase1_page_addr);
  FUNC_15(VAR_8);
  FUNC_16(VAR_8);
  break;

 case 129:
  if (!VAR_8->page_size) {

   if (VAR_5 >= VAR_7->writesize) {
    VAR_5 -= VAR_7->writesize;
    VAR_9 = 132;
   } else if (VAR_5 < 256) {
    VAR_9 = 135;
   } else {
    VAR_5 -= 256;
    VAR_9 = 134;
   }
  }
  VAR_8->seqin_column = VAR_5;
  VAR_8->seqin_page_addr = VAR_6;
  VAR_8->seqin_read_cmd = VAR_9;
  break;

 case 136:
  FUNC_1(VAR_8);
  if (!VAR_8->page_size) {
   FUNC_14(VAR_7, 129,
     VAR_8->seqin_read_cmd);
   FUNC_13(VAR_7, -1, -1);
   FUNC_18(0, FUNC_0(VAR_8));
   FUNC_15(VAR_8);
   FUNC_16(VAR_8);
  }
  if (VAR_8->hwecc) {

   if (VAR_8->seqin_column == VAR_7->writesize)
    FUNC_4(VAR_7);
   else if (!VAR_8->seqin_column)
    FUNC_5(VAR_7);
   else
    FUNC_10("Invalid address !?\n");
   break;
  }
  FUNC_14(VAR_7, VAR_4, (VAR_4 << 8) | 129);
  FUNC_13(VAR_7, VAR_8->seqin_column, VAR_8->seqin_page_addr);
  FUNC_18(VAR_8->index, FUNC_0(VAR_8));
  FUNC_15(VAR_8);
  FUNC_17(VAR_8, VAR_8->index, 0);
  FUNC_16(VAR_8);
  break;

 case 128:
  FUNC_14(VAR_7, VAR_4, VAR_4);
  FUNC_13(VAR_7, -1, -1);

  VAR_8->read_bytes = 1;
  FUNC_18(VAR_8->read_bytes, FUNC_0(VAR_8));
  FUNC_15(VAR_8);
  FUNC_11(VAR_8, 0);
  break;

 case 131:
  FUNC_14(VAR_7, VAR_4, VAR_4);
  FUNC_13(VAR_7, -1, -1);

  FUNC_18(0, FUNC_0(VAR_8));
  FUNC_15(VAR_8);
  FUNC_16(VAR_8);
  break;

 default:
  break;
 }
 goto runtime_exit;

read_normal_exit:
 FUNC_18(VAR_8->read_bytes, FUNC_0(VAR_8));
 FUNC_1(VAR_8);
 FUNC_15(VAR_8);
 FUNC_12(VAR_8, VAR_8->read_bytes, 0);
 FUNC_16(VAR_8);
runtime_exit:
 FUNC_9(&VAR_8->pdev->dev);
 return;
}
