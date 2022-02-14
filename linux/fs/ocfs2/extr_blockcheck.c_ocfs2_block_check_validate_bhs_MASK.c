
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ocfs2_blockcheck_stats {int dummy; } ;
struct ocfs2_block_check {int bc_ecc; int bc_crc32e; } ;
struct buffer_head {int b_size; int b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ocfs2_block_check*,int ,int) ;
 int FUNC_7 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_8 (struct ocfs2_blockcheck_stats*) ;
 int FUNC_9 (struct ocfs2_blockcheck_stats*) ;
 int FUNC_10 (struct ocfs2_blockcheck_stats*) ;
 scalar_t__ FUNC_11 (int,int ,int,int) ;
 int FUNC_12 (int ,int,int,int) ;

int FUNC_13(struct buffer_head **VAR_2, int VAR_3,
       struct ocfs2_block_check *VAR_4,
       struct ocfs2_blockcheck_stats *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 u32 VAR_8;
 u16 VAR_9;
 u32 VAR_10, VAR_11, VAR_12;

 FUNC_0(VAR_3 < 0);

 if (!VAR_3)
  return 0;

 FUNC_8(VAR_5);

 VAR_8 = FUNC_5(VAR_4->bc_crc32e);
 VAR_9 = FUNC_4(VAR_4->bc_ecc);

 FUNC_6(VAR_4, 0, sizeof(struct ocfs2_block_check));


 for (VAR_6 = 0, VAR_10 = ~0; VAR_6 < VAR_3; VAR_6++)
  VAR_10 = FUNC_3(VAR_10, VAR_2[VAR_6]->b_data, VAR_2[VAR_6]->b_size);
 if (VAR_10 == VAR_8)
  goto out;

 FUNC_9(VAR_5);
 FUNC_7(VAR_1,
      "CRC32 failed: stored: %u, computed %u.  Applying ECC.\n",
      (unsigned int)VAR_8, (unsigned int)VAR_10);


 for (VAR_6 = 0, VAR_11 = 0; VAR_6 < VAR_3; VAR_6++) {





  VAR_11 = (u16)FUNC_11(VAR_11, VAR_2[VAR_6]->b_data,
      VAR_2[VAR_6]->b_size * 8,
      VAR_2[VAR_6]->b_size * 8 * VAR_6);
 }
 VAR_12 = VAR_11 ^ VAR_9;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {




  FUNC_12(VAR_2[VAR_6]->b_data, VAR_2[VAR_6]->b_size * 8,
      VAR_2[VAR_6]->b_size * 8 * VAR_6, VAR_12);
 }


 for (VAR_6 = 0, VAR_10 = ~0; VAR_6 < VAR_3; VAR_6++)
  VAR_10 = FUNC_3(VAR_10, VAR_2[VAR_6]->b_data, VAR_2[VAR_6]->b_size);
 if (VAR_10 == VAR_8) {
  FUNC_10(VAR_5);
  goto out;
 }

 FUNC_7(VAR_1, "Fixed CRC32 failed: stored: %u, computed %u\n",
      (unsigned int)VAR_8, (unsigned int)VAR_10);

 VAR_7 = -VAR_0;

out:
 VAR_4->bc_crc32e = FUNC_2(VAR_8);
 VAR_4->bc_ecc = FUNC_1(VAR_9);

 return VAR_7;
}
