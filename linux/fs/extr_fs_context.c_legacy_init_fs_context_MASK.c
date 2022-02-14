
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct legacy_fs_context {int dummy; } ;
struct fs_context {int * ops; int fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_3)
{
 VAR_3->fs_private = FUNC_0(sizeof(struct legacy_fs_context), VAR_1);
 if (!VAR_3->fs_private)
  return -VAR_0;
 VAR_3->ops = &VAR_2;
 return 0;
}
