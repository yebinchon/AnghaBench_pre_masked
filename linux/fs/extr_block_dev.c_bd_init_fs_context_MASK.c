
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseudo_fs_context {int * ops; } ;
struct fs_context {int s_iflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pseudo_fs_context* FUNC_0 (struct fs_context*,int ) ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_4)
{
 struct pseudo_fs_context *VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (!VAR_5)
  return -VAR_1;
 VAR_4->s_iflags |= VAR_2;
 VAR_5->ops = &VAR_3;
 return 0;
}
