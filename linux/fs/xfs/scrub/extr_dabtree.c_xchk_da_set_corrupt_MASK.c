
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xfs_scrub {TYPE_1__* sm; } ;
struct TYPE_7__ {int geo; int whichfork; } ;
struct xchk_da_btree {TYPE_5__* state; TYPE_2__ dargs; struct xfs_scrub* sc; } ;
struct TYPE_9__ {TYPE_3__* blk; } ;
struct TYPE_10__ {TYPE_4__ path; } ;
struct TYPE_8__ {int blkno; } ;
struct TYPE_6__ {int sm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_scrub*,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(
 struct xchk_da_btree *VAR_2,
 int VAR_3)
{
 struct xfs_scrub *VAR_4 = VAR_2->sc;

 VAR_4->sm->sm_flags |= VAR_0;

 FUNC_0(VAR_4, VAR_2->dargs.whichfork,
   FUNC_1(VAR_2->dargs.geo,
    VAR_2->state->path.blk[VAR_3].blkno),
   VAR_1);
}
