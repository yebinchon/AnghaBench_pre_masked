
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agino_t ;
struct TYPE_2__ {int agi_bp; int ino_cur; } ;
struct xfs_scrub {TYPE_1__ sa; } ;
struct xfs_agi {int agi_freecount; int agi_count; } ;


 struct xfs_agi* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_scrub*,int ) ;
 int FUNC_3 (struct xfs_scrub*,int*,int *) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static inline void
FUNC_5(
 struct xfs_scrub *VAR_0)
{
 struct xfs_agi *VAR_1 = FUNC_0(VAR_0->sa.agi_bp);
 xfs_agino_t VAR_2;
 xfs_agino_t VAR_3;
 int VAR_4;

 if (!VAR_0->sa.ino_cur)
  return;

 VAR_4 = FUNC_4(VAR_0->sa.ino_cur, &VAR_2, &VAR_3);
 if (!FUNC_3(VAR_0, &VAR_4, &VAR_0->sa.ino_cur))
  return;
 if (FUNC_1(VAR_1->agi_count) != VAR_2 ||
     FUNC_1(VAR_1->agi_freecount) != VAR_3)
  FUNC_2(VAR_0, VAR_0->sa.agi_bp);
}
