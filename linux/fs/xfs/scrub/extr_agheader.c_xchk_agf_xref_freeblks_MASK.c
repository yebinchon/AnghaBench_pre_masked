
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
struct TYPE_2__ {int agf_bp; int bno_cur; } ;
struct xfs_scrub {TYPE_1__ sa; } ;
struct xfs_agf {int agf_freeblks; } ;


 struct xfs_agf* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct xfs_scrub*,int ) ;
 int FUNC_3 (struct xfs_scrub*,int*,int *) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;

__attribute__((used)) static inline void
FUNC_5(
 struct xfs_scrub *VAR_1)
{
 struct xfs_agf *VAR_2 = FUNC_0(VAR_1->sa.agf_bp);
 xfs_extlen_t VAR_3 = 0;
 int VAR_4;

 if (!VAR_1->sa.bno_cur)
  return;

 VAR_4 = FUNC_4(VAR_1->sa.bno_cur,
   VAR_0, &VAR_3);
 if (!FUNC_3(VAR_1, &VAR_4, &VAR_1->sa.bno_cur))
  return;
 if (VAR_3 != FUNC_1(VAR_2->agf_freeblks))
  FUNC_2(VAR_1, VAR_1->sa.agf_bp);
}
