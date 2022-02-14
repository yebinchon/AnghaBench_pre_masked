
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ocfs2_new_group_input {int chain; int clusters; int frees; } ;
struct ocfs2_group_desc {int bg_bits; int bg_blkno; int bg_free_bits_count; int bg_chain; } ;
struct TYPE_3__ {int cl_bpc; } ;
struct TYPE_4__ {TYPE_1__ i_chain; } ;
struct ocfs2_dinode {TYPE_2__ id2; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long long,int,int) ;
 int FUNC_3 (int ,struct ocfs2_dinode*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2,
     struct ocfs2_dinode *VAR_3,
     struct ocfs2_new_group_input *VAR_4,
     struct buffer_head *VAR_5)
{
 int VAR_6;
 struct ocfs2_group_desc *VAR_7 =
  (struct ocfs2_group_desc *)VAR_5->b_data;
 u16 VAR_8 = FUNC_0(VAR_3->id2.i_chain.cl_bpc);

 VAR_6 = FUNC_3(VAR_2->i_sb, VAR_3, VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = -VAR_0;
 if (FUNC_0(VAR_7->bg_chain) != VAR_4->chain)
  FUNC_2(VAR_1, "Group descriptor # %llu has bad chain %u "
       "while input has %u set.\n",
       (unsigned long long)FUNC_1(VAR_7->bg_blkno),
       FUNC_0(VAR_7->bg_chain), VAR_4->chain);
 else if (FUNC_0(VAR_7->bg_bits) != VAR_4->clusters * VAR_8)
  FUNC_2(VAR_1, "Group descriptor # %llu has bit count %u but "
       "input has %u clusters set\n",
       (unsigned long long)FUNC_1(VAR_7->bg_blkno),
       FUNC_0(VAR_7->bg_bits), VAR_4->clusters);
 else if (FUNC_0(VAR_7->bg_free_bits_count) != VAR_4->frees * VAR_8)
  FUNC_2(VAR_1, "Group descriptor # %llu has free bit count %u "
       "but it should have %u set\n",
       (unsigned long long)FUNC_1(VAR_7->bg_blkno),
       FUNC_0(VAR_7->bg_bits),
       VAR_4->frees * VAR_8);
 else
  VAR_6 = 0;

out:
 return VAR_6;
}
