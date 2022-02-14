
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {scalar_t__ cache; } ;
struct v9fs_inode {int v_mutex; void* writeback_fid; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct p9_fid* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct p9_fid*) ;
 int VAR_6 ;
 struct v9fs_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct p9_fid*) ;
 int FUNC_8 (struct p9_fid*,int) ;
 int FUNC_9 (int ,char*,struct inode*,struct file*) ;
 int FUNC_10 (struct inode*,struct file*) ;
 struct p9_fid* FUNC_11 (int ) ;
 struct v9fs_session_info* FUNC_12 (struct inode*) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (struct v9fs_session_info*) ;
 int FUNC_15 (struct v9fs_session_info*) ;
 int FUNC_16 (int,int ) ;
 struct p9_fid* FUNC_17 (int ) ;

int FUNC_18(struct inode *VAR_7, struct file *VAR_8)
{
 int VAR_9;
 struct v9fs_inode *VAR_10;
 struct v9fs_session_info *VAR_11;
 struct p9_fid *VAR_12;
 int VAR_13;

 FUNC_9(VAR_5, "inode: %p file: %p\n", VAR_7, VAR_8);
 VAR_10 = FUNC_2(VAR_7);
 VAR_11 = FUNC_12(VAR_7);
 if (FUNC_14(VAR_11))
  VAR_13 = FUNC_13(VAR_8->f_flags);
 else
  VAR_13 = FUNC_16(VAR_8->f_flags,
     FUNC_15(VAR_11));
 VAR_12 = VAR_8->private_data;
 if (!VAR_12) {
  VAR_12 = FUNC_11(FUNC_3(VAR_8));
  if (FUNC_0(VAR_12))
   return FUNC_1(VAR_12);

  VAR_9 = FUNC_8(VAR_12, VAR_13);
  if (VAR_9 < 0) {
   FUNC_7(VAR_12);
   return VAR_9;
  }
  if ((VAR_8->f_flags & VAR_3) &&
   (!FUNC_15(VAR_11) && !FUNC_14(VAR_11)))
   FUNC_4(VAR_8, 0, VAR_6);
 }

 VAR_8->private_data = VAR_12;
 FUNC_5(&VAR_10->v_mutex);
 if ((VAR_11->cache == VAR_1 || VAR_11->cache == VAR_0) &&
     !VAR_10->writeback_fid &&
     ((VAR_8->f_flags & VAR_2) != VAR_4)) {







  VAR_12 = FUNC_17(FUNC_3(VAR_8));
  if (FUNC_0(VAR_12)) {
   VAR_9 = FUNC_1(VAR_12);
   FUNC_6(&VAR_10->v_mutex);
   goto out_error;
  }
  VAR_10->writeback_fid = (void *) VAR_12;
 }
 FUNC_6(&VAR_10->v_mutex);
 if (VAR_11->cache == VAR_1 || VAR_11->cache == VAR_0)
  FUNC_10(VAR_7, VAR_8);
 return 0;
out_error:
 FUNC_7(VAR_8->private_data);
 VAR_8->private_data = ((void*)0);
 return VAR_9;
}
