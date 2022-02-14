
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_statfs_change_host {int sc_free; int sc_dinodes; int sc_total; } ;
struct TYPE_2__ {int ar_statfs_percent; } ;
struct gfs2_sbd {int sd_statfs_spin; TYPE_1__ sd_args; struct gfs2_statfs_change_host sd_statfs_master; struct gfs2_statfs_change_host sd_statfs_local; int sd_sc_inode; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int s64 ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_3 (struct gfs2_statfs_change_host*,scalar_t__) ;
 int FUNC_4 (int ,struct buffer_head*) ;
 int FUNC_5 (struct gfs2_sbd*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct gfs2_sbd *VAR_0, s64 VAR_1, s64 VAR_2,
   s64 VAR_3)
{
 struct gfs2_inode *VAR_4 = FUNC_0(VAR_0->sd_sc_inode);
 struct gfs2_statfs_change_host *VAR_5 = &VAR_0->sd_statfs_local;
 struct gfs2_statfs_change_host *VAR_6 = &VAR_0->sd_statfs_master;
 struct buffer_head *VAR_7;
 s64 VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_4, &VAR_7);
 if (VAR_11)
  return;

 FUNC_4(VAR_4->i_gl, VAR_7);

 FUNC_6(&VAR_0->sd_statfs_spin);
 VAR_5->sc_total += VAR_1;
 VAR_5->sc_free += VAR_2;
 VAR_5->sc_dinodes += VAR_3;
 FUNC_3(VAR_5, VAR_7->b_data + sizeof(struct gfs2_dinode));
 if (VAR_0->sd_args.ar_statfs_percent) {
  VAR_8 = 100 * VAR_5->sc_free;
  VAR_9 = VAR_6->sc_free * VAR_0->sd_args.ar_statfs_percent;
  if (VAR_8 >= VAR_9 || VAR_8 <= -VAR_9)
   VAR_10 = 1;
 }
 FUNC_7(&VAR_0->sd_statfs_spin);

 FUNC_1(VAR_7);
 if (VAR_10)
  FUNC_5(VAR_0);
}
