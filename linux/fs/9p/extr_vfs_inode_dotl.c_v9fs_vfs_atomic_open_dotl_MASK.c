
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct v9fs_session_info {scalar_t__ cache; } ;
struct v9fs_inode {int v_mutex; void* writeback_fid; } ;
struct posix_acl {int dummy; } ;
struct p9_qid {int dummy; } ;
struct TYPE_2__ {unsigned char* name; } ;
struct p9_fid {int i_sb; TYPE_1__ d_name; } ;
struct inode {int i_sb; TYPE_1__ d_name; } ;
struct file {int f_mode; struct p9_fid* private_data; } ;
struct dentry {int i_sb; TYPE_1__ d_name; } ;
typedef int kgid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct p9_fid*) ;
 struct v9fs_inode* FUNC_2 (struct p9_fid*) ;
 struct p9_fid* FUNC_3 (struct p9_fid*) ;
 scalar_t__ FUNC_4 (struct p9_fid*) ;
 int FUNC_5 (struct p9_fid*,struct p9_fid*) ;
 scalar_t__ FUNC_6 (struct p9_fid*) ;
 int FUNC_7 (struct p9_fid*) ;
 int FUNC_8 (struct file*,struct p9_fid*) ;
 int FUNC_9 (struct file*,struct p9_fid*,int ) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct p9_fid*) ;
 int FUNC_13 (struct p9_fid*,unsigned char const*,int ,int ,int ,struct p9_qid*) ;
 struct p9_fid* FUNC_14 (struct p9_fid*,int,unsigned char const**,int) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct p9_fid*,int *,struct posix_acl**,struct posix_acl**) ;
 int FUNC_17 (struct p9_fid*,struct file*) ;
 int FUNC_18 (struct p9_fid*,struct p9_fid*) ;
 int FUNC_19 (struct p9_fid*) ;
 struct p9_fid* FUNC_20 (struct v9fs_session_info*,struct p9_fid*,int ) ;
 struct v9fs_session_info* FUNC_21 (struct p9_fid*) ;
 int FUNC_22 (struct p9_fid*) ;
 int FUNC_23 (unsigned int) ;
 struct p9_fid* FUNC_24 (struct p9_fid*) ;
 int FUNC_25 (struct posix_acl*,struct posix_acl*) ;
 int FUNC_26 (struct p9_fid*,struct p9_fid*,struct posix_acl*,struct posix_acl*) ;
 struct p9_fid* FUNC_27 (struct p9_fid*,struct p9_fid*,int ) ;
 struct p9_fid* FUNC_28 (struct p9_fid*) ;

__attribute__((used)) static int
FUNC_29(struct inode *VAR_8, struct dentry *VAR_9,
     struct file *VAR_10, unsigned VAR_11, umode_t VAR_12)
{
 int VAR_13 = 0;
 kgid_t VAR_14;
 umode_t VAR_15;
 const unsigned char *VAR_16 = ((void*)0);
 struct p9_qid VAR_17;
 struct inode *VAR_18;
 struct p9_fid *VAR_19 = ((void*)0);
 struct v9fs_inode *VAR_20;
 struct p9_fid *VAR_21, *VAR_22, *VAR_23;
 struct v9fs_session_info *VAR_24;
 struct posix_acl *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);
 struct dentry *VAR_27 = ((void*)0);

 if (FUNC_4(VAR_9)) {
  VAR_27 = FUNC_27(VAR_8, VAR_9, 0);
  if (FUNC_0(VAR_27))
   return FUNC_1(VAR_27);

  if (VAR_27)
   VAR_9 = VAR_27;
 }


 if (!(VAR_11 & VAR_4) || FUNC_6(VAR_9))
  return FUNC_8(VAR_10, VAR_27);

 VAR_24 = FUNC_21(VAR_8);

 VAR_16 = VAR_9->d_name.name;
 FUNC_15(VAR_6, "name:%s flags:0x%x mode:0x%hx\n",
   VAR_16, VAR_11, VAR_12);

 VAR_21 = FUNC_24(VAR_9);
 if (FUNC_0(VAR_21)) {
  VAR_13 = FUNC_1(VAR_21);
  FUNC_15(VAR_6, "fid lookup failed %d\n", VAR_13);
  goto out;
 }


 VAR_22 = FUNC_3(VAR_21);
 if (FUNC_0(VAR_22)) {
  VAR_13 = FUNC_1(VAR_22);
  FUNC_15(VAR_6, "p9_client_walk failed %d\n", VAR_13);
  goto out;
 }

 VAR_14 = FUNC_19(VAR_8);

 VAR_15 = VAR_12;

 VAR_13 = FUNC_16(VAR_8, &VAR_15, &VAR_26, &VAR_25);
 if (VAR_13) {
  FUNC_15(VAR_6, "Failed to get acl values in creat %d\n",
    VAR_13);
  goto error;
 }
 VAR_13 = FUNC_13(VAR_22, VAR_16, FUNC_23(VAR_11),
        VAR_15, VAR_14, &VAR_17);
 if (VAR_13 < 0) {
  FUNC_15(VAR_6, "p9_client_open_dotl failed in creat %d\n",
    VAR_13);
  goto error;
 }
 FUNC_22(VAR_8);


 VAR_19 = FUNC_14(VAR_21, 1, &VAR_16, 1);
 if (FUNC_0(VAR_19)) {
  VAR_13 = FUNC_1(VAR_19);
  FUNC_15(VAR_6, "p9_client_walk failed %d\n", VAR_13);
  VAR_19 = ((void*)0);
  goto error;
 }
 VAR_18 = FUNC_20(VAR_24, VAR_19, VAR_8->i_sb);
 if (FUNC_0(VAR_18)) {
  VAR_13 = FUNC_1(VAR_18);
  FUNC_15(VAR_6, "inode creation failed %d\n", VAR_13);
  goto error;
 }

 FUNC_26(VAR_18, VAR_19, VAR_26, VAR_25);

 FUNC_18(VAR_9, VAR_19);
 FUNC_5(VAR_9, VAR_18);

 VAR_20 = FUNC_2(VAR_18);
 FUNC_10(&VAR_20->v_mutex);
 if ((VAR_24->cache == VAR_1 || VAR_24->cache == VAR_0) &&
     !VAR_20->writeback_fid &&
     ((VAR_11 & VAR_3) != VAR_5)) {







  VAR_23 = FUNC_28(VAR_9);
  if (FUNC_0(VAR_23)) {
   VAR_13 = FUNC_1(VAR_23);
   FUNC_11(&VAR_20->v_mutex);
   goto err_clunk_old_fid;
  }
  VAR_20->writeback_fid = (void *) VAR_23;
 }
 FUNC_11(&VAR_20->v_mutex);

 VAR_13 = FUNC_9(VAR_10, VAR_9, VAR_7);
 if (VAR_13)
  goto err_clunk_old_fid;
 VAR_10->private_data = VAR_22;
 if (VAR_24->cache == VAR_1 || VAR_24->cache == VAR_0)
  FUNC_17(VAR_18, VAR_10);
 VAR_10->f_mode |= VAR_2;
out:
 FUNC_25(VAR_26, VAR_25);
 FUNC_7(VAR_27);
 return VAR_13;

error:
 if (VAR_19)
  FUNC_12(VAR_19);
err_clunk_old_fid:
 if (VAR_22)
  FUNC_12(VAR_22);
 goto out;
}
