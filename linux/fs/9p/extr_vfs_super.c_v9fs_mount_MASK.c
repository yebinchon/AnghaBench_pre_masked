
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
struct v9fs_session_info {scalar_t__ cache; struct dentry* s_root; int qid; int * s_d_op; } ;
struct super_block {scalar_t__ cache; struct dentry* s_root; int qid; int * s_d_op; } ;
struct p9_wstat {scalar_t__ cache; struct dentry* s_root; int qid; int * s_d_op; } ;
struct p9_stat_dotl {scalar_t__ cache; struct dentry* s_root; int qid; int * s_d_op; } ;
struct p9_fid {scalar_t__ cache; struct dentry* s_root; int qid; int * s_d_op; } ;
struct inode {scalar_t__ cache; struct dentry* s_root; int qid; int * s_d_op; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {void* i_ino; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct v9fs_session_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct v9fs_session_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct v9fs_session_info*) ;
 int FUNC_5 (struct v9fs_session_info*) ;
 struct dentry* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_8 (int,int ) ;
 int FUNC_9 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_10 (struct v9fs_session_info*,int ) ;
 struct v9fs_session_info* FUNC_11 (struct v9fs_session_info*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_14 (struct file_system_type*,int *,int ,int,struct v9fs_session_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (struct dentry*,struct v9fs_session_info*) ;
 int FUNC_16 (struct v9fs_session_info*,struct v9fs_session_info*,int) ;
 int FUNC_17 (struct v9fs_session_info*,struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_18 (struct v9fs_session_info*,int,int ) ;
 scalar_t__ FUNC_19 (struct v9fs_session_info*) ;
 void* FUNC_20 (int *) ;
 int FUNC_21 (struct v9fs_session_info*) ;
 struct v9fs_session_info* FUNC_22 (struct v9fs_session_info*,char const*,void*) ;
 int VAR_11 ;
 int FUNC_23 (struct v9fs_session_info*,TYPE_1__*,struct v9fs_session_info*,int ) ;
 int FUNC_24 (struct v9fs_session_info*,TYPE_1__*,int ) ;

__attribute__((used)) static struct dentry *FUNC_25(struct file_system_type *VAR_12, int VAR_13,
         const char *VAR_14, void *VAR_15)
{
 struct super_block *VAR_16 = ((void*)0);
 struct inode *VAR_17 = ((void*)0);
 struct dentry *VAR_18 = ((void*)0);
 struct v9fs_session_info *VAR_19 = ((void*)0);
 umode_t VAR_20 = VAR_7 | VAR_8;
 struct p9_fid *VAR_21;
 int VAR_22 = 0;

 FUNC_12(VAR_4, "\n");

 VAR_19 = FUNC_8(sizeof(struct v9fs_session_info), VAR_3);
 if (!VAR_19)
  return FUNC_0(-VAR_2);

 VAR_21 = FUNC_22(VAR_19, VAR_14, VAR_15);
 if (FUNC_1(VAR_21)) {
  VAR_22 = FUNC_2(VAR_21);
  goto free_session;
 }

 VAR_16 = FUNC_14(VAR_12, ((void*)0), VAR_11, VAR_13, VAR_19);
 if (FUNC_1(VAR_16)) {
  VAR_22 = FUNC_2(VAR_16);
  goto clunk_fid;
 }
 VAR_22 = FUNC_16(VAR_16, VAR_19, VAR_13);
 if (VAR_22)
  goto release_sb;

 if (VAR_19->cache == VAR_1 || VAR_19->cache == VAR_0)
  VAR_16->s_d_op = &VAR_9;
 else
  VAR_16->s_d_op = &VAR_10;

 VAR_17 = FUNC_18(VAR_16, VAR_6 | VAR_20, 0);
 if (FUNC_1(VAR_17)) {
  VAR_22 = FUNC_2(VAR_17);
  goto release_sb;
 }

 VAR_18 = FUNC_4(VAR_17);
 if (!VAR_18) {
  VAR_22 = -VAR_2;
  goto release_sb;
 }
 VAR_16->s_root = VAR_18;
 if (FUNC_19(VAR_19)) {
  struct p9_stat_dotl *VAR_23 = ((void*)0);
  VAR_23 = FUNC_10(VAR_21, VAR_5);
  if (FUNC_1(VAR_23)) {
   VAR_22 = FUNC_2(VAR_23);
   goto release_sb;
  }
  FUNC_3(VAR_18)->i_ino = FUNC_20(&VAR_23->qid);
  FUNC_24(VAR_23, FUNC_3(VAR_18), 0);
  FUNC_7(VAR_23);
 } else {
  struct p9_wstat *VAR_24 = ((void*)0);
  VAR_24 = FUNC_11(VAR_21);
  if (FUNC_1(VAR_24)) {
   VAR_22 = FUNC_2(VAR_24);
   goto release_sb;
  }

  FUNC_3(VAR_18)->i_ino = FUNC_20(&VAR_24->qid);
  FUNC_23(VAR_24, FUNC_3(VAR_18), VAR_16, 0);

  FUNC_13(VAR_24);
  FUNC_7(VAR_24);
 }
 VAR_22 = FUNC_17(VAR_17, VAR_21);
 if (VAR_22)
  goto release_sb;
 FUNC_15(VAR_18, VAR_21);

 FUNC_12(VAR_4, " simple set mount, return 0\n");
 return FUNC_6(VAR_16->s_root);

clunk_fid:
 FUNC_9(VAR_21);
 FUNC_21(VAR_19);
free_session:
 FUNC_7(VAR_19);
 return FUNC_0(VAR_22);

release_sb:






 FUNC_9(VAR_21);
 FUNC_5(VAR_16);
 return FUNC_0(VAR_22);
}
