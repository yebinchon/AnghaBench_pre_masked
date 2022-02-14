
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
typedef int xfs_agino_t ;
typedef scalar_t__ xfs_agblock_t ;
struct TYPE_4__ {int agi_bp; int agfl_bp; int agf_bp; int agno; } ;
struct xfs_scrub {TYPE_2__ sa; struct xfs_mount* mp; TYPE_1__* sm; } ;
struct xfs_perag {int pagi_count; int pagi_freecount; } ;
struct xfs_mount {int m_sb; } ;
struct xfs_agi {scalar_t__ agi_pad32; int agi_freecount; int agi_count; int * agi_unlinked; int agi_dirino; int agi_newino; int agi_free_level; int agi_free_root; int agi_level; int agi_root; int agi_length; } ;
struct TYPE_3__ {int sm_agno; } ;


 int FUNC_0 (struct xfs_mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xfs_agi* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_scrub*,int ,int *,int *,int *) ;
 int FUNC_5 (struct xfs_scrub*) ;
 int FUNC_6 (struct xfs_scrub*,int ) ;
 int FUNC_7 (struct xfs_scrub*,int ) ;
 int FUNC_8 (struct xfs_scrub*,int ,int ,int*) ;
 scalar_t__ FUNC_9 (struct xfs_mount*,int ) ;
 int FUNC_10 (struct xfs_mount*,int ,int*,int*) ;
 struct xfs_perag* FUNC_11 (struct xfs_mount*,int ) ;
 int FUNC_12 (struct xfs_perag*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (struct xfs_mount*,int ,scalar_t__) ;
 int FUNC_15 (struct xfs_mount*,int ,int) ;

int
FUNC_16(
 struct xfs_scrub *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->mp;
 struct xfs_agi *VAR_4;
 struct xfs_perag *VAR_5;
 xfs_agnumber_t VAR_6;
 xfs_agblock_t VAR_7;
 xfs_agblock_t VAR_8;
 xfs_agino_t VAR_9;
 xfs_agino_t VAR_10;
 xfs_agino_t VAR_11;
 xfs_agino_t VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 VAR_6 = VAR_2->sa.agno = VAR_2->sm->sm_agno;
 VAR_15 = FUNC_4(VAR_2, VAR_6, &VAR_2->sa.agi_bp,
   &VAR_2->sa.agf_bp, &VAR_2->sa.agfl_bp);
 if (!FUNC_8(VAR_2, VAR_6, FUNC_0(VAR_2->mp), &VAR_15))
  goto out;
 FUNC_7(VAR_2, VAR_2->sa.agi_bp);

 VAR_4 = FUNC_1(VAR_2->sa.agi_bp);


 VAR_8 = FUNC_2(VAR_4->agi_length);
 if (VAR_8 != FUNC_9(VAR_3, VAR_6))
  FUNC_6(VAR_2, VAR_2->sa.agi_bp);


 VAR_7 = FUNC_2(VAR_4->agi_root);
 if (!FUNC_14(VAR_3, VAR_6, VAR_7))
  FUNC_6(VAR_2, VAR_2->sa.agi_bp);

 VAR_14 = FUNC_2(VAR_4->agi_level);
 if (VAR_14 <= 0 || VAR_14 > VAR_1)
  FUNC_6(VAR_2, VAR_2->sa.agi_bp);

 if (FUNC_13(&VAR_3->m_sb)) {
  VAR_7 = FUNC_2(VAR_4->agi_free_root);
  if (!FUNC_14(VAR_3, VAR_6, VAR_7))
   FUNC_6(VAR_2, VAR_2->sa.agi_bp);

  VAR_14 = FUNC_2(VAR_4->agi_free_level);
  if (VAR_14 <= 0 || VAR_14 > VAR_1)
   FUNC_6(VAR_2, VAR_2->sa.agi_bp);
 }


 FUNC_10(VAR_3, VAR_6, &VAR_10, &VAR_11);
 VAR_12 = FUNC_2(VAR_4->agi_count);
 if (VAR_12 > VAR_11 - VAR_10 + 1 ||
     VAR_12 < FUNC_2(VAR_4->agi_freecount))
  FUNC_6(VAR_2, VAR_2->sa.agi_bp);


 VAR_9 = FUNC_2(VAR_4->agi_newino);
 if (!FUNC_15(VAR_3, VAR_6, VAR_9))
  FUNC_6(VAR_2, VAR_2->sa.agi_bp);

 VAR_9 = FUNC_2(VAR_4->agi_dirino);
 if (!FUNC_15(VAR_3, VAR_6, VAR_9))
  FUNC_6(VAR_2, VAR_2->sa.agi_bp);


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_9 = FUNC_2(VAR_4->agi_unlinked[VAR_13]);
  if (!FUNC_15(VAR_3, VAR_6, VAR_9))
   FUNC_6(VAR_2, VAR_2->sa.agi_bp);
 }

 if (VAR_4->agi_pad32 != FUNC_3(0))
  FUNC_6(VAR_2, VAR_2->sa.agi_bp);


 VAR_5 = FUNC_11(VAR_3, VAR_6);
 if (VAR_5->pagi_count != FUNC_2(VAR_4->agi_count))
  FUNC_6(VAR_2, VAR_2->sa.agi_bp);
 if (VAR_5->pagi_freecount != FUNC_2(VAR_4->agi_freecount))
  FUNC_6(VAR_2, VAR_2->sa.agi_bp);
 FUNC_12(VAR_5);

 FUNC_5(VAR_2);
out:
 return VAR_15;
}
