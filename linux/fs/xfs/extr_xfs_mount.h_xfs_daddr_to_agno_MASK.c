
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_rfsblock_t ;
typedef int xfs_daddr_t ;
typedef int xfs_agnumber_t ;
struct TYPE_2__ {int sb_agblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 int FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline xfs_agnumber_t
FUNC_2(struct xfs_mount *VAR_0, xfs_daddr_t VAR_1)
{
 xfs_rfsblock_t VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_2, VAR_0->m_sb.sb_agblocks);
 return (xfs_agnumber_t) VAR_2;
}
