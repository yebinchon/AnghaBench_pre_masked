
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int s_user_ns; TYPE_1__* s_op; } ;
struct TYPE_9__ {int mnt_flags; struct super_block* mnt_sb; } ;
struct mount {int mnt_list; TYPE_4__ mnt; int mnt_expiry_mark; } ;
struct TYPE_10__ {TYPE_3__* fs; } ;
struct TYPE_7__ {TYPE_4__* mnt; } ;
struct TYPE_8__ {TYPE_2__ root; } ;
struct TYPE_6__ {int (* umount_begin ) (struct super_block*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_5__* VAR_11 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct mount*,int) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct mount*,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static int FUNC_14(struct mount *VAR_13, int VAR_14)
{
 struct super_block *VAR_15 = VAR_13->mnt.mnt_sb;
 int VAR_16;

 VAR_16 = FUNC_8(&VAR_13->mnt, VAR_14);
 if (VAR_16)
  return VAR_16;







 if (VAR_14 & VAR_6) {
  if (&VAR_13->mnt == VAR_11->fs->root.mnt ||
      VAR_14 & (VAR_7 | VAR_5))
   return -VAR_3;





  FUNC_2();
  if (FUNC_3(VAR_13) != 2) {
   FUNC_12();
   return -VAR_2;
  }
  FUNC_12();

  if (!FUNC_13(&VAR_13->mnt_expiry_mark, 1))
   return -VAR_1;
 }
 if (VAR_14 & VAR_7 && VAR_15->s_op->umount_begin) {
  VAR_15->s_op->umount_begin(VAR_15);
 }
 if (&VAR_13->mnt == VAR_11->fs->root.mnt && !(VAR_14 & VAR_5)) {




  if (!FUNC_6(VAR_15->s_user_ns, VAR_0))
   return -VAR_4;
  return FUNC_0(VAR_15);
 }

 FUNC_4();
 FUNC_2();


 VAR_16 = -VAR_3;
 if (VAR_13->mnt.mnt_flags & VAR_8)
  goto out;

 VAR_12++;
 if (VAR_14 & VAR_5) {
  if (!FUNC_1(&VAR_13->mnt_list))
   FUNC_11(VAR_13, VAR_9);
  VAR_16 = 0;
 } else {
  FUNC_9(VAR_13);
  VAR_16 = -VAR_2;
  if (!FUNC_7(VAR_13, 2)) {
   if (!FUNC_1(&VAR_13->mnt_list))
    FUNC_11(VAR_13, VAR_9|VAR_10);
   VAR_16 = 0;
  }
 }
out:
 FUNC_12();
 FUNC_5();
 return VAR_16;
}
