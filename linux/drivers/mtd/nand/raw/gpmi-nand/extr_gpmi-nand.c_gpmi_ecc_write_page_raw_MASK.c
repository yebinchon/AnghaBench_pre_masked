
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int u8 ;
struct nand_chip {int const* oob_poi; } ;
struct mtd_info {size_t writesize; size_t oobsize; } ;
struct bch_geometry {int ecc_chunk_size; int ecc_strength; int gf_len; size_t metadata_size; int ecc_chunk_count; } ;
struct gpmi_nand_data {scalar_t__ swap_block_mark; int * raw_buffer; struct bch_geometry bch_geometry; } ;


 int FUNC_0 (int *,size_t,int const*,size_t,int) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int,size_t) ;
 struct gpmi_nand_data* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int,int ,int *,size_t) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_0, const uint8_t *VAR_1,
       int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_5(VAR_0);
 struct gpmi_nand_data *VAR_5 = FUNC_3(VAR_0);
 struct bch_geometry *VAR_6 = &VAR_5->bch_geometry;
 int VAR_7 = VAR_6->ecc_chunk_size;
 int VAR_8 = VAR_6->ecc_strength * VAR_6->gf_len;
 u8 *VAR_9 = VAR_5->raw_buffer;
 uint8_t *VAR_10 = VAR_0->oob_poi;
 size_t VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 int VAR_14;






 if (!VAR_1 || !VAR_2)
  FUNC_2(VAR_9, 0xff, VAR_4->writesize + VAR_4->oobsize);





 FUNC_1(VAR_9, VAR_10, VAR_6->metadata_size);
 VAR_12 = VAR_6->metadata_size * 8;
 VAR_11 = VAR_12;


 for (VAR_14 = 0; VAR_14 < VAR_6->ecc_chunk_count; VAR_14++) {
  if (VAR_1)
   FUNC_0(VAR_9, VAR_11,
           VAR_1, VAR_14 * VAR_7 * 8, VAR_7 * 8);
  VAR_11 += VAR_7 * 8;


  if (VAR_14 == VAR_6->ecc_chunk_count - 1 &&
      (VAR_12 + VAR_8) % 8)
   VAR_8 += 8 - ((VAR_12 + VAR_8) % 8);

  if (VAR_2)
   FUNC_0(VAR_9, VAR_11,
           VAR_10, VAR_12, VAR_8);

  VAR_11 += VAR_8;
  VAR_12 += VAR_8;
 }

 VAR_13 = VAR_12 / 8;

 if (VAR_2 && VAR_13 < VAR_4->oobsize)
  FUNC_1(VAR_9 + VAR_4->writesize + VAR_13,
         VAR_10 + VAR_13, VAR_4->oobsize - VAR_13);
 if (VAR_5->swap_block_mark)
  FUNC_6(VAR_9[0], VAR_9[VAR_4->writesize]);

 return FUNC_4(VAR_0, VAR_3, 0, VAR_9,
     VAR_4->writesize + VAR_4->oobsize);
}
