
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_off_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_daddr_t ;
struct xfs_mount {TYPE_1__* m_super; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
typedef int sector_t ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_inode*) ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 int FUNC_2 (int ,int,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_inode*,int ) ;

int
FUNC_5(
 struct xfs_inode *VAR_1,
 xfs_fsblock_t VAR_2,
 xfs_off_t VAR_3)
{
 struct xfs_mount *VAR_4 = VAR_1->i_mount;
 xfs_daddr_t VAR_5 = FUNC_4(VAR_1, VAR_2);
 sector_t VAR_6 = FUNC_1(VAR_4, VAR_5);

 return FUNC_2(FUNC_3(FUNC_0(VAR_1)),
  VAR_6 << (VAR_4->m_super->s_blocksize_bits - 9),
  VAR_3 << (VAR_4->m_super->s_blocksize_bits - 9),
  VAR_0, 0);
}
