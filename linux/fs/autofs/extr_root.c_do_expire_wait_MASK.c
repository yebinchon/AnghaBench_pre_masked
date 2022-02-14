
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct path const*,int) ;
 struct dentry* FUNC_4 (struct dentry*,int) ;
 int FUNC_5 (struct dentry*) ;

__attribute__((used)) static int FUNC_6(const struct path *VAR_0, bool VAR_1)
{
 struct dentry *VAR_2 = VAR_0->dentry;
 struct dentry *VAR_3;

 VAR_3 = FUNC_4(VAR_2, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 if (!VAR_3)
  return FUNC_3(VAR_0, VAR_1);
 else {
  const struct path VAR_4 = { .mnt = VAR_0->mnt, .dentry = VAR_3 };





  FUNC_3(&VAR_4, 0);
  FUNC_2(VAR_3);
  FUNC_5(VAR_3);
 }
 return 0;
}
