
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {scalar_t__ cache; } ;
struct p9_qid {int dummy; } ;
struct p9_fid {int i_sb; int i_ino; } ;
struct inode {int i_sb; int i_ino; } ;
struct TYPE_2__ {unsigned char* name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int kgid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_1 (struct p9_fid*) ;
 int VAR_3 ;
 int FUNC_2 (struct dentry*,struct p9_fid*) ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct p9_fid*,unsigned char const*,char const*,int ,struct p9_qid*) ;
 struct p9_fid* FUNC_5 (struct p9_fid*,int,unsigned char const**,int) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct dentry*,struct p9_fid*) ;
 int FUNC_8 (struct p9_fid*) ;
 struct p9_fid* FUNC_9 (int ,int ,int ) ;
 struct p9_fid* FUNC_10 (struct v9fs_session_info*,struct p9_fid*,int ) ;
 struct v9fs_session_info* FUNC_11 (struct p9_fid*) ;
 int FUNC_12 (struct p9_fid*) ;
 struct p9_fid* FUNC_13 (struct dentry*) ;

__attribute__((used)) static int
FUNC_14(struct inode *VAR_4, struct dentry *VAR_5,
  const char *VAR_6)
{
 int VAR_7;
 kgid_t VAR_8;
 const unsigned char *VAR_9;
 struct p9_qid VAR_10;
 struct inode *VAR_11;
 struct p9_fid *VAR_12;
 struct p9_fid *VAR_13 = ((void*)0);
 struct v9fs_session_info *VAR_14;

 VAR_9 = VAR_5->d_name.name;
 FUNC_6(VAR_2, "%lu,%s,%s\n", VAR_4->i_ino, VAR_9, VAR_6);
 VAR_14 = FUNC_11(VAR_4);

 VAR_12 = FUNC_13(VAR_5);
 if (FUNC_0(VAR_12)) {
  VAR_7 = FUNC_1(VAR_12);
  FUNC_6(VAR_2, "fid lookup failed %d\n", VAR_7);
  return VAR_7;
 }

 VAR_8 = FUNC_8(VAR_4);


 VAR_7 = FUNC_4(VAR_12, VAR_9, VAR_6, VAR_8, &VAR_10);

 if (VAR_7 < 0) {
  FUNC_6(VAR_2, "p9_client_symlink failed %d\n", VAR_7);
  goto error;
 }

 FUNC_12(VAR_4);
 if (VAR_14->cache == VAR_1 || VAR_14->cache == VAR_0) {

  VAR_13 = FUNC_5(VAR_12, 1, &VAR_9, 1);
  if (FUNC_0(VAR_13)) {
   VAR_7 = FUNC_1(VAR_13);
   FUNC_6(VAR_2, "p9_client_walk failed %d\n",
     VAR_7);
   VAR_13 = ((void*)0);
   goto error;
  }


  VAR_11 = FUNC_10(VAR_14, VAR_13, VAR_4->i_sb);
  if (FUNC_0(VAR_11)) {
   VAR_7 = FUNC_1(VAR_11);
   FUNC_6(VAR_2, "inode creation failed %d\n",
     VAR_7);
   goto error;
  }
  FUNC_7(VAR_5, VAR_13);
  FUNC_2(VAR_5, VAR_11);
  VAR_13 = ((void*)0);
  VAR_7 = 0;
 } else {

  VAR_11 = FUNC_9(VAR_4->i_sb, VAR_3, 0);
  if (FUNC_0(VAR_11)) {
   VAR_7 = FUNC_1(VAR_11);
   goto error;
  }
  FUNC_2(VAR_5, VAR_11);
 }

error:
 if (VAR_13)
  FUNC_3(VAR_13);

 return VAR_7;
}
