
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mode; int i_gid; int i_uid; } ;
struct TYPE_6__ {int i_mode; int i_gid; int i_uid; } ;
struct gfs2_inode {TYPE_3__ i_inode; } ;
struct TYPE_4__ {scalar_t__ ar_suiddir; } ;
struct TYPE_5__ {TYPE_1__ sd_args; } ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(const struct gfs2_inode *VAR_3,
          struct inode *VAR_4)
{
 if (FUNC_0(&VAR_3->i_inode)->sd_args.ar_suiddir &&
     (VAR_3->i_inode.i_mode & VAR_2) &&
     !FUNC_4(VAR_3->i_inode.i_uid, VAR_0)) {
  if (FUNC_1(VAR_4->i_mode))
   VAR_4->i_mode |= VAR_2;
  else if (!FUNC_4(VAR_3->i_inode.i_uid, FUNC_3()))
   VAR_4->i_mode &= ~07111;
  VAR_4->i_uid = VAR_3->i_inode.i_uid;
 } else
  VAR_4->i_uid = FUNC_3();

 if (VAR_3->i_inode.i_mode & VAR_1) {
  if (FUNC_1(VAR_4->i_mode))
   VAR_4->i_mode |= VAR_1;
  VAR_4->i_gid = VAR_3->i_inode.i_gid;
 } else
  VAR_4->i_gid = FUNC_2();
}
