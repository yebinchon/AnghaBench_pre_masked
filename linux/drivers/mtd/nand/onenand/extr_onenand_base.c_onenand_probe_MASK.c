
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int (* chip_probe ) (struct mtd_info*) ;int (* read_word ) (scalar_t__) ;int technology; int device_id; int version_id; int dies; int chipsize; int erase_shift; int page_shift; int page_mask; int density_mask; int writesize; scalar_t__ base; } ;
struct mtd_info {int numeraseregions; int writesize; int oobsize; int erasesize; int size; int eraseregions; struct onenand_chip* priv; } ;
struct mtd_erase_region_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct onenand_chip*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct onenand_chip*) ;
 scalar_t__ FUNC_2 (struct onenand_chip*) ;
 scalar_t__ FUNC_3 (struct onenand_chip*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct mtd_info*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct mtd_info*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct mtd_info *VAR_6)
{
 struct onenand_chip *VAR_7 = VAR_6->priv;
 int VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_11 = VAR_7->chip_probe(VAR_6);
 if (VAR_11)
  return VAR_11;


 VAR_8 = VAR_7->read_word(VAR_7->base + VAR_3);
 VAR_9 = VAR_7->read_word(VAR_7->base + VAR_5);
 VAR_7->technology = VAR_7->read_word(VAR_7->base + VAR_4);


 FUNC_9(VAR_8, VAR_9);
 VAR_7->device_id = VAR_8;
 VAR_7->version_id = VAR_9;


 FUNC_7(VAR_6);

 VAR_10 = FUNC_8(VAR_8);
 if (FUNC_0(VAR_7)) {
  VAR_7->dies = FUNC_3(VAR_7) ? 2 : 1;

  VAR_6->numeraseregions = VAR_7->dies << 1;
  VAR_6->eraseregions =
   FUNC_6(VAR_7->dies << 1,
    sizeof(struct mtd_erase_region_info),
    VAR_1);
  if (!VAR_6->eraseregions)
   return -VAR_0;
 }





 VAR_7->chipsize = (16 << VAR_10) << 20;



 VAR_6->writesize = VAR_7->read_word(VAR_7->base + VAR_2);

 if (FUNC_2(VAR_7))
  VAR_6->writesize <<= 1;

 VAR_6->oobsize = VAR_6->writesize >> 5;

 VAR_6->erasesize = VAR_6->writesize << 6;





 if (FUNC_0(VAR_7))
  VAR_6->erasesize <<= 1;

 VAR_7->erase_shift = FUNC_4(VAR_6->erasesize) - 1;
 VAR_7->page_shift = FUNC_4(VAR_6->writesize) - 1;
 VAR_7->page_mask = (1 << (VAR_7->erase_shift - VAR_7->page_shift)) - 1;

 if (FUNC_3(VAR_7))
  VAR_7->density_mask = VAR_7->chipsize >> (VAR_7->erase_shift + 1);

 VAR_7->writesize = VAR_6->writesize;



 if (FUNC_0(VAR_7))
  FUNC_5(VAR_6);
 else
  VAR_6->size = VAR_7->chipsize;







 if (FUNC_1(VAR_7)) {
  VAR_6->writesize <<= 1;
  VAR_6->erasesize <<= 1;
 }

 return 0;
}
