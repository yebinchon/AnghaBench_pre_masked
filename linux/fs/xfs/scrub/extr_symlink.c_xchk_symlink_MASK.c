
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_scrub {int buf; struct xfs_inode* ip; } ;
struct TYPE_4__ {scalar_t__ di_size; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct TYPE_5__ {int if_data; } ;
struct xfs_ifork {int if_flags; TYPE_2__ if_u1; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct xfs_inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct xfs_inode*) ;
 struct xfs_ifork* FUNC_3 (struct xfs_inode*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct xfs_scrub*,int ,int ,int*) ;
 int FUNC_6 (struct xfs_scrub*,int ,int ) ;
 int FUNC_7 (struct xfs_inode*,int ) ;

int
FUNC_8(
 struct xfs_scrub *VAR_4)
{
 struct xfs_inode *VAR_5 = VAR_4->ip;
 struct xfs_ifork *VAR_6;
 loff_t VAR_7;
 int VAR_8 = 0;

 if (!FUNC_0(FUNC_1(VAR_5)->i_mode))
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_5, VAR_1);
 VAR_7 = VAR_5->i_d.di_size;


 if (VAR_7 > VAR_3 || VAR_7 <= 0) {
  FUNC_6(VAR_4, VAR_1, 0);
  goto out;
 }


 if (VAR_6->if_flags & VAR_2) {
  if (VAR_7 > FUNC_2(VAR_5) ||
      VAR_7 > FUNC_4(VAR_6->if_u1.if_data, FUNC_2(VAR_5)))
   FUNC_6(VAR_4, VAR_1, 0);
  goto out;
 }


 VAR_8 = FUNC_7(VAR_4->ip, VAR_4->buf);
 if (!FUNC_5(VAR_4, VAR_1, 0, &VAR_8))
  goto out;
 if (FUNC_4(VAR_4->buf, VAR_3) < VAR_7)
  FUNC_6(VAR_4, VAR_1, 0);
out:
 return VAR_8;
}
