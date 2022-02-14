
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct legacy_fs_context {scalar_t__ param_type; struct legacy_fs_context* legacy_data; } ;
struct fs_context {struct legacy_fs_context* fs_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct legacy_fs_context*) ;

__attribute__((used)) static void FUNC_1(struct fs_context *VAR_1)
{
 struct legacy_fs_context *VAR_2 = VAR_1->fs_private;

 if (VAR_2) {
  if (VAR_2->param_type == VAR_0)
   FUNC_0(VAR_2->legacy_data);
  FUNC_0(VAR_2);
 }
}
