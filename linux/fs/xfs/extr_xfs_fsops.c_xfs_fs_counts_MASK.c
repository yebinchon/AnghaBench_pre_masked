
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sb_frextents; } ;
struct TYPE_7__ {void* m_alloc_set_aside; int m_sb_lock; TYPE_1__ m_sb; int m_fdblocks; int m_ifree; int m_icount; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_8__ {int freertx; void* freedata; void* freeino; void* allocino; } ;
typedef TYPE_3__ xfs_fsop_counts_t ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(
 xfs_mount_t *VAR_0,
 xfs_fsop_counts_t *VAR_1)
{
 VAR_1->allocino = FUNC_0(&VAR_0->m_icount);
 VAR_1->freeino = FUNC_0(&VAR_0->m_ifree);
 VAR_1->freedata = FUNC_0(&VAR_0->m_fdblocks) -
      VAR_0->m_alloc_set_aside;

 FUNC_1(&VAR_0->m_sb_lock);
 VAR_1->freertx = VAR_0->m_sb.sb_frextents;
 FUNC_2(&VAR_0->m_sb_lock);
}
