
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct path*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct path *VAR_1)
{
 struct dentry *VAR_2 = VAR_1->dentry;

 VAR_1->dentry = FUNC_0(VAR_1->dentry);
 FUNC_1(VAR_2);
 if (FUNC_3(!FUNC_2(VAR_1)))
  return -VAR_0;
 return 0;
}
