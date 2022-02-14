
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct legacy_fs_context {scalar_t__ param_type; int data_size; struct legacy_fs_context* legacy_data; } ;
struct fs_context {struct legacy_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct legacy_fs_context*) ;
 void* FUNC_1 (struct legacy_fs_context*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_3, struct fs_context *VAR_4)
{
 struct legacy_fs_context *VAR_5;
 struct legacy_fs_context *VAR_6 = VAR_4->fs_private;

 VAR_5 = FUNC_1(VAR_6, sizeof(*VAR_6), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->param_type == VAR_2) {
  VAR_5->legacy_data = FUNC_1(VAR_6->legacy_data,
        VAR_6->data_size, VAR_1);
  if (!VAR_5->legacy_data) {
   FUNC_0(VAR_5);
   return -VAR_0;
  }
 }

 VAR_3->fs_private = VAR_5;
 return 0;
}
