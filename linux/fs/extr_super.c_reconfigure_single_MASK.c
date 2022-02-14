
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; } ;
struct fs_context {int dummy; } ;


 scalar_t__ FUNC_0 (struct fs_context*) ;
 int VAR_0 ;
 int FUNC_1 (struct fs_context*) ;
 struct fs_context* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct fs_context*,void*) ;
 int FUNC_4 (struct fs_context*) ;
 int FUNC_5 (struct fs_context*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_1,
         int VAR_2, void *VAR_3)
{
 struct fs_context *VAR_4;
 int VAR_5;






 VAR_4 = FUNC_2(VAR_1->s_root, VAR_2, VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_5(VAR_4);
out:
 FUNC_4(VAR_4);
 return VAR_5;
}
