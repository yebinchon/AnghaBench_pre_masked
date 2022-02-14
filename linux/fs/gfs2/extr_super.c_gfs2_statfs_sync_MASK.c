
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct gfs2_statfs_change_host {int sc_dinodes; int sc_free; int sc_total; } ;
struct gfs2_sbd {scalar_t__ sd_statfs_force_sync; int sd_statfs_spin; struct gfs2_statfs_change_host sd_statfs_local; struct gfs2_statfs_change_host sd_statfs_master; int sd_sc_inode; int sd_statfs_inode; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_5 (struct gfs2_statfs_change_host*,scalar_t__) ;
 int FUNC_6 (struct gfs2_sbd*,int,int ) ;
 int FUNC_7 (struct gfs2_sbd*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct gfs2_sbd*,struct buffer_head*,struct buffer_head*) ;

int FUNC_13(struct super_block *VAR_3, int VAR_4)
{
 struct gfs2_sbd *VAR_5 = VAR_3->s_fs_info;
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_5->sd_statfs_inode);
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_5->sd_sc_inode);
 struct gfs2_statfs_change_host *VAR_8 = &VAR_5->sd_statfs_master;
 struct gfs2_statfs_change_host *VAR_9 = &VAR_5->sd_statfs_local;
 struct gfs2_holder VAR_10;
 struct buffer_head *VAR_11, *VAR_12;
 int VAR_13;

 FUNC_9(VAR_3);
 VAR_13 = FUNC_3(VAR_6->i_gl, VAR_1, VAR_0,
       &VAR_10);
 if (VAR_13)
  goto out;

 VAR_13 = FUNC_4(VAR_6, &VAR_11);
 if (VAR_13)
  goto out_unlock;

 FUNC_10(&VAR_5->sd_statfs_spin);
 FUNC_5(VAR_8, VAR_11->b_data +
         sizeof(struct gfs2_dinode));
 if (!VAR_9->sc_total && !VAR_9->sc_free && !VAR_9->sc_dinodes) {
  FUNC_11(&VAR_5->sd_statfs_spin);
  goto out_bh;
 }
 FUNC_11(&VAR_5->sd_statfs_spin);

 VAR_13 = FUNC_4(VAR_7, &VAR_12);
 if (VAR_13)
  goto out_bh;

 VAR_13 = FUNC_6(VAR_5, 2 * VAR_2, 0);
 if (VAR_13)
  goto out_bh2;

 FUNC_12(VAR_5, VAR_11, VAR_12);
 VAR_5->sd_statfs_force_sync = 0;

 FUNC_7(VAR_5);

out_bh2:
 FUNC_1(VAR_12);
out_bh:
 FUNC_1(VAR_11);
out_unlock:
 FUNC_2(&VAR_10);
out:
 FUNC_8(VAR_3);
 return VAR_13;
}
