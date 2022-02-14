
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct gfs2_log_header_host {int lh_flags; } ;
struct gfs2_jdesc {int jd_jid; int jd_inode; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gfs2_sbd*,char*,...) ;
 int FUNC_2 (struct gfs2_jdesc*,struct gfs2_log_header_host*,int) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_jdesc*) ;

__attribute__((used)) static int FUNC_6(struct gfs2_sbd *VAR_6, struct gfs2_jdesc *VAR_7)
{
 int VAR_8;
 struct gfs2_holder VAR_9;
 struct gfs2_log_header_host VAR_10;
 struct gfs2_inode *VAR_11;

 VAR_11 = FUNC_0(VAR_7->jd_inode);
 VAR_8 = FUNC_4(VAR_11->i_gl, VAR_5, VAR_4 |
       VAR_2 | VAR_3, &VAR_9);
 if (VAR_8) {
  FUNC_1(VAR_6, "Error locking journal for spectator mount.\n");
  return -VAR_0;
 }
 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_6, "Error checking journal for spectator mount.\n");
  goto out_unlock;
 }
 VAR_8 = FUNC_2(VAR_7, &VAR_10, 0);
 if (VAR_8) {
  FUNC_1(VAR_6, "Error parsing journal for spectator mount.\n");
  goto out_unlock;
 }
 if (!(VAR_10.lh_flags & VAR_1)) {
  VAR_8 = -VAR_0;
  FUNC_1(VAR_6, "jid=%u: Journal is dirty, so the first mounter "
         "must not be a spectator.\n", VAR_7->jd_jid);
 }

out_unlock:
 FUNC_3(&VAR_9);
 return VAR_8;
}
