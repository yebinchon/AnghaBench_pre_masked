
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseudo_fs_context {unsigned long magic; } ;
struct fs_context {int global; int sb_flags; int * ops; struct pseudo_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pseudo_fs_context* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct pseudo_fs_context*) ;
 int VAR_2 ;

struct pseudo_fs_context *FUNC_2(struct fs_context *VAR_3,
     unsigned long VAR_4)
{
 struct pseudo_fs_context *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct pseudo_fs_context), VAR_0);
 if (FUNC_1(VAR_5)) {
  VAR_5->magic = VAR_4;
  VAR_3->fs_private = VAR_5;
  VAR_3->ops = &VAR_2;
  VAR_3->sb_flags |= VAR_1;
  VAR_3->global = 1;
 }
 return VAR_5;
}
