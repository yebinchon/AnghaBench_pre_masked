
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; int s_umount; scalar_t__ s_root; scalar_t__ s_bdev; } ;
struct fs_context {int dummy; } ;


 int FUNC_0 (struct fs_context*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct fs_context* FUNC_2 (scalar_t__,int,int) ;
 scalar_t__ FUNC_3 (struct fs_context*,int *) ;
 int FUNC_4 (struct fs_context*) ;
 int FUNC_5 (struct fs_context*) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct super_block *VAR_3)
{
 FUNC_1(&VAR_3->s_umount);
 if (VAR_3->s_root && VAR_3->s_bdev && (VAR_3->s_flags & VAR_0) &&
     !FUNC_6(VAR_3)) {
  struct fs_context *VAR_4;

  VAR_4 = FUNC_2(VAR_3->s_root,
     VAR_2 | VAR_1, VAR_2);
  if (!FUNC_0(VAR_4)) {
   if (FUNC_3(VAR_4, ((void*)0)) == 0)
    (void)FUNC_5(VAR_4);
   FUNC_4(VAR_4);
  }
 }
 FUNC_7(&VAR_3->s_umount);
}
