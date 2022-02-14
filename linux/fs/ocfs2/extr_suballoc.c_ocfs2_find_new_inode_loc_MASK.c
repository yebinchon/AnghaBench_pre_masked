
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_suballoc_result {int sr_blkno; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_given; int ac_bits_wanted; scalar_t__ ac_which; int ac_find_loc_only; struct ocfs2_suballoc_result* ac_find_loc_priv; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ocfs2_suballoc_result*) ;
 struct ocfs2_suballoc_result* FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_alloc_context*,int *,int,int,struct ocfs2_suballoc_result*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct inode*,struct buffer_head*,struct ocfs2_alloc_context*) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,struct inode*,int ) ;

int FUNC_12(struct inode *VAR_4,
        struct buffer_head *VAR_5,
        struct ocfs2_alloc_context *VAR_6,
        u64 *VAR_7)
{
 int VAR_8;
 handle_t *VAR_9 = ((void*)0);
 struct ocfs2_suballoc_result *VAR_10;

 FUNC_0(!VAR_6);
 FUNC_0(VAR_6->ac_bits_given != 0);
 FUNC_0(VAR_6->ac_bits_wanted != 1);
 FUNC_0(VAR_6->ac_which != VAR_2);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0)) {
  VAR_8 = -VAR_0;
  FUNC_6(VAR_8);
  goto out;
 }

 FUNC_9(VAR_4, VAR_5, VAR_6);





 VAR_9 = FUNC_10(FUNC_2(VAR_4->i_sb), VAR_3);
 if (FUNC_1(VAR_9)) {
  VAR_8 = FUNC_3(VAR_9);
  VAR_9 = ((void*)0);
  FUNC_6(VAR_8);
  goto out;
 }






 VAR_6->ac_find_loc_only = 1;

 VAR_8 = FUNC_7(VAR_6, VAR_9, 1, 1, VAR_10);
 if (VAR_8 < 0) {
  FUNC_6(VAR_8);
  goto out;
 }

 VAR_6->ac_find_loc_priv = VAR_10;
 *VAR_7 = VAR_10->sr_blkno;
 FUNC_11(VAR_9, VAR_4, 0);
out:
 if (VAR_9)
  FUNC_8(FUNC_2(VAR_4->i_sb), VAR_9);

 if (VAR_8)
  FUNC_4(VAR_10);

 return VAR_8;
}
