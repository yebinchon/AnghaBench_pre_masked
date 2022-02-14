
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int if_flags; } ;
struct inode {int i_mode; int i_rdev; int * i_op; int * i_fop; int i_sb; TYPE_1__* i_mapping; } ;
struct xfs_inode {TYPE_2__ i_df; struct inode i_vnode; } ;
struct TYPE_6__ {int m_sb; } ;
struct TYPE_4__ {int * a_ops; } ;


 int FUNC_0 (struct inode*) ;


 int VAR_0 ;

 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int VAR_10 ;

void
FUNC_4(
 struct xfs_inode *VAR_11)
{
 struct inode *VAR_12 = &VAR_11->i_vnode;

 switch (VAR_12->i_mode & VAR_0) {
 case 128:
  VAR_12->i_op = &VAR_9;
  VAR_12->i_fop = &VAR_7;
  if (FUNC_0(VAR_12))
   VAR_12->i_mapping->a_ops = &VAR_3;
  else
   VAR_12->i_mapping->a_ops = &VAR_2;
  break;
 case 130:
  if (FUNC_3(&FUNC_1(VAR_12->i_sb)->m_sb))
   VAR_12->i_op = &VAR_4;
  else
   VAR_12->i_op = &VAR_6;
  VAR_12->i_fop = &VAR_5;
  break;
 case 129:
  if (VAR_11->i_df.if_flags & VAR_1)
   VAR_12->i_op = &VAR_8;
  else
   VAR_12->i_op = &VAR_10;
  break;
 default:
  VAR_12->i_op = &VAR_9;
  FUNC_2(VAR_12, VAR_12->i_mode, VAR_12->i_rdev);
  break;
 }
}
