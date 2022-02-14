
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int if_broot; } ;
struct TYPE_5__ {scalar_t__ di_format; scalar_t__ di_nextents; } ;
struct xfs_inode {TYPE_3__ i_df; TYPE_2__ i_d; TYPE_1__* i_mount; } ;
struct TYPE_4__ {int m_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct xfs_inode*) ;
 scalar_t__ FUNC_2 (struct xfs_inode*,int ) ;
 scalar_t__ FUNC_3 (struct xfs_inode*,int ) ;
 scalar_t__ FUNC_4 (struct xfs_inode*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(
 struct xfs_inode *VAR_5,
 struct xfs_inode *VAR_6)
{


 if (VAR_5->i_d.di_format == VAR_4 ||
     VAR_6->i_d.di_format == VAR_4)
  return -VAR_0;





 if (VAR_5->i_d.di_nextents < VAR_6->i_d.di_nextents)
  return -VAR_0;





 if (FUNC_5(&VAR_5->i_mount->m_sb))
  return 0;






 if (VAR_5->i_d.di_format == VAR_3 &&
     VAR_6->i_d.di_format == VAR_2)
  return -VAR_0;


 if (VAR_6->i_d.di_format == VAR_3 &&
     FUNC_3(VAR_6, VAR_1) >
   FUNC_2(VAR_5, VAR_1))
  return -VAR_0;


 if (VAR_5->i_d.di_format == VAR_3 &&
     FUNC_3(VAR_5, VAR_1) >
   FUNC_2(VAR_6, VAR_1))
  return -VAR_0;
 if (VAR_6->i_d.di_format == VAR_2) {
  if (FUNC_4(VAR_5) &&
      FUNC_0(VAR_6->i_df.if_broot) > FUNC_1(VAR_5))
   return -VAR_0;
  if (FUNC_3(VAR_6, VAR_1) <=
      FUNC_2(VAR_5, VAR_1))
   return -VAR_0;
 }


 if (VAR_5->i_d.di_format == VAR_2) {
  if (FUNC_4(VAR_6) &&
      FUNC_0(VAR_5->i_df.if_broot) > FUNC_1(VAR_6))
   return -VAR_0;
  if (FUNC_3(VAR_5, VAR_1) <=
      FUNC_2(VAR_6, VAR_1))
   return -VAR_0;
 }

 return 0;
}
