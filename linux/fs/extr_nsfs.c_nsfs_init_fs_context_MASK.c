
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseudo_fs_context {int * dops; int * ops; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pseudo_fs_context* FUNC_0 (struct fs_context*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_4)
{
 struct pseudo_fs_context *VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->ops = &VAR_3;
 VAR_5->dops = &VAR_2;
 return 0;
}
