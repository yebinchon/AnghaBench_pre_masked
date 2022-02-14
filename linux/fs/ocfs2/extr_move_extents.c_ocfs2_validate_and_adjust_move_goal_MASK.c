
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {int s_clustersize_bits; int s_clustersize; } ;
struct ocfs2_move_extents {scalar_t__ me_goal; int me_len; } ;
struct ocfs2_group_desc {int bg_bits; int bg_blkno; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_3__ {int s_blocksize_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (struct inode*,scalar_t__,int ,int ,int*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3,
            struct ocfs2_move_extents *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_group_desc *VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_0(VAR_3->i_sb);
 int VAR_10 = 1 << (VAR_9->s_clustersize_bits -
     VAR_3->i_sb->s_blocksize_bits);




 VAR_4->me_goal = FUNC_5(VAR_3->i_sb,
            VAR_4->me_goal);




 VAR_5 = FUNC_6(VAR_3, VAR_4->me_goal,
         VAR_1,
         VAR_2,
         &VAR_6, &VAR_7);
 if (VAR_5)
  goto out;

 VAR_8 = (struct ocfs2_group_desc *)VAR_7->b_data;





 if (VAR_4->me_goal == FUNC_3(VAR_8->bg_blkno))
  VAR_4->me_goal += VAR_10;




 if ((FUNC_2(VAR_8->bg_bits) - VAR_6) * VAR_9->s_clustersize <
        VAR_4->me_len) {
  VAR_5 = -VAR_0;
  goto out;
 }




 FUNC_4(0, "extents get ready to be moved to #%llu block\n",
      VAR_4->me_goal);

out:
 FUNC_1(VAR_7);

 return VAR_5;
}
