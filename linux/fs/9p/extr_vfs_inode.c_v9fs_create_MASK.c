
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v9fs_session_info {int dummy; } ;
struct p9_fid {int i_sb; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {unsigned char* name; } ;
struct dentry {TYPE_1__ d_name; } ;


 struct p9_fid* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_fid*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct p9_fid*) ;
 struct p9_fid* FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct dentry*,struct p9_fid*) ;
 int FUNC_5 (struct p9_fid*) ;
 int FUNC_6 (struct p9_fid*,unsigned char const*,int,int ,char*) ;
 struct p9_fid* FUNC_7 (struct p9_fid*,int,unsigned char const**,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct dentry*,struct p9_fid*) ;
 struct p9_fid* FUNC_10 (struct v9fs_session_info*,struct p9_fid*,int ) ;
 struct p9_fid* FUNC_11 (struct dentry*) ;

__attribute__((used)) static struct p9_fid *
FUNC_12(struct v9fs_session_info *VAR_2, struct inode *VAR_3,
  struct dentry *VAR_4, char *VAR_5, u32 VAR_6, u8 VAR_7)
{
 int VAR_8;
 const unsigned char *VAR_9;
 struct p9_fid *VAR_10, *VAR_11, *VAR_12;
 struct inode *VAR_13;

 FUNC_8(VAR_0, "name %pd\n", VAR_4);

 VAR_8 = 0;
 VAR_11 = ((void*)0);
 VAR_12 = ((void*)0);
 VAR_9 = VAR_4->d_name.name;
 VAR_10 = FUNC_11(VAR_4);
 if (FUNC_1(VAR_10)) {
  VAR_8 = FUNC_2(VAR_10);
  FUNC_8(VAR_0, "fid lookup failed %d\n", VAR_8);
  return FUNC_0(VAR_8);
 }


 VAR_11 = FUNC_3(VAR_10);
 if (FUNC_1(VAR_11)) {
  VAR_8 = FUNC_2(VAR_11);
  FUNC_8(VAR_0, "p9_client_walk failed %d\n", VAR_8);
  return FUNC_0(VAR_8);
 }

 VAR_8 = FUNC_6(VAR_11, VAR_9, VAR_6, VAR_7, VAR_5);
 if (VAR_8 < 0) {
  FUNC_8(VAR_0, "p9_client_fcreate failed %d\n", VAR_8);
  goto error;
 }

 if (!(VAR_6 & VAR_1)) {

  VAR_12 = FUNC_7(VAR_10, 1, &VAR_9, 1);
  if (FUNC_1(VAR_12)) {
   VAR_8 = FUNC_2(VAR_12);
   FUNC_8(VAR_0,
       "p9_client_walk failed %d\n", VAR_8);
   VAR_12 = ((void*)0);
   goto error;
  }



  VAR_13 = FUNC_10(VAR_2, VAR_12, VAR_3->i_sb);
  if (FUNC_1(VAR_13)) {
   VAR_8 = FUNC_2(VAR_13);
   FUNC_8(VAR_0,
       "inode creation failed %d\n", VAR_8);
   goto error;
  }
  FUNC_9(VAR_4, VAR_12);
  FUNC_4(VAR_4, VAR_13);
 }
 return VAR_11;
error:
 if (VAR_11)
  FUNC_5(VAR_11);

 if (VAR_12)
  FUNC_5(VAR_12);

 return FUNC_0(VAR_8);
}
