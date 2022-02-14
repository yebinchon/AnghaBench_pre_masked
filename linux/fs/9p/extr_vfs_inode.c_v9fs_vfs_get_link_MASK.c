
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct p9_wstat {int mode; char* extension; } ;
struct p9_fid {int mode; char* extension; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (struct p9_wstat*) ;
 char const* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct p9_wstat*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct p9_wstat*) ;
 int VAR_6 ;
 struct p9_wstat* FUNC_4 (struct p9_wstat*) ;
 int FUNC_5 (int ,char*,struct dentry*) ;
 int FUNC_6 (struct p9_wstat*) ;
 int FUNC_7 (struct delayed_call*,int ,char*) ;
 int FUNC_8 (char*) ;
 struct v9fs_session_info* FUNC_9 (struct dentry*) ;
 struct p9_wstat* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct v9fs_session_info*) ;

__attribute__((used)) static const char *FUNC_12(struct dentry *VAR_7,
         struct inode *VAR_8,
         struct delayed_call *VAR_9)
{
 struct v9fs_session_info *VAR_10;
 struct p9_fid *VAR_11;
 struct p9_wstat *VAR_12;
 char *VAR_13;

 if (!VAR_7)
  return FUNC_1(-VAR_1);

 VAR_10 = FUNC_9(VAR_7);
 VAR_11 = FUNC_10(VAR_7);
 FUNC_5(VAR_3, "%pd\n", VAR_7);

 if (FUNC_2(VAR_11))
  return FUNC_0(VAR_11);

 if (!FUNC_11(VAR_10))
  return FUNC_1(-VAR_0);

 VAR_12 = FUNC_4(VAR_11);
 if (FUNC_2(VAR_12))
  return FUNC_0(VAR_12);

 if (!(VAR_12->mode & VAR_4)) {
  FUNC_6(VAR_12);
  FUNC_3(VAR_12);
  return FUNC_1(-VAR_2);
 }
 VAR_13 = VAR_12->extension;
 VAR_12->extension = ((void*)0);
 if (FUNC_8(VAR_13) >= VAR_5)
  VAR_13[VAR_5 - 1] = '\0';

 FUNC_6(VAR_12);
 FUNC_3(VAR_12);
 FUNC_7(VAR_9, VAR_6, VAR_13);
 return VAR_13;
}
