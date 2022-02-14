
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dev; } ;
struct fs_context {int s_fs_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0,
          struct fs_context *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->s_dev);
 if (!VAR_2)
  FUNC_0(VAR_1->s_fs_info);

 return VAR_2;
}
