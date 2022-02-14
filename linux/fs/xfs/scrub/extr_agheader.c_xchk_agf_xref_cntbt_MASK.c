
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
typedef int xfs_agblock_t ;
struct TYPE_2__ {int agf_bp; int cnt_cur; } ;
struct xfs_scrub {TYPE_1__ sa; } ;
struct xfs_agf {scalar_t__ agf_freeblks; int agf_longest; } ;


 struct xfs_agf* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_scrub*,int ) ;
 int FUNC_4 (struct xfs_scrub*,int*,int *) ;
 int FUNC_5 (int ,int *,scalar_t__*,int*) ;
 int FUNC_6 (int ,int ,unsigned int,int*) ;

__attribute__((used)) static inline void
FUNC_7(
 struct xfs_scrub *VAR_0)
{
 struct xfs_agf *VAR_1 = FUNC_0(VAR_0->sa.agf_bp);
 xfs_agblock_t VAR_2;
 xfs_extlen_t VAR_3;
 int VAR_4;
 int VAR_5;

 if (!VAR_0->sa.cnt_cur)
  return;


 VAR_5 = FUNC_6(VAR_0->sa.cnt_cur, 0, -1U, &VAR_4);
 if (!FUNC_4(VAR_0, &VAR_5, &VAR_0->sa.cnt_cur))
  return;
 if (!VAR_4) {
  if (VAR_1->agf_freeblks != FUNC_2(0))
   FUNC_3(VAR_0, VAR_0->sa.agf_bp);
  return;
 }


 VAR_5 = FUNC_5(VAR_0->sa.cnt_cur, &VAR_2, &VAR_3, &VAR_4);
 if (!FUNC_4(VAR_0, &VAR_5, &VAR_0->sa.cnt_cur))
  return;
 if (!VAR_4 || VAR_3 != FUNC_1(VAR_1->agf_longest))
  FUNC_3(VAR_0, VAR_0->sa.agf_bp);
}
