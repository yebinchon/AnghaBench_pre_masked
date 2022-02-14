
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_dquot {int dq_local_phys_blk; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {size_t type; } ;
struct dquot {TYPE_1__ dq_id; struct super_block* dq_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {struct inode** files; } ;


 struct ocfs2_dquot* FUNC_0 (struct dquot*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct buffer_head*,int ,struct ocfs2_dquot*) ;
 int FUNC_4 (struct inode*,int ,struct buffer_head**) ;
 int VAR_0 ;
 TYPE_2__* FUNC_5 (struct super_block*) ;

int FUNC_6(struct dquot *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->dq_sb;
 struct ocfs2_dquot *VAR_3 = FUNC_0(VAR_1);
 struct buffer_head *VAR_4;
 struct inode *VAR_5 = FUNC_5(VAR_2)->files[VAR_1->dq_id.type];
 int VAR_6;

 VAR_6 = FUNC_4(VAR_5, VAR_3->dq_local_phys_blk,
          &VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_6);
  goto out;
 }
 VAR_6 = FUNC_3(VAR_5, VAR_4, VAR_0, VAR_3);
 if (VAR_6 < 0) {
  FUNC_2(VAR_6);
  goto out;
 }
out:
 FUNC_1(VAR_4);
 return VAR_6;
}
