
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseudo_fs_context {int * dops; } ;
struct fs_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pseudo_fs_context* FUNC_0 (struct fs_context*,int ) ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_3)
{
 struct pseudo_fs_context *VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (!VAR_4)
  return -VAR_1;
 VAR_4->dops = &VAR_2;
 return 0;
}
