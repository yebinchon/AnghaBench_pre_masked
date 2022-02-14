
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_root {int dummy; } ;
struct path {scalar_t__ dentry; } ;
struct TYPE_2__ {int actor; } ;
struct ovl_readdir_data {int is_lowest; int is_upper; int middle; struct list_head* list; struct rb_root* root; struct dentry* dentry; TYPE_1__ ctx; } ;
struct list_head {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct path*,struct ovl_readdir_data*) ;
 int VAR_0 ;
 int FUNC_4 (int,struct dentry*,struct path*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_1, struct list_head *VAR_2,
 struct rb_root *VAR_3)
{
 int VAR_4;
 struct path VAR_5;
 struct ovl_readdir_data VAR_6 = {
  .ctx.actor = VAR_0,
  .dentry = VAR_1,
  .list = VAR_2,
  .root = VAR_3,
  .is_lowest = 0,
 };
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 != -1; VAR_7 = VAR_8) {
  VAR_8 = FUNC_4(VAR_7, VAR_1, &VAR_5);
  VAR_6.is_upper = FUNC_2(VAR_1) == VAR_5.dentry;

  if (VAR_8 != -1) {
   VAR_4 = FUNC_3(&VAR_5, &VAR_6);
   if (VAR_4)
    break;
  } else {




   FUNC_0(&VAR_6.middle, VAR_6.list);
   VAR_6.is_lowest = 1;
   VAR_4 = FUNC_3(&VAR_5, &VAR_6);
   FUNC_1(&VAR_6.middle);
  }
 }
 return VAR_4;
}
