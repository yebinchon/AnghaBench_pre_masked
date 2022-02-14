
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_truncate_log {int tl_used; } ;
struct ocfs2_super {struct ocfs2_journal* journal; struct buffer_head* osb_tl_bh; struct inode* osb_tl_inode; } ;
struct ocfs2_journal {int j_journal; } ;
struct TYPE_3__ {struct ocfs2_truncate_log i_dealloc; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (struct ocfs2_dinode*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int) ;
 struct inode* FUNC_14 (struct ocfs2_super*,int ,int ) ;
 int FUNC_15 (struct inode*,struct buffer_head**,int) ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (struct ocfs2_super*,struct inode*,struct buffer_head*) ;
 int FUNC_18 (unsigned long long,unsigned int) ;

int FUNC_19(struct ocfs2_super *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 struct inode *VAR_7 = VAR_4->osb_tl_inode;
 struct inode *VAR_8 = ((void*)0);
 struct buffer_head *VAR_9 = VAR_4->osb_tl_bh;
 struct buffer_head *VAR_10 = ((void*)0);
 struct ocfs2_dinode *VAR_11;
 struct ocfs2_truncate_log *VAR_12;
 struct ocfs2_journal *VAR_13 = VAR_4->journal;

 FUNC_0(FUNC_5(VAR_7));

 VAR_11 = (struct ocfs2_dinode *) VAR_9->b_data;




 FUNC_0(!FUNC_2(VAR_11));

 VAR_12 = &VAR_11->id2.i_dealloc;
 VAR_6 = FUNC_11(VAR_12->tl_used);
 FUNC_18(
  (unsigned long long)FUNC_1(VAR_7)->ip_blkno,
  VAR_6);
 if (!VAR_6) {
  VAR_5 = 0;
  goto out;
 }







 FUNC_9(VAR_13->j_journal);
 VAR_5 = FUNC_8(VAR_13->j_journal);
 FUNC_10(VAR_13->j_journal);
 if (VAR_5 < 0) {
  FUNC_13(VAR_5);
  goto out;
 }

 VAR_8 = FUNC_14(VAR_4,
             VAR_1,
             VAR_3);
 if (!VAR_8) {
  VAR_5 = -VAR_0;
  FUNC_12(VAR_2, "Could not get bitmap inode!\n");
  goto out;
 }

 FUNC_4(VAR_8);

 VAR_5 = FUNC_15(VAR_8, &VAR_10, 1);
 if (VAR_5 < 0) {
  FUNC_13(VAR_5);
  goto out_mutex;
 }

 VAR_5 = FUNC_17(VAR_4, VAR_8,
            VAR_10);
 if (VAR_5 < 0)
  FUNC_13(VAR_5);

 FUNC_3(VAR_10);
 FUNC_16(VAR_8, 1);

out_mutex:
 FUNC_6(VAR_8);
 FUNC_7(VAR_8);

out:
 return VAR_5;
}
