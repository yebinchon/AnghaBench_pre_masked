
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {TYPE_1__* t_mountp; } ;
struct xfs_bmbt_irec {int br_blockcount; int br_startblock; } ;
struct TYPE_2__ {int m_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_trans*,int ,int ,int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(
 struct xfs_trans *VAR_1,
 struct xfs_bmbt_irec *VAR_2)
{
 if (!FUNC_1(&VAR_1->t_mountp->m_sb))
  return;

 FUNC_0(VAR_1, VAR_0, VAR_2->br_startblock,
   VAR_2->br_blockcount);
}
