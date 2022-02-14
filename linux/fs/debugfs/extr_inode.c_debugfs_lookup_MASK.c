
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* mnt_root; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (char const*,struct dentry*,int ) ;
 int FUNC_4 (char const*) ;

struct dentry *FUNC_5(const char *VAR_1, struct dentry *VAR_2)
{
 struct dentry *VAR_3;

 if (FUNC_0(VAR_2))
  return ((void*)0);

 if (!VAR_2)
  VAR_2 = VAR_0->mnt_root;

 VAR_3 = FUNC_3(VAR_1, VAR_2, FUNC_4(VAR_1));
 if (FUNC_0(VAR_3))
  return ((void*)0);
 if (!FUNC_1(VAR_3)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
