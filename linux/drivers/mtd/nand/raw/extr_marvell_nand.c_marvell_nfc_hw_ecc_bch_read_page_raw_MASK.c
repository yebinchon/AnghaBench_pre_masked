
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int * oob_poi; int cur_cs; } ;
struct mtd_info {int oobsize; } ;
struct marvell_hw_ecc_layout {int data_bytes; int spare_bytes; int ecc_bytes; int full_chunk_cnt; int last_spare_bytes; int nchunks; int last_data_bytes; int last_ecc_bytes; } ;
struct TYPE_2__ {struct marvell_hw_ecc_layout* layout; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nand_chip*,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct nand_chip*,int,int *,int,int) ;
 int FUNC_4 (struct nand_chip*,int *,int,int) ;
 int FUNC_5 (struct nand_chip*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 TYPE_1__* FUNC_7 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_0, u8 *VAR_1,
      int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_6(VAR_0);
 const struct marvell_hw_ecc_layout *VAR_5 = FUNC_7(VAR_0)->layout;
 u8 *VAR_6 = VAR_0->oob_poi;
 int VAR_7 = VAR_5->data_bytes + VAR_5->spare_bytes + VAR_5->ecc_bytes;
 int VAR_8 = (VAR_5->full_chunk_cnt * VAR_5->spare_bytes) +
  VAR_5->last_spare_bytes;
 int VAR_9 = VAR_5->data_bytes;
 int VAR_10 = VAR_5->spare_bytes;
 int VAR_11 = VAR_5->ecc_bytes;
 int VAR_12;

 FUNC_1(VAR_0, VAR_0->cur_cs);

 if (VAR_2)
  FUNC_2(VAR_0->oob_poi, 0xFF, VAR_4->oobsize);

 FUNC_5(VAR_0, VAR_3, 0, ((void*)0), 0);

 for (VAR_12 = 0; VAR_12 < VAR_5->nchunks; VAR_12++) {

  if (VAR_12 >= VAR_5->full_chunk_cnt) {
   VAR_9 = VAR_5->last_data_bytes;
   VAR_10 = VAR_5->last_spare_bytes;
   VAR_11 = VAR_5->last_ecc_bytes;
  }


  FUNC_3(VAR_0, VAR_12 * VAR_7,
        VAR_1 + (VAR_5->data_bytes * VAR_12),
        VAR_9, 0);


  FUNC_4(VAR_0, VAR_6 + (VAR_5->spare_bytes * VAR_12),
      VAR_10, 0);


  FUNC_4(VAR_0, VAR_6 + VAR_8 +
      (FUNC_0(VAR_5->ecc_bytes, 32) * VAR_12),
      VAR_11, 0);
 }

 return 0;
}
