
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (struct p9_fid*) ;
 char const* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct p9_fid*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct p9_fid*,char**) ;
 int FUNC_4 (int ,char*,struct dentry*) ;
 int FUNC_5 (struct delayed_call*,int ,char*) ;
 struct p9_fid* FUNC_6 (struct dentry*) ;

__attribute__((used)) static const char *
FUNC_7(struct dentry *VAR_3,
         struct inode *VAR_4,
         struct delayed_call *VAR_5)
{
 struct p9_fid *VAR_6;
 char *VAR_7;
 int VAR_8;

 if (!VAR_3)
  return FUNC_1(-VAR_0);

 FUNC_4(VAR_1, "%pd\n", VAR_3);

 VAR_6 = FUNC_6(VAR_3);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);
 VAR_8 = FUNC_3(VAR_6, &VAR_7);
 if (VAR_8)
  return FUNC_1(VAR_8);
 FUNC_5(VAR_5, VAR_2, VAR_7);
 return VAR_7;
}
