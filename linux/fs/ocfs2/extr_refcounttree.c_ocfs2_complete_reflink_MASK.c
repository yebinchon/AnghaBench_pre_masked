
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_dinode {int i_mtime_nsec; int i_mtime; int i_ctime_nsec; int i_ctime; int i_mode; int i_gid; int i_uid; int i_attr; int i_dyn_features; int i_size; int i_clusters; int i_xattr_inline_size; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_sb; int i_mtime; TYPE_1__ i_ctime; int i_mode; int i_gid; int i_uid; int i_blocks; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_4__ {int ip_lock; int ip_dyn_features; int ip_attr; int ip_clusters; } ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int * FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_2,
      struct buffer_head *VAR_3,
      struct inode *VAR_4,
      struct buffer_head *VAR_5,
      bool VAR_6)
{
 int VAR_7;
 handle_t *VAR_8;
 struct ocfs2_dinode *VAR_9 = (struct ocfs2_dinode *)VAR_3->b_data;
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_5->b_data;
 loff_t VAR_11 = FUNC_8(VAR_2);

 VAR_8 = FUNC_14(FUNC_3(VAR_4->i_sb),
       VAR_0);
 if (FUNC_1(VAR_8)) {
  VAR_7 = FUNC_4(VAR_8);
  FUNC_10(VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_12(VAR_8, FUNC_0(VAR_4), VAR_5,
          VAR_1);
 if (VAR_7) {
  FUNC_10(VAR_7);
  goto out_commit;
 }

 FUNC_15(&FUNC_2(VAR_4)->ip_lock);
 FUNC_2(VAR_4)->ip_clusters = FUNC_2(VAR_2)->ip_clusters;
 FUNC_2(VAR_4)->ip_attr = FUNC_2(VAR_2)->ip_attr;
 FUNC_2(VAR_4)->ip_dyn_features = FUNC_2(VAR_2)->ip_dyn_features;
 FUNC_16(&FUNC_2(VAR_4)->ip_lock);
 FUNC_9(VAR_4, VAR_11);
 VAR_4->i_blocks = VAR_2->i_blocks;

 VAR_10->i_xattr_inline_size = VAR_9->i_xattr_inline_size;
 VAR_10->i_clusters = VAR_9->i_clusters;
 VAR_10->i_size = VAR_9->i_size;
 VAR_10->i_dyn_features = VAR_9->i_dyn_features;
 VAR_10->i_attr = VAR_9->i_attr;

 if (VAR_6) {
  VAR_4->i_uid = VAR_2->i_uid;
  VAR_4->i_gid = VAR_2->i_gid;
  VAR_4->i_mode = VAR_2->i_mode;
  VAR_10->i_uid = VAR_9->i_uid;
  VAR_10->i_gid = VAR_9->i_gid;
  VAR_10->i_mode = VAR_9->i_mode;






  VAR_4->i_ctime = FUNC_7(VAR_4);

  VAR_10->i_ctime = FUNC_6(VAR_4->i_ctime.tv_sec);
  VAR_10->i_ctime_nsec = FUNC_5(VAR_4->i_ctime.tv_nsec);

  VAR_4->i_mtime = VAR_2->i_mtime;
  VAR_10->i_mtime = VAR_9->i_mtime;
  VAR_10->i_mtime_nsec = VAR_9->i_mtime_nsec;
 }

 FUNC_13(VAR_8, VAR_5);

out_commit:
 FUNC_11(FUNC_3(VAR_4->i_sb), VAR_8);
 return VAR_7;
}
