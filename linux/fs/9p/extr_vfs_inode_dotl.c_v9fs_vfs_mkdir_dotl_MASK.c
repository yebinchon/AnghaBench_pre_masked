
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct v9fs_session_info {scalar_t__ cache; } ;
struct posix_acl {int dummy; } ;
struct p9_qid {int dummy; } ;
struct p9_fid {int i_mode; int i_sb; } ;
struct inode {int i_mode; int i_sb; } ;
struct TYPE_2__ {unsigned char* name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int kgid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_1 (struct p9_fid*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dentry*,struct p9_fid*) ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct p9_fid*) ;
 int FUNC_5 (struct p9_fid*,unsigned char const*,int,int ,struct p9_qid*) ;
 struct p9_fid* FUNC_6 (struct p9_fid*,int,unsigned char const**,int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct p9_fid*,int*,struct posix_acl**,struct posix_acl**) ;
 int FUNC_9 (struct dentry*,struct p9_fid*) ;
 int FUNC_10 (struct p9_fid*) ;
 struct p9_fid* FUNC_11 (int ,int,int ) ;
 struct p9_fid* FUNC_12 (struct v9fs_session_info*,struct p9_fid*,int ) ;
 struct v9fs_session_info* FUNC_13 (struct p9_fid*) ;
 int FUNC_14 (struct p9_fid*) ;
 struct p9_fid* FUNC_15 (struct dentry*) ;
 int FUNC_16 (struct posix_acl*,struct posix_acl*) ;
 int FUNC_17 (struct p9_fid*,struct p9_fid*,struct posix_acl*,struct posix_acl*) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_5,
          struct dentry *VAR_6, umode_t VAR_7)
{
 int VAR_8;
 struct v9fs_session_info *VAR_9;
 struct p9_fid *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 kgid_t VAR_12;
 const unsigned char *VAR_13;
 umode_t VAR_14;
 struct inode *VAR_15;
 struct p9_qid VAR_16;
 struct posix_acl *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);

 FUNC_7(VAR_2, "name %pd\n", VAR_6);
 VAR_8 = 0;
 VAR_9 = FUNC_13(VAR_5);

 VAR_7 |= VAR_3;
 if (VAR_5->i_mode & VAR_4)
  VAR_7 |= VAR_4;

 VAR_11 = FUNC_15(VAR_6);
 if (FUNC_0(VAR_11)) {
  VAR_8 = FUNC_1(VAR_11);
  FUNC_7(VAR_2, "fid lookup failed %d\n", VAR_8);
  VAR_11 = ((void*)0);
  goto error;
 }

 VAR_12 = FUNC_10(VAR_5);
 VAR_14 = VAR_7;

 VAR_8 = FUNC_8(VAR_5, &VAR_14, &VAR_17, &VAR_18);
 if (VAR_8) {
  FUNC_7(VAR_2, "Failed to get acl values in mkdir %d\n",
    VAR_8);
  goto error;
 }
 VAR_13 = VAR_6->d_name.name;
 VAR_8 = FUNC_5(VAR_11, VAR_13, VAR_14, VAR_12, &VAR_16);
 if (VAR_8 < 0)
  goto error;

 VAR_10 = FUNC_6(VAR_11, 1, &VAR_13, 1);
 if (FUNC_0(VAR_10)) {
  VAR_8 = FUNC_1(VAR_10);
  FUNC_7(VAR_2, "p9_client_walk failed %d\n",
    VAR_8);
  VAR_10 = ((void*)0);
  goto error;
 }


 if (VAR_9->cache == VAR_1 || VAR_9->cache == VAR_0) {
  VAR_15 = FUNC_12(VAR_9, VAR_10, VAR_5->i_sb);
  if (FUNC_0(VAR_15)) {
   VAR_8 = FUNC_1(VAR_15);
   FUNC_7(VAR_2, "inode creation failed %d\n",
     VAR_8);
   goto error;
  }
  FUNC_9(VAR_6, VAR_10);
  FUNC_17(VAR_15, VAR_10, VAR_17, VAR_18);
  FUNC_2(VAR_6, VAR_15);
  VAR_10 = ((void*)0);
  VAR_8 = 0;
 } else {





  VAR_15 = FUNC_11(VAR_5->i_sb, VAR_14, 0);
  if (FUNC_0(VAR_15)) {
   VAR_8 = FUNC_1(VAR_15);
   goto error;
  }
  FUNC_17(VAR_15, VAR_10, VAR_17, VAR_18);
  FUNC_2(VAR_6, VAR_15);
 }
 FUNC_3(VAR_5);
 FUNC_14(VAR_5);
error:
 if (VAR_10)
  FUNC_4(VAR_10);
 FUNC_16(VAR_17, VAR_18);
 return VAR_8;
}
