
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
struct qstr {int dummy; } ;
struct gfs2_leaf {int lf_sec; int lf_nsec; int lf_entries; } ;
struct TYPE_5__ {struct timespec64 i_ctime; struct timespec64 i_mtime; } ;
struct gfs2_inode {int i_diskflags; TYPE_1__ i_inode; int i_entries; } ;
struct gfs2_dirent {int de_rec_len; } ;
struct dentry {struct qstr d_name; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gfs2_dirent*) ;
 int FUNC_1 (struct gfs2_dirent*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct timespec64 FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct dentry const*) ;
 int FUNC_9 (struct gfs2_inode*,struct buffer_head*,struct gfs2_dirent*,struct gfs2_dirent*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 scalar_t__ FUNC_12 (struct gfs2_dirent*,struct qstr const*,int *) ;
 int VAR_2 ;
 struct gfs2_dirent* FUNC_13 (TYPE_1__*,struct qstr const*,int ,struct buffer_head**) ;
 int FUNC_14 (TYPE_1__*) ;

int FUNC_15(struct gfs2_inode *VAR_3, const struct dentry *VAR_4)
{
 const struct qstr *VAR_5 = &VAR_4->d_name;
 struct gfs2_dirent *VAR_6, *VAR_7 = ((void*)0);
 struct buffer_head *VAR_8;
 struct timespec64 VAR_9 = FUNC_7(&VAR_3->i_inode);



 VAR_6 = FUNC_13(&VAR_3->i_inode, VAR_5, VAR_2, &VAR_8);
 if (!VAR_6) {
  FUNC_11(VAR_3);
  return -VAR_0;
 }
 if (FUNC_0(VAR_6)) {
  FUNC_11(VAR_3);
  return FUNC_1(VAR_6);
 }

 if (FUNC_12(VAR_6, VAR_5, ((void*)0)) == 0) {
  VAR_7 = VAR_6;
  VAR_6 = (struct gfs2_dirent *)((char *)VAR_6 + FUNC_2(VAR_7->de_rec_len));
 }

 FUNC_9(VAR_3, VAR_8, VAR_7, VAR_6);
 if (VAR_3->i_diskflags & VAR_1) {
  struct gfs2_leaf *VAR_10 = (struct gfs2_leaf *)VAR_8->b_data;
  u16 VAR_11 = FUNC_2(VAR_10->lf_entries);
  if (!VAR_11)
   FUNC_11(VAR_3);
  VAR_10->lf_entries = FUNC_4(--VAR_11);
  VAR_10->lf_nsec = FUNC_5(VAR_9.tv_nsec);
  VAR_10->lf_sec = FUNC_6(VAR_9.tv_sec);
 }
 FUNC_3(VAR_8);

 if (!VAR_3->i_entries)
  FUNC_11(VAR_3);
 VAR_3->i_entries--;
 VAR_3->i_inode.i_mtime = VAR_3->i_inode.i_ctime = VAR_9;
 if (FUNC_8(VAR_4))
  FUNC_10(&VAR_3->i_inode);
 FUNC_14(&VAR_3->i_inode);

 return 0;
}
