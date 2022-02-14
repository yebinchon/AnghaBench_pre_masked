
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_diskflags; scalar_t__ i_entries; scalar_t__ i_no_addr; } ;
struct gfs2_dirent {int dummy; } ;
struct file_ra_state {int dummy; } ;
struct dirent_gather {scalar_t__ offset; struct gfs2_dirent const** pdent; } ;
struct dir_context {int dummy; } ;
struct buffer_head {int b_size; int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct gfs2_dirent*) ;
 int FUNC_3 (struct gfs2_dirent*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*,struct dir_context*,struct file_ra_state*) ;
 int FUNC_6 (struct gfs2_inode*,struct dir_context*,struct gfs2_dirent**,scalar_t__,int ,int*) ;
 int FUNC_7 (struct gfs2_sbd*,char*,unsigned long long,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct gfs2_inode*) ;
 int VAR_4 ;
 struct gfs2_dirent* FUNC_9 (struct inode*,int ,int ,int ,int *,struct dirent_gather*) ;
 int FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_12 (struct gfs2_sbd*,struct buffer_head*,int ,struct gfs2_dirent**,scalar_t__) ;
 int FUNC_13 (struct gfs2_dirent**) ;
 struct gfs2_dirent** FUNC_14 (int,int,int ) ;

int FUNC_15(struct inode *VAR_5, struct dir_context *VAR_6,
    struct file_ra_state *VAR_7)
{
 struct gfs2_inode *VAR_8 = FUNC_0(VAR_5);
 struct gfs2_sbd *VAR_9 = FUNC_1(VAR_5);
 struct dirent_gather VAR_10;
 struct gfs2_dirent **VAR_11, *VAR_12;
 struct buffer_head *VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 if (!VAR_8->i_entries)
  return 0;

 if (VAR_8->i_diskflags & VAR_3)
  return FUNC_5(VAR_5, VAR_6, VAR_7);

 if (!FUNC_10(VAR_8)) {
  FUNC_8(VAR_8);
  return -VAR_0;
 }

 VAR_15 = FUNC_11(VAR_8, &VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = -VAR_1;

 VAR_11 = FUNC_14(96, sizeof(struct gfs2_dirent *), VAR_2);
 if (VAR_11) {
  VAR_10.pdent = (const struct gfs2_dirent **)VAR_11;
  VAR_10.offset = 0;
  VAR_12 = FUNC_9(VAR_5, VAR_13->b_data, VAR_13->b_size,
     VAR_4, ((void*)0), &VAR_10);
  if (FUNC_2(VAR_12)) {
   VAR_15 = FUNC_3(VAR_12);
   goto out;
  }
  if (VAR_8->i_entries != VAR_10.offset) {
   FUNC_7(VAR_9, "Number of entries corrupt in dir %llu, "
    "ip->i_entries (%u) != g.offset (%u)\n",
    (unsigned long long)VAR_8->i_no_addr,
    VAR_8->i_entries,
    VAR_10.offset);
   FUNC_8(VAR_8);
   VAR_15 = -VAR_0;
   goto out;
  }
  FUNC_12(VAR_9, VAR_13, 0, VAR_11, VAR_8->i_entries);
  VAR_15 = FUNC_6(VAR_8, VAR_6, VAR_11,
     VAR_8->i_entries, 0, &VAR_14);
out:
  FUNC_13(VAR_11);
 }

 if (VAR_15 > 0)
  VAR_15 = 0;

 FUNC_4(VAR_13);

 return VAR_15;
}
