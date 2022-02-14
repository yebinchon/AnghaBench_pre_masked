
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_ino_t ;
typedef scalar_t__ xfs_agino_t ;
struct TYPE_2__ {int fino_cur; } ;
struct xfs_scrub {TYPE_1__ sa; int mp; int sm; } ;
struct xfs_inobt_rec_incore {scalar_t__ ir_startino; int ir_free; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct xfs_scrub*,int ,int ) ;
 int FUNC_3 (struct xfs_scrub*,int*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct xfs_inobt_rec_incore*,int*) ;
 int FUNC_6 (int ,scalar_t__,int ,int*) ;

__attribute__((used)) static void
FUNC_7(
 struct xfs_scrub *VAR_2,
 xfs_ino_t VAR_3)
{
 struct xfs_inobt_rec_incore VAR_4;
 xfs_agino_t VAR_5;
 int VAR_6;
 int VAR_7;

 if (!VAR_2->sa.fino_cur || FUNC_4(VAR_2->sm))
  return;

 VAR_5 = FUNC_1(VAR_2->mp, VAR_3);





 VAR_7 = FUNC_6(VAR_2->sa.fino_cur, VAR_5, VAR_1,
   &VAR_6);
 if (!FUNC_3(VAR_2, &VAR_7, &VAR_2->sa.fino_cur) ||
     !VAR_6)
  return;

 VAR_7 = FUNC_5(VAR_2->sa.fino_cur, &VAR_4, &VAR_6);
 if (!FUNC_3(VAR_2, &VAR_7, &VAR_2->sa.fino_cur) ||
     !VAR_6)
  return;





 if (VAR_4.ir_startino > VAR_5 ||
     VAR_4.ir_startino + VAR_0 <= VAR_5)
  return;

 if (VAR_4.ir_free & FUNC_0(VAR_5 - VAR_4.ir_startino))
  FUNC_2(VAR_2, VAR_2->sa.fino_cur, 0);
}
