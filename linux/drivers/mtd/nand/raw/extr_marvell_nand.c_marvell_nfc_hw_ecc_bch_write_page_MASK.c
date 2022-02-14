
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int tPROG_max; } ;
struct TYPE_6__ {TYPE_1__ sdr; } ;
struct TYPE_7__ {TYPE_2__ timings; } ;
struct nand_chip {TYPE_3__ data_interface; int * oob_poi; int cur_cs; } ;
struct mtd_info {int oobsize; } ;
struct marvell_hw_ecc_layout {int data_bytes; int spare_bytes; int nchunks; int full_chunk_cnt; int last_data_bytes; int last_spare_bytes; } ;
struct TYPE_8__ {struct marvell_hw_ecc_layout* layout; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int,int const*,int,int const*,int,int) ;
 int FUNC_4 (struct nand_chip*,int ) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int ) ;
 int FUNC_7 (int *,int,int ) ;
 struct mtd_info* FUNC_8 (struct nand_chip*) ;
 TYPE_4__* FUNC_9 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_0,
          const u8 *VAR_1,
          int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_8(VAR_0);
 const struct marvell_hw_ecc_layout *VAR_5 = FUNC_9(VAR_0)->layout;
 const u8 *VAR_6 = VAR_1;
 const u8 *VAR_7 = VAR_0->oob_poi;
 int VAR_8 = VAR_5->data_bytes;
 int VAR_9 = VAR_5->spare_bytes;
 int VAR_10, VAR_11;

 FUNC_4(VAR_0, VAR_0->cur_cs);


 if (!VAR_2)
  FUNC_7(VAR_0->oob_poi, 0xFF, VAR_4->oobsize);

 FUNC_2(VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_5->nchunks; VAR_10++) {
  if (VAR_10 >= VAR_5->full_chunk_cnt) {
   VAR_8 = VAR_5->last_data_bytes;
   VAR_9 = VAR_5->last_spare_bytes;
  }

  FUNC_3(VAR_0, VAR_10, VAR_6, VAR_8,
         VAR_7, VAR_9, VAR_3);
  VAR_6 += VAR_8;
  VAR_7 += VAR_9;







  FUNC_5(VAR_0);
 }

 VAR_11 = FUNC_6(VAR_0,
      FUNC_0(VAR_0->data_interface.timings.sdr.tPROG_max));

 FUNC_1(VAR_0);

 if (VAR_11)
  return VAR_11;

 return 0;
}
