
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int const* oob_poi; int cur_cs; } ;
struct marvell_hw_ecc_layout {int data_bytes; int spare_bytes; int ecc_bytes; int full_chunk_cnt; int last_spare_bytes; int nchunks; int last_data_bytes; int last_ecc_bytes; } ;
struct TYPE_2__ {struct marvell_hw_ecc_layout* layout; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct nand_chip*,int ) ;
 int FUNC_2 (struct nand_chip*,int,int *,int ,int) ;
 int FUNC_3 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int const*,int,int) ;
 TYPE_1__* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_0,
       const u8 *VAR_1,
       int VAR_2, int VAR_3)
{
 const struct marvell_hw_ecc_layout *VAR_4 = FUNC_6(VAR_0)->layout;
 int VAR_5 = VAR_4->data_bytes + VAR_4->spare_bytes + VAR_4->ecc_bytes;
 int VAR_6 = VAR_4->data_bytes;
 int VAR_7 = VAR_4->spare_bytes;
 int VAR_8 = VAR_4->ecc_bytes;
 int VAR_9 = 0;
 int VAR_10 = (VAR_4->full_chunk_cnt * VAR_4->spare_bytes) +
  VAR_4->last_spare_bytes;
 int VAR_11;

 FUNC_1(VAR_0, VAR_0->cur_cs);

 FUNC_3(VAR_0, VAR_3, 0, ((void*)0), 0);

 for (VAR_11 = 0; VAR_11 < VAR_4->nchunks; VAR_11++) {
  if (VAR_11 >= VAR_4->full_chunk_cnt) {
   VAR_6 = VAR_4->last_data_bytes;
   VAR_7 = VAR_4->last_spare_bytes;
   VAR_8 = VAR_4->last_ecc_bytes;
  }


  FUNC_2(VAR_0, VAR_11 * VAR_5,
         ((void*)0), 0, 0);


  FUNC_5(VAR_0, VAR_1 + (VAR_11 * VAR_4->data_bytes),
       VAR_6, 0);

  if (!VAR_2)
   continue;


  if (VAR_7)
   FUNC_5(VAR_0, VAR_0->oob_poi + VAR_9,
        VAR_7, 0);


  if (VAR_8)
   FUNC_5(VAR_0, VAR_0->oob_poi + VAR_10,
        VAR_8, 0);

  VAR_9 += VAR_7;
  VAR_10 += FUNC_0(VAR_8, 32);
 }

 return FUNC_4(VAR_0);
}
