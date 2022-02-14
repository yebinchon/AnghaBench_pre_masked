
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;
struct check_mount {int mounted; int mnt; } ;
typedef enum d_walk_ret { ____Placeholder_d_walk_ret } d_walk_ret ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct path*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static enum d_walk_ret FUNC_3(void *VAR_2, struct dentry *VAR_3)
{
 struct check_mount *VAR_4 = VAR_2;
 struct path VAR_5 = { .mnt = VAR_4->mnt, .dentry = VAR_3 };

 if (FUNC_2(!FUNC_1(VAR_3)))
  return VAR_0;
 if (FUNC_0(&VAR_5)) {
  VAR_4->mounted = 1;
  return VAR_1;
 }
 return VAR_0;
}
