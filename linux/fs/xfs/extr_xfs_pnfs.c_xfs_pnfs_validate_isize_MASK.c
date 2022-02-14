
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_off_t ;
struct xfs_inode {int i_mount; } ;
struct xfs_bmbt_irec {scalar_t__ br_startblock; scalar_t__ br_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xfs_inode*,int ,int,struct xfs_bmbt_irec*,int*,int ) ;
 int FUNC_2 (struct xfs_inode*,int ) ;
 int FUNC_3 (struct xfs_inode*,int ) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_inode *VAR_5,
 xfs_off_t VAR_6)
{
 struct xfs_bmbt_irec VAR_7;
 int VAR_8 = 1;
 int VAR_9 = 0;

 FUNC_2(VAR_5, VAR_4);
 VAR_9 = FUNC_1(VAR_5, FUNC_0(VAR_5->i_mount, VAR_6 - 1), 1,
    &VAR_7, &VAR_8, 0);
 FUNC_3(VAR_5, VAR_4);
 if (VAR_9)
  return VAR_9;

 if (VAR_7.br_startblock == VAR_2 ||
     VAR_7.br_startblock == VAR_0 ||
     VAR_7.br_state == VAR_3)
  return -VAR_1;
 return 0;
}
