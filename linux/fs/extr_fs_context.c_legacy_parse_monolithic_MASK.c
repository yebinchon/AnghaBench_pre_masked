
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct legacy_fs_context {scalar_t__ param_type; void* legacy_data; } ;
struct fs_context {int security; TYPE_1__* fs_type; struct legacy_fs_context* fs_private; } ;
struct TYPE_2__ {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*,int *) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_4, void *VAR_5)
{
 struct legacy_fs_context *VAR_6 = VAR_4->fs_private;

 if (VAR_6->param_type != VAR_3) {
  FUNC_0("VFS: Can't mix monolithic and individual options\n");
  return -VAR_0;
 }

 VAR_6->legacy_data = VAR_5;
 VAR_6->param_type = VAR_2;
 if (!VAR_6->legacy_data)
  return 0;

 if (VAR_4->fs_type->fs_flags & VAR_1)
  return 0;
 return FUNC_1(VAR_6->legacy_data, &VAR_4->security);
}
