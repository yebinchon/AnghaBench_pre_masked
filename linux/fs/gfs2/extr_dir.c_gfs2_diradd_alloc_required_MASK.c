
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {int sd_max_dirres; } ;
struct gfs2_leaf {int dummy; } ;
struct gfs2_inode {int i_diskflags; } ;
struct gfs2_dirent {int dummy; } ;
struct gfs2_diradd {int nr_blocks; struct gfs2_dirent* dent; struct buffer_head* bh; scalar_t__ save_loc; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 unsigned int const FUNC_0 (int ) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 struct gfs2_sbd* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct gfs2_dirent*) ;
 int FUNC_4 (struct gfs2_dirent*) ;
 int FUNC_5 (struct buffer_head*) ;
 int VAR_1 ;
 struct gfs2_dirent* FUNC_6 (struct inode*,struct qstr const*,int ,struct buffer_head**) ;

int FUNC_7(struct inode *VAR_2, const struct qstr *VAR_3,
          struct gfs2_diradd *VAR_4)
{
 struct gfs2_inode *VAR_5 = FUNC_1(VAR_2);
 struct gfs2_sbd *VAR_6 = FUNC_2(VAR_2);
 const unsigned int VAR_7 = sizeof(struct gfs2_dinode) - sizeof(struct gfs2_leaf);
 struct gfs2_dirent *VAR_8;
 struct buffer_head *VAR_9;

 VAR_4->nr_blocks = 0;
 VAR_4->bh = ((void*)0);
 VAR_4->dent = ((void*)0);

 VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_1, &VAR_9);
 if (!VAR_8) {
  VAR_4->nr_blocks = VAR_6->sd_max_dirres;
  if (!(VAR_5->i_diskflags & VAR_0) &&
      (FUNC_0(VAR_3->len) < VAR_7))
   VAR_4->nr_blocks = 1;
  return 0;
 }
 if (FUNC_3(VAR_8))
  return FUNC_4(VAR_8);

 if (VAR_4->save_loc) {
  VAR_4->bh = VAR_9;
  VAR_4->dent = VAR_8;
 } else {
  FUNC_5(VAR_9);
 }
 return 0;
}
