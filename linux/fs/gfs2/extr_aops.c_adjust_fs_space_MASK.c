
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct gfs2_statfs_change_host {scalar_t__ sc_total; } ;
struct gfs2_sbd {scalar_t__ sd_rindex_uptodate; int sd_statfs_spin; struct gfs2_statfs_change_host sd_statfs_local; struct gfs2_statfs_change_host sd_statfs_master; int sd_sc_inode; int sd_statfs_inode; } ;
struct gfs2_inode {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct gfs2_sbd*,char*,unsigned long long) ;
 scalar_t__ FUNC_4 (struct gfs2_inode*,struct buffer_head**) ;
 scalar_t__ FUNC_5 (struct gfs2_sbd*) ;
 int FUNC_6 (struct gfs2_sbd*,scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (struct gfs2_statfs_change_host*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct gfs2_sbd*,int,int ) ;
 int FUNC_9 (struct gfs2_sbd*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct gfs2_sbd*,struct buffer_head*,struct buffer_head*) ;

void FUNC_13(struct inode *VAR_1)
{
 struct gfs2_sbd *VAR_2 = FUNC_1(VAR_1);
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_2->sd_statfs_inode);
 struct gfs2_inode *VAR_4 = FUNC_0(VAR_2->sd_sc_inode);
 struct gfs2_statfs_change_host *VAR_5 = &VAR_2->sd_statfs_master;
 struct gfs2_statfs_change_host *VAR_6 = &VAR_2->sd_statfs_local;
 struct buffer_head *VAR_7, *VAR_8;
 u64 VAR_9, VAR_10;

 if (FUNC_8(VAR_2, 2 * VAR_0, 0) != 0)
  return;


 VAR_9 = FUNC_5(VAR_2);
 if (FUNC_4(VAR_3, &VAR_7) != 0)
  goto out;

 FUNC_10(&VAR_2->sd_statfs_spin);
 FUNC_7(VAR_5, VAR_7->b_data +
         sizeof(struct gfs2_dinode));
 if (VAR_9 > (VAR_5->sc_total + VAR_6->sc_total))
  VAR_10 = VAR_9 - (VAR_5->sc_total + VAR_6->sc_total);
 else
  VAR_10 = 0;
 FUNC_11(&VAR_2->sd_statfs_spin);
 FUNC_3(VAR_2, "File system extended by %llu blocks.\n",
  (unsigned long long)VAR_10);
 FUNC_6(VAR_2, VAR_10, VAR_10, 0);

 if (FUNC_4(VAR_4, &VAR_8) != 0)
  goto out2;
 FUNC_12(VAR_2, VAR_7, VAR_8);
 FUNC_2(VAR_8);
out2:
 FUNC_2(VAR_7);
out:
 VAR_2->sd_rindex_uptodate = 0;
 FUNC_9(VAR_2);
}
