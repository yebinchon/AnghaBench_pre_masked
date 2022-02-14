
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int m_sb; } ;
struct xfs_inode {int i_pdquot; int i_gdquot; int i_udquot; int i_ino; struct xfs_mount* i_mount; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_mount*) ;
 int FUNC_3 (struct xfs_mount*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct xfs_inode*,int ) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_mount*,int ,int ,int ,int ,long,int) ;

int
FUNC_7(
 struct xfs_trans *VAR_5,
 struct xfs_inode *VAR_6,
 int64_t VAR_7,
 long VAR_8,
 uint VAR_9)
{
 struct xfs_mount *VAR_10 = VAR_6->i_mount;

 if (!FUNC_3(VAR_10) || !FUNC_2(VAR_10))
  return 0;
 if (FUNC_1(VAR_10))
  VAR_9 |= VAR_1;

 FUNC_0(!FUNC_4(&VAR_10->m_sb, VAR_6->i_ino));

 FUNC_0(FUNC_5(VAR_6, VAR_0));
 FUNC_0((VAR_9 & ~(VAR_2 | VAR_1)) ==
    VAR_4 ||
        (VAR_9 & ~(VAR_2 | VAR_1)) ==
    VAR_3);




 return FUNC_6(VAR_5, VAR_10,
      VAR_6->i_udquot, VAR_6->i_gdquot,
      VAR_6->i_pdquot,
      VAR_7, VAR_8, VAR_9);
}
