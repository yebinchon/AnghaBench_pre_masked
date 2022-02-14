
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_sb; struct file_lock_context* i_flctx; } ;
struct file_lock_context {int flc_lease; int flc_posix; int flc_flock; } ;
struct TYPE_2__ {int s_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct inode *VAR_0)
{
 struct file_lock_context *VAR_1 = VAR_0->i_flctx;

 if (FUNC_5(!FUNC_2(&VAR_1->flc_flock) ||
       !FUNC_2(&VAR_1->flc_posix) ||
       !FUNC_2(&VAR_1->flc_lease))) {
  FUNC_4("Leaked locks on dev=0x%x:0x%x ino=0x%lx:\n",
   FUNC_0(VAR_0->i_sb->s_dev), FUNC_1(VAR_0->i_sb->s_dev),
   VAR_0->i_ino);
  FUNC_3(&VAR_1->flc_flock, "FLOCK");
  FUNC_3(&VAR_1->flc_posix, "POSIX");
  FUNC_3(&VAR_1->flc_lease, "LEASE");
 }
}
