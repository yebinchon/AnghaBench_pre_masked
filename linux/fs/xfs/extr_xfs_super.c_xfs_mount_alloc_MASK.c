
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kset; } ;
struct TYPE_4__ {TYPE_1__ kobject; } ;
struct xfs_mount {int m_finobt_nores; TYPE_2__ m_kobj; int m_cowblocks_work; int m_eofblocks_work; int m_reclaim_work; int m_active_trans; int m_growlock; int m_perag_lock; int m_perag_tree; int m_agirotor_lock; int m_sb_lock; struct super_block* m_super; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 struct xfs_mount* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct xfs_mount *
FUNC_6(
 struct super_block *VAR_6)
{
 struct xfs_mount *VAR_7;

 VAR_7 = FUNC_3(sizeof(struct xfs_mount), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->m_super = VAR_6;
 FUNC_5(&VAR_7->m_sb_lock);
 FUNC_5(&VAR_7->m_agirotor_lock);
 FUNC_1(&VAR_7->m_perag_tree, VAR_0);
 FUNC_5(&VAR_7->m_perag_lock);
 FUNC_4(&VAR_7->m_growlock);
 FUNC_2(&VAR_7->m_active_trans, 0);
 FUNC_0(&VAR_7->m_reclaim_work, VAR_5);
 FUNC_0(&VAR_7->m_eofblocks_work, VAR_3);
 FUNC_0(&VAR_7->m_cowblocks_work, VAR_2);
 VAR_7->m_kobj.kobject.kset = VAR_4;






 VAR_7->m_finobt_nores = 1;
 return VAR_7;
}
