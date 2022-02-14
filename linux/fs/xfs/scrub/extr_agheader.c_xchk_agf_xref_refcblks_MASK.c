
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agblock_t ;
struct TYPE_2__ {int agf_bp; int refc_cur; } ;
struct xfs_scrub {TYPE_1__ sa; } ;
struct xfs_agf {int agf_refcount_blocks; } ;


 struct xfs_agf* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_scrub*,int ) ;
 int FUNC_3 (struct xfs_scrub*,int*,int *) ;
 int FUNC_4 (int ,scalar_t__*) ;

__attribute__((used)) static inline void
FUNC_5(
 struct xfs_scrub *VAR_0)
{
 struct xfs_agf *VAR_1 = FUNC_0(VAR_0->sa.agf_bp);
 xfs_agblock_t VAR_2;
 int VAR_3;

 if (!VAR_0->sa.refc_cur)
  return;

 VAR_3 = FUNC_4(VAR_0->sa.refc_cur, &VAR_2);
 if (!FUNC_3(VAR_0, &VAR_3, &VAR_0->sa.refc_cur))
  return;
 if (VAR_2 != FUNC_1(VAR_1->agf_refcount_blocks))
  FUNC_2(VAR_0, VAR_0->sa.agf_bp);
}
