
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_umount; int s_user_ns; } ;
struct fs_parameter {int dummy; } ;
struct fs_context {int phase; TYPE_1__* root; } ;
struct TYPE_2__ {struct super_block* d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fs_context*) ;
 int FUNC_2 (struct fs_context*) ;
 int FUNC_3 (struct fs_context*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct fs_context*) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct fs_context*) ;
 int FUNC_10 (struct fs_context*) ;
 int FUNC_11 (struct fs_context*,struct fs_parameter*) ;

__attribute__((used)) static int FUNC_12(struct fs_context *VAR_9, int VAR_10,
          struct fs_parameter *VAR_11)
{
 struct super_block *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_9);
 if (VAR_13)
  return VAR_13;
 switch (VAR_10) {
 case 129:
  if (VAR_9->phase != VAR_4)
   return -VAR_1;
  if (!FUNC_3(VAR_9))
   return -VAR_2;
  VAR_9->phase = VAR_5;
  VAR_13 = FUNC_10(VAR_9);
  if (VAR_13)
   break;
  VAR_12 = VAR_9->root->d_sb;
  VAR_13 = FUNC_6(VAR_12);
  if (FUNC_7(VAR_13)) {
   FUNC_1(VAR_9);
   break;
  }
  FUNC_8(&VAR_12->s_umount);
  VAR_9->phase = VAR_3;
  return 0;
 case 128:
  if (VAR_9->phase != VAR_8)
   return -VAR_1;
  VAR_9->phase = VAR_7;
  VAR_12 = VAR_9->root->d_sb;
  if (!FUNC_4(VAR_12->s_user_ns, VAR_0)) {
   VAR_13 = -VAR_2;
   break;
  }
  FUNC_0(&VAR_12->s_umount);
  VAR_13 = FUNC_5(VAR_9);
  FUNC_8(&VAR_12->s_umount);
  if (VAR_13)
   break;
  FUNC_9(VAR_9);
  return 0;
 default:
  if (VAR_9->phase != VAR_4 &&
      VAR_9->phase != VAR_8)
   return -VAR_1;

  return FUNC_11(VAR_9, VAR_11);
 }
 VAR_9->phase = VAR_6;
 return VAR_13;
}
