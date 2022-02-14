
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct v9fs_session_info {scalar_t__ cache; } ;
struct posix_acl {int dummy; } ;
struct p9_qid {int dummy; } ;
struct p9_fid {int i_sb; int i_ino; } ;
struct inode {int i_sb; int i_ino; } ;
struct TYPE_2__ {unsigned char* name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int kgid_t ;
typedef int dev_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct dentry*,struct p9_fid*) ;
 int FUNC_5 (struct p9_fid*) ;
 int FUNC_6 (struct p9_fid*,unsigned char const*,int ,int ,int ,struct p9_qid*) ;
 struct p9_fid* FUNC_7 (struct p9_fid*,int,unsigned char const**,int) ;
 int FUNC_8 (int ,char*,int,...) ;
 int FUNC_9 (struct p9_fid*,int *,struct posix_acl**,struct posix_acl**) ;
 int FUNC_10 (struct dentry*,struct p9_fid*) ;
 int FUNC_11 (struct p9_fid*) ;
 struct p9_fid* FUNC_12 (int ,int ,int ) ;
 struct p9_fid* FUNC_13 (struct v9fs_session_info*,struct p9_fid*,int ) ;
 struct v9fs_session_info* FUNC_14 (struct p9_fid*) ;
 int FUNC_15 (struct p9_fid*) ;
 struct p9_fid* FUNC_16 (struct dentry*) ;
 int FUNC_17 (struct posix_acl*,struct posix_acl*) ;
 int FUNC_18 (struct p9_fid*,struct p9_fid*,struct posix_acl*,struct posix_acl*) ;

__attribute__((used)) static int
FUNC_19(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5,
  dev_t VAR_6)
{
 int VAR_7;
 kgid_t VAR_8;
 const unsigned char *VAR_9;
 umode_t VAR_10;
 struct v9fs_session_info *VAR_11;
 struct p9_fid *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct inode *VAR_14;
 struct p9_qid VAR_15;
 struct posix_acl *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);

 FUNC_8(VAR_2, " %lu,%pd mode: %hx MAJOR: %u MINOR: %u\n",
   VAR_3->i_ino, VAR_4, VAR_5,
   FUNC_1(VAR_6), FUNC_2(VAR_6));

 VAR_11 = FUNC_14(VAR_3);
 VAR_13 = FUNC_16(VAR_4);
 if (FUNC_0(VAR_13)) {
  VAR_7 = FUNC_3(VAR_13);
  FUNC_8(VAR_2, "fid lookup failed %d\n", VAR_7);
  VAR_13 = ((void*)0);
  goto error;
 }

 VAR_8 = FUNC_11(VAR_3);
 VAR_10 = VAR_5;

 VAR_7 = FUNC_9(VAR_3, &VAR_10, &VAR_16, &VAR_17);
 if (VAR_7) {
  FUNC_8(VAR_2, "Failed to get acl values in mknod %d\n",
    VAR_7);
  goto error;
 }
 VAR_9 = VAR_4->d_name.name;

 VAR_7 = FUNC_6(VAR_13, VAR_9, VAR_10, VAR_6, VAR_8, &VAR_15);
 if (VAR_7 < 0)
  goto error;

 FUNC_15(VAR_3);
 VAR_12 = FUNC_7(VAR_13, 1, &VAR_9, 1);
 if (FUNC_0(VAR_12)) {
  VAR_7 = FUNC_3(VAR_12);
  FUNC_8(VAR_2, "p9_client_walk failed %d\n",
    VAR_7);
  VAR_12 = ((void*)0);
  goto error;
 }


 if (VAR_11->cache == VAR_1 || VAR_11->cache == VAR_0) {
  VAR_14 = FUNC_13(VAR_11, VAR_12, VAR_3->i_sb);
  if (FUNC_0(VAR_14)) {
   VAR_7 = FUNC_3(VAR_14);
   FUNC_8(VAR_2, "inode creation failed %d\n",
     VAR_7);
   goto error;
  }
  FUNC_18(VAR_14, VAR_12, VAR_16, VAR_17);
  FUNC_10(VAR_4, VAR_12);
  FUNC_4(VAR_4, VAR_14);
  VAR_12 = ((void*)0);
  VAR_7 = 0;
 } else {




  VAR_14 = FUNC_12(VAR_3->i_sb, VAR_10, VAR_6);
  if (FUNC_0(VAR_14)) {
   VAR_7 = FUNC_3(VAR_14);
   goto error;
  }
  FUNC_18(VAR_14, VAR_12, VAR_16, VAR_17);
  FUNC_4(VAR_4, VAR_14);
 }
error:
 if (VAR_12)
  FUNC_5(VAR_12);
 FUNC_17(VAR_16, VAR_17);
 return VAR_7;
}
