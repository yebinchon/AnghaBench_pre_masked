
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct select_data {int dispose; int found; struct dentry* start; } ;
struct TYPE_2__ {int count; } ;
struct dentry {int d_flags; TYPE_1__ d_lockref; } ;
typedef enum d_walk_ret { ____Placeholder_d_walk_ret } d_walk_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static enum d_walk_ret FUNC_4(void *VAR_5, struct dentry *VAR_6)
{
 struct select_data *VAR_7 = VAR_5;
 enum d_walk_ret VAR_8 = VAR_2;

 if (VAR_7->start == VAR_6)
  goto out;

 if (VAR_6->d_flags & VAR_1) {
  VAR_7->found++;
 } else {
  if (VAR_6->d_flags & VAR_0)
   FUNC_0(VAR_6);
  if (!VAR_6->d_lockref.count) {
   FUNC_1(VAR_6, &VAR_7->dispose);
   VAR_7->found++;
  }
 }





 if (!FUNC_2(&VAR_7->dispose))
  VAR_8 = FUNC_3() ? VAR_4 : VAR_3;
out:
 return VAR_8;
}
