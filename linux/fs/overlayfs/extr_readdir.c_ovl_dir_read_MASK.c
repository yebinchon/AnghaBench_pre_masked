
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; } ;
struct TYPE_2__ {scalar_t__ pos; } ;
struct ovl_readdir_data {int err; scalar_t__ dentry; int * first_maybe_whiteout; TYPE_1__ ctx; scalar_t__ count; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,TYPE_1__*) ;
 int FUNC_4 (int ,struct ovl_readdir_data*) ;
 struct file* FUNC_5 (struct path*,int) ;

__attribute__((used)) static inline int FUNC_6(struct path *VAR_2,
          struct ovl_readdir_data *VAR_3)
{
 struct file *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_2, VAR_1 | VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->first_maybe_whiteout = ((void*)0);
 VAR_3->ctx.pos = 0;
 do {
  VAR_3->count = 0;
  VAR_3->err = 0;
  VAR_5 = FUNC_3(VAR_4, &VAR_3->ctx);
  if (VAR_5 >= 0)
   VAR_5 = VAR_3->err;
 } while (!VAR_5 && VAR_3->count);

 if (!VAR_5 && VAR_3->first_maybe_whiteout && VAR_3->dentry)
  VAR_5 = FUNC_4(VAR_2->dentry, VAR_3);

 FUNC_2(VAR_4);

 return VAR_5;
}
