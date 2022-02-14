
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ocfs2_block_check {int bc_ecc; int bc_crc32e; } ;
struct buffer_head {int b_size; int b_data; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (struct ocfs2_block_check*,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int,int) ;

void FUNC_6(struct buffer_head **VAR_1, int VAR_2,
       struct ocfs2_block_check *VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_0(VAR_2 < 0);

 if (!VAR_2)
  return;

 FUNC_4(VAR_3, 0, sizeof(struct ocfs2_block_check));

 for (VAR_4 = 0, VAR_5 = ~0, VAR_6 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_3(VAR_5, VAR_1[VAR_4]->b_data, VAR_1[VAR_4]->b_size);





  VAR_6 = (u16)FUNC_5(VAR_6, VAR_1[VAR_4]->b_data,
      VAR_1[VAR_4]->b_size * 8,
      VAR_1[VAR_4]->b_size * 8 * VAR_4);
 }





 FUNC_0(VAR_6 > VAR_0);

 VAR_3->bc_crc32e = FUNC_2(VAR_5);
 VAR_3->bc_ecc = FUNC_1((u16)VAR_6);
}
