
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_sb; } ;
struct delayed_call {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 struct cred* FUNC_2 (int ) ;
 int FUNC_3 (struct cred const*) ;
 char* FUNC_4 (int ,struct delayed_call*) ;

__attribute__((used)) static const char *FUNC_5(struct dentry *VAR_1,
    struct inode *VAR_2,
    struct delayed_call *VAR_3)
{
 const struct cred *VAR_4;
 const char *VAR_5;

 if (!VAR_1)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(VAR_1->d_sb);
 VAR_5 = FUNC_4(FUNC_1(VAR_1), VAR_3);
 FUNC_3(VAR_4);
 return VAR_5;
}
