
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_extlen_t ;
typedef int xfs_agblock_t ;
struct TYPE_2__ {int rmap_cur; } ;
struct xfs_scrub {TYPE_1__ sa; int sm; } ;
struct xfs_owner_info {int dummy; } ;


 int FUNC_0 (struct xfs_scrub*,int ,int ) ;
 int FUNC_1 (struct xfs_scrub*,int*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,struct xfs_owner_info const*,int*) ;

__attribute__((used)) static inline void
FUNC_4(
 struct xfs_scrub *VAR_0,
 xfs_agblock_t VAR_1,
 xfs_extlen_t VAR_2,
 const struct xfs_owner_info *VAR_3,
 bool VAR_4)
{
 bool VAR_5;
 int VAR_6;

 if (!VAR_0->sa.rmap_cur || FUNC_2(VAR_0->sm))
  return;

 VAR_6 = FUNC_3(VAR_0->sa.rmap_cur, VAR_1, VAR_2, VAR_3,
   &VAR_5);
 if (!FUNC_1(VAR_0, &VAR_6, &VAR_0->sa.rmap_cur))
  return;
 if (VAR_5 != VAR_4)
  FUNC_0(VAR_0, VAR_0->sa.rmap_cur, 0);
}
