
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_umount; int s_root; } ;
struct fs_context {int dummy; } ;


 scalar_t__ FUNC_0 (struct fs_context*) ;
 int FUNC_1 (struct fs_context*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct fs_context* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fs_context*,int *) ;
 int FUNC_5 (struct fs_context*) ;
 int FUNC_6 (struct fs_context*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_1->s_umount);
 if (!FUNC_7(VAR_1)) {
  struct fs_context *VAR_3;

  VAR_3 = FUNC_3(VAR_1->s_root, VAR_0,
      VAR_0);
  if (FUNC_0(VAR_3)) {
   VAR_2 = FUNC_1(VAR_3);
  } else {
   VAR_2 = FUNC_4(VAR_3, ((void*)0));
   if (!VAR_2)
    VAR_2 = FUNC_6(VAR_3);
   FUNC_5(VAR_3);
  }
 }
 FUNC_8(&VAR_1->s_umount);
 return VAR_2;
}
