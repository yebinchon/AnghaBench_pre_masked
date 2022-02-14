
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fuse_file {TYPE_2__* fc; TYPE_1__* release_args; int count; } ;
struct fuse_args {int (* end ) (TYPE_2__*,struct fuse_args*,int ) ;} ;
struct TYPE_6__ {scalar_t__ no_open; scalar_t__ no_opendir; } ;
struct TYPE_5__ {struct fuse_args args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct fuse_args*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct fuse_args*,int) ;
 int FUNC_2 (TYPE_2__*,struct fuse_args*) ;
 int FUNC_3 (struct fuse_file*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fuse_file *VAR_3, bool VAR_4, bool VAR_5)
{
 if (FUNC_4(&VAR_3->count)) {
  struct fuse_args *VAR_6 = &VAR_3->release_args->args;

  if (VAR_5 ? VAR_3->fc->no_opendir : VAR_3->fc->no_open) {

   FUNC_0(VAR_3->fc, VAR_6, 0);
  } else if (VAR_4) {
   FUNC_2(VAR_3->fc, VAR_6);
   FUNC_0(VAR_3->fc, VAR_6, 0);
  } else {
   VAR_6->end = FUNC_0;
   if (FUNC_1(VAR_3->fc, VAR_6,
         VAR_1 | VAR_2))
    FUNC_0(VAR_3->fc, VAR_6, -VAR_0);
  }
  FUNC_3(VAR_3);
 }
}
