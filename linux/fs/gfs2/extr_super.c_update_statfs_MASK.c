
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_statfs_change_host {scalar_t__ sc_dinodes; scalar_t__ sc_free; scalar_t__ sc_total; } ;
struct gfs2_statfs_change {int dummy; } ;
struct gfs2_sbd {int sd_statfs_spin; struct gfs2_statfs_change_host sd_statfs_local; struct gfs2_statfs_change_host sd_statfs_master; int sd_sc_inode; int sd_statfs_inode; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {struct gfs2_statfs_change_host* b_data; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_statfs_change_host*,struct gfs2_statfs_change_host*) ;
 int FUNC_2 (int ,struct buffer_head*) ;
 int FUNC_3 (struct gfs2_statfs_change_host*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct gfs2_sbd *VAR_0, struct buffer_head *VAR_1,
     struct buffer_head *VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_0->sd_statfs_inode);
 struct gfs2_inode *VAR_4 = FUNC_0(VAR_0->sd_sc_inode);
 struct gfs2_statfs_change_host *VAR_5 = &VAR_0->sd_statfs_master;
 struct gfs2_statfs_change_host *VAR_6 = &VAR_0->sd_statfs_local;

 FUNC_2(VAR_4->i_gl, VAR_2);
 FUNC_2(VAR_3->i_gl, VAR_1);

 FUNC_4(&VAR_0->sd_statfs_spin);
 VAR_5->sc_total += VAR_6->sc_total;
 VAR_5->sc_free += VAR_6->sc_free;
 VAR_5->sc_dinodes += VAR_6->sc_dinodes;
 FUNC_3(VAR_6, 0, sizeof(struct gfs2_statfs_change));
 FUNC_3(VAR_2->b_data + sizeof(struct gfs2_dinode),
        0, sizeof(struct gfs2_statfs_change));
 FUNC_1(VAR_5, VAR_1->b_data + sizeof(struct gfs2_dinode));
 FUNC_5(&VAR_0->sd_statfs_spin);
}
