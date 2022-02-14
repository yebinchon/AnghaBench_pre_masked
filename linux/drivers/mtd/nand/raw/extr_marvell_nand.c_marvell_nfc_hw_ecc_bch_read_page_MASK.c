
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nand_chip {int * oob_poi; int cur_cs; } ;
struct mtd_info {int oobsize; } ;
struct marvell_hw_ecc_layout {int data_bytes; int spare_bytes; int nchunks; int full_chunk_cnt; int last_data_bytes; int last_spare_bytes; int ecc_bytes; int last_ecc_bytes; int writesize; int strength; } ;
struct TYPE_2__ {struct marvell_hw_ecc_layout* layout; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nand_chip*,int *,int,int *,int,int *,int,int*) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int,int *,int,int *,int,int) ;
 int FUNC_5 (struct nand_chip*,int*) ;
 int FUNC_6 (struct nand_chip*,int ) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct nand_chip*,int,int *,int,int) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 TYPE_1__* FUNC_10 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_11(struct nand_chip *VAR_0,
         u8 *VAR_1, int VAR_2,
         int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_9(VAR_0);
 const struct marvell_hw_ecc_layout *VAR_5 = FUNC_10(VAR_0)->layout;
 int VAR_6 = VAR_5->data_bytes, VAR_7 = VAR_5->spare_bytes;
 u8 *VAR_8 = VAR_1, *VAR_9 = VAR_0->oob_poi;
 int VAR_10 = 0;
 u32 VAR_11 = 0;
 int VAR_12, VAR_13;

 FUNC_6(VAR_0, VAR_0->cur_cs);






 if (VAR_2)
  FUNC_7(VAR_0->oob_poi, 0xFF, VAR_4->oobsize);

 FUNC_3(VAR_0);

 for (VAR_12 = 0; VAR_12 < VAR_5->nchunks; VAR_12++) {

  if (VAR_12 >= VAR_5->full_chunk_cnt) {
   VAR_6 = VAR_5->last_data_bytes;
   VAR_7 = VAR_5->last_spare_bytes;
  }


  FUNC_4(VAR_0, VAR_12, VAR_8, VAR_6,
        VAR_9, VAR_7, VAR_3);
  VAR_13 = FUNC_5(VAR_0, &VAR_10);
  if (VAR_13)
   VAR_11 |= FUNC_0(VAR_12);

  VAR_8 += VAR_6;
  VAR_9 += VAR_7;
 }

 FUNC_2(VAR_0);

 if (!VAR_11)
  return VAR_10;
 for (VAR_12 = 0; VAR_12 < VAR_5->nchunks; VAR_12++) {
  int VAR_14, VAR_15, VAR_16;
  int VAR_17, VAR_18, VAR_19;
  int VAR_20, VAR_21, VAR_22;


  if (!(VAR_11 & FUNC_0(VAR_12)))
   continue;

  VAR_14 = VAR_12 * (VAR_5->data_bytes + VAR_5->spare_bytes +
         VAR_5->ecc_bytes);
  VAR_15 = VAR_14 +
   (VAR_12 < VAR_5->full_chunk_cnt ? VAR_5->data_bytes :
            VAR_5->last_data_bytes);
  VAR_16 = VAR_15 +
   (VAR_12 < VAR_5->full_chunk_cnt ? VAR_5->spare_bytes :
            VAR_5->last_spare_bytes);

  VAR_17 = VAR_12 * VAR_5->data_bytes;
  VAR_18 = VAR_12 * VAR_5->spare_bytes;
  VAR_19 = (VAR_5->full_chunk_cnt * VAR_5->spare_bytes) +
     VAR_5->last_spare_bytes +
     (VAR_12 * (VAR_5->ecc_bytes + 2));

  VAR_20 = VAR_12 < VAR_5->full_chunk_cnt ? VAR_5->data_bytes :
       VAR_5->last_data_bytes;
  VAR_21 = VAR_12 < VAR_5->full_chunk_cnt ? VAR_5->spare_bytes :
        VAR_5->last_spare_bytes;
  VAR_22 = VAR_12 < VAR_5->full_chunk_cnt ? VAR_5->ecc_bytes :
             VAR_5->last_ecc_bytes;







  if (VAR_5->writesize == 2048 && VAR_5->strength == 8) {
   FUNC_8(VAR_0, VAR_14,
         VAR_1 + VAR_17, VAR_20,
         0);
   FUNC_8(VAR_0, VAR_15,
         VAR_0->oob_poi + VAR_18, VAR_21,
         0);
  }

  FUNC_8(VAR_0, VAR_16,
        VAR_0->oob_poi + VAR_19, VAR_22,
        0);


  FUNC_1(VAR_0, VAR_1 + VAR_17, VAR_20,
           VAR_0->oob_poi + VAR_18, VAR_21,
           VAR_0->oob_poi + VAR_19, VAR_22,
           &VAR_10);
 }

 return VAR_10;
}
