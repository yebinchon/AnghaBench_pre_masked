
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct v9fs_session_info {scalar_t__ cache; } ;
struct v9fs_inode {int v_mutex; void* writeback_fid; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct p9_fid* private_data; } ;
typedef struct p9_fid dentry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct p9_fid*) ;
 struct v9fs_inode* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct p9_fid*) ;
 scalar_t__ FUNC_5 (struct p9_fid*) ;
 int FUNC_6 (struct p9_fid*) ;
 int FUNC_7 (struct file*,struct p9_fid*) ;
 int FUNC_8 (struct file*,struct p9_fid*,int ) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct p9_fid*) ;
 int FUNC_12 (struct v9fs_session_info*,int ) ;
 int FUNC_13 (int ,struct file*) ;
 struct p9_fid* FUNC_14 (struct v9fs_session_info*,struct inode*,struct p9_fid*,int *,int ,int ) ;
 struct v9fs_session_info* FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct v9fs_session_info*) ;
 int FUNC_18 (unsigned int,int ) ;
 struct p9_fid* FUNC_19 (struct inode*,struct p9_fid*,int ) ;
 struct p9_fid* FUNC_20 (struct p9_fid*) ;

__attribute__((used)) static int
FUNC_21(struct inode *VAR_7, struct dentry *VAR_8,
       struct file *VAR_9, unsigned VAR_10, umode_t VAR_11)
{
 int VAR_12;
 u32 VAR_13;
 struct v9fs_inode *VAR_14;
 struct v9fs_session_info *VAR_15;
 struct p9_fid *VAR_16, *VAR_17;
 struct dentry *VAR_18 = ((void*)0);

 if (FUNC_3(VAR_8)) {
  VAR_18 = FUNC_19(VAR_7, VAR_8, 0);
  if (FUNC_0(VAR_18))
   return FUNC_1(VAR_18);

  if (VAR_18)
   VAR_8 = VAR_18;
 }


 if (!(VAR_10 & VAR_4) || FUNC_5(VAR_8))
  return FUNC_7(VAR_9, VAR_18);

 VAR_12 = 0;

 VAR_15 = FUNC_15(VAR_7);
 VAR_13 = FUNC_12(VAR_15, VAR_11);
 VAR_16 = FUNC_14(VAR_15, VAR_7, VAR_8, ((void*)0), VAR_13,
    FUNC_18(VAR_10,
      FUNC_17(VAR_15)));
 if (FUNC_0(VAR_16)) {
  VAR_12 = FUNC_1(VAR_16);
  VAR_16 = ((void*)0);
  goto error;
 }

 FUNC_16(VAR_7);
 VAR_14 = FUNC_2(FUNC_4(VAR_8));
 FUNC_9(&VAR_14->v_mutex);
 if ((VAR_15->cache == VAR_1 || VAR_15->cache == VAR_0) &&
     !VAR_14->writeback_fid &&
     ((VAR_10 & VAR_3) != VAR_5)) {







  VAR_17 = FUNC_20(VAR_8);
  if (FUNC_0(VAR_17)) {
   VAR_12 = FUNC_1(VAR_17);
   FUNC_10(&VAR_14->v_mutex);
   goto error;
  }
  VAR_14->writeback_fid = (void *) VAR_17;
 }
 FUNC_10(&VAR_14->v_mutex);
 VAR_12 = FUNC_8(VAR_9, VAR_8, VAR_6);
 if (VAR_12)
  goto error;

 VAR_9->private_data = VAR_16;
 if (VAR_15->cache == VAR_1 || VAR_15->cache == VAR_0)
  FUNC_13(FUNC_4(VAR_8), VAR_9);

 VAR_9->f_mode |= VAR_2;
out:
 FUNC_6(VAR_18);
 return VAR_12;

error:
 if (VAR_16)
  FUNC_11(VAR_16);
 goto out;
}
