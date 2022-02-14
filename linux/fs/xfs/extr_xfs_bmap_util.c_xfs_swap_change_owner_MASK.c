
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int dummy; } ;
struct xfs_inode {int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfs_trans*,struct xfs_inode*,int ,int ,int *) ;
 int FUNC_1 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_2 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_3 (struct xfs_trans**) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_trans **VAR_3,
 struct xfs_inode *VAR_4,
 struct xfs_inode *VAR_5)
{
 int VAR_6;
 struct xfs_trans *VAR_7 = *VAR_3;

 do {
  VAR_6 = FUNC_0(VAR_7, VAR_4, VAR_1, VAR_4->i_ino,
           ((void*)0));

  if (VAR_6 != -VAR_0)
   break;

  VAR_6 = FUNC_3(VAR_3);
  if (VAR_6)
   break;
  VAR_7 = *VAR_3;





  FUNC_1(VAR_7, VAR_4, 0);
  FUNC_1(VAR_7, VAR_5, 0);
  FUNC_2(VAR_7, VAR_4, VAR_2);
  FUNC_2(VAR_7, VAR_5, VAR_2);
 } while (1);

 return VAR_6;
}
