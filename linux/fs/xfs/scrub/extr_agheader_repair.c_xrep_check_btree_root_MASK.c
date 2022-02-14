
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
struct xrep_find_ag_btree {scalar_t__ height; int root; } ;
struct xfs_scrub {TYPE_1__* sm; struct xfs_mount* mp; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_2__ {int sm_agno; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct xfs_mount*,int ,int ) ;

__attribute__((used)) static inline bool
FUNC_1(
 struct xfs_scrub *VAR_1,
 struct xrep_find_ag_btree *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_1->mp;
 xfs_agnumber_t VAR_4 = VAR_1->sm->sm_agno;

 return FUNC_0(VAR_3, VAR_4, VAR_2->root) &&
        VAR_2->height <= VAR_0;
}
