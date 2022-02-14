
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
typedef enum d_walk_ret { ____Placeholder_d_walk_ret } d_walk_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;

__attribute__((used)) static enum d_walk_ret FUNC_2(void *VAR_2, struct dentry *VAR_3)
{
 struct dentry **VAR_4 = VAR_2;
 if (FUNC_1(VAR_3)) {
  FUNC_0(VAR_3);
  *VAR_4 = VAR_3;
  return VAR_1;
 }
 return VAR_0;
}
