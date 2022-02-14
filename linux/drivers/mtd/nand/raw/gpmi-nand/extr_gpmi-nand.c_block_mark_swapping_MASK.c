
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_geometry {unsigned int block_mark_bit_offset; int block_mark_byte_offset; } ;
struct gpmi_nand_data {int swap_block_mark; struct bch_geometry bch_geometry; } ;



__attribute__((used)) static void FUNC_0(struct gpmi_nand_data *VAR_0,
    void *VAR_1, void *VAR_2)
{
 struct bch_geometry *VAR_3 = &VAR_0->bch_geometry;
 unsigned char *VAR_4;
 unsigned char *VAR_5;
 unsigned int VAR_6;
 unsigned char VAR_7;
 unsigned char VAR_8;
 unsigned char VAR_9;

 if (!VAR_0->swap_block_mark)
  return;





 VAR_6 = VAR_3->block_mark_bit_offset;
 VAR_4 = VAR_1 + VAR_3->block_mark_byte_offset;
 VAR_5 = VAR_2;







 VAR_8 = (VAR_4[0] >> VAR_6) | (VAR_4[1] << (8 - VAR_6));


 VAR_9 = VAR_5[0];


 VAR_5[0] = VAR_8;

 VAR_7 = (0x1 << VAR_6) - 1;
 VAR_4[0] = (VAR_4[0] & VAR_7) | (VAR_9 << VAR_6);

 VAR_7 = ~0 << VAR_6;
 VAR_4[1] = (VAR_4[1] & VAR_7) | (VAR_9 >> (8 - VAR_6));
}
