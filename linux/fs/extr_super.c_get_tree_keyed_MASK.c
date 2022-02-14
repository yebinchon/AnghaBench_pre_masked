
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {void* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct fs_context*,int ,int (*) (struct super_block*,struct fs_context*)) ;

int FUNC_1(struct fs_context *VAR_1,
    int (*VAR_2)(struct super_block *VAR_3,
        struct fs_context *VAR_4),
  void *VAR_5)
{
 VAR_1->s_fs_info = VAR_5;
 return FUNC_0(VAR_1, VAR_0, VAR_2);
}
