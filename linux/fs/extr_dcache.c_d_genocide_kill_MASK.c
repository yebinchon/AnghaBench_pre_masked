
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct dentry {int d_flags; TYPE_1__ d_lockref; int d_inode; } ;
typedef enum d_walk_ret { ____Placeholder_d_walk_ret } d_walk_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;

__attribute__((used)) static enum d_walk_ret FUNC_1(void *VAR_3, struct dentry *VAR_4)
{
 struct dentry *VAR_5 = VAR_3;
 if (VAR_4 != VAR_5) {
  if (FUNC_0(VAR_4) || !VAR_4->d_inode)
   return VAR_2;

  if (!(VAR_4->d_flags & VAR_0)) {
   VAR_4->d_flags |= VAR_0;
   VAR_4->d_lockref.count--;
  }
 }
 return VAR_1;
}
