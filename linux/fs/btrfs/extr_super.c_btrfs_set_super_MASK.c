
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {void* s_fs_info; } ;


 int FUNC_0 (struct super_block*,void*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0, void *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  VAR_0->s_fs_info = VAR_1;
 return VAR_2;
}
