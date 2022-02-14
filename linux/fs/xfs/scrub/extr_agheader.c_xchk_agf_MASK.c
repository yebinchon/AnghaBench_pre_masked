
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
typedef scalar_t__ xfs_agblock_t ;
struct TYPE_4__ {int agf_bp; int agfl_bp; int agi_bp; int agno; } ;
struct xfs_scrub {TYPE_2__ sa; struct xfs_mount* mp; TYPE_1__* sm; } ;
struct xfs_perag {void* pagf_freeblks; void* pagf_flcount; void* pagf_btreeblks; } ;
struct xfs_mount {int m_sb; } ;
struct xfs_agf {int agf_btreeblks; int agf_flcount; int agf_freeblks; int agf_fllast; int agf_flfirst; int agf_refcount_level; int agf_refcount_root; int * agf_levels; int * agf_roots; int agf_length; } ;
struct TYPE_3__ {int sm_agno; } ;


 int FUNC_0 (struct xfs_mount*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct xfs_agf* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_scrub*,int ,int *,int *,int *) ;
 int FUNC_4 (struct xfs_scrub*) ;
 int FUNC_5 (struct xfs_scrub*,int ) ;
 int FUNC_6 (struct xfs_scrub*,int ) ;
 int FUNC_7 (struct xfs_scrub*,int ,int ,int*) ;
 scalar_t__ FUNC_8 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_9 (struct xfs_mount*) ;
 struct xfs_perag* FUNC_10 (struct xfs_mount*,int ) ;
 int FUNC_11 (struct xfs_perag*) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (struct xfs_mount*,int ,scalar_t__) ;

int
FUNC_15(
 struct xfs_scrub *VAR_4)
{
 struct xfs_mount *VAR_5 = VAR_4->mp;
 struct xfs_agf *VAR_6;
 struct xfs_perag *VAR_7;
 xfs_agnumber_t VAR_8;
 xfs_agblock_t VAR_9;
 xfs_agblock_t VAR_10;
 xfs_agblock_t VAR_11;
 xfs_agblock_t VAR_12;
 xfs_agblock_t VAR_13;
 xfs_agblock_t VAR_14;
 int VAR_15;
 int VAR_16 = 0;

 VAR_8 = VAR_4->sa.agno = VAR_4->sm->sm_agno;
 VAR_16 = FUNC_3(VAR_4, VAR_8, &VAR_4->sa.agi_bp,
   &VAR_4->sa.agf_bp, &VAR_4->sa.agfl_bp);
 if (!FUNC_7(VAR_4, VAR_8, FUNC_0(VAR_4->mp), &VAR_16))
  goto out;
 FUNC_6(VAR_4, VAR_4->sa.agf_bp);

 VAR_6 = FUNC_1(VAR_4->sa.agf_bp);


 VAR_10 = FUNC_2(VAR_6->agf_length);
 if (VAR_10 != FUNC_8(VAR_5, VAR_8))
  FUNC_5(VAR_4, VAR_4->sa.agf_bp);


 VAR_9 = FUNC_2(VAR_6->agf_roots[VAR_0]);
 if (!FUNC_14(VAR_5, VAR_8, VAR_9))
  FUNC_5(VAR_4, VAR_4->sa.agf_bp);

 VAR_9 = FUNC_2(VAR_6->agf_roots[VAR_1]);
 if (!FUNC_14(VAR_5, VAR_8, VAR_9))
  FUNC_5(VAR_4, VAR_4->sa.agf_bp);

 VAR_15 = FUNC_2(VAR_6->agf_levels[VAR_0]);
 if (VAR_15 <= 0 || VAR_15 > VAR_3)
  FUNC_5(VAR_4, VAR_4->sa.agf_bp);

 VAR_15 = FUNC_2(VAR_6->agf_levels[VAR_1]);
 if (VAR_15 <= 0 || VAR_15 > VAR_3)
  FUNC_5(VAR_4, VAR_4->sa.agf_bp);

 if (FUNC_13(&VAR_5->m_sb)) {
  VAR_9 = FUNC_2(VAR_6->agf_roots[VAR_2]);
  if (!FUNC_14(VAR_5, VAR_8, VAR_9))
   FUNC_5(VAR_4, VAR_4->sa.agf_bp);

  VAR_15 = FUNC_2(VAR_6->agf_levels[VAR_2]);
  if (VAR_15 <= 0 || VAR_15 > VAR_3)
   FUNC_5(VAR_4, VAR_4->sa.agf_bp);
 }

 if (FUNC_12(&VAR_5->m_sb)) {
  VAR_9 = FUNC_2(VAR_6->agf_refcount_root);
  if (!FUNC_14(VAR_5, VAR_8, VAR_9))
   FUNC_5(VAR_4, VAR_4->sa.agf_bp);

  VAR_15 = FUNC_2(VAR_6->agf_refcount_level);
  if (VAR_15 <= 0 || VAR_15 > VAR_3)
   FUNC_5(VAR_4, VAR_4->sa.agf_bp);
 }


 VAR_11 = FUNC_2(VAR_6->agf_flfirst);
 VAR_12 = FUNC_2(VAR_6->agf_fllast);
 VAR_13 = FUNC_2(VAR_6->agf_flcount);
 if (VAR_12 > VAR_11)
  VAR_14 = VAR_12 - VAR_11 + 1;
 else
  VAR_14 = FUNC_9(VAR_5) - VAR_11 + VAR_12 + 1;
 if (VAR_13 != 0 && VAR_14 != VAR_13)
  FUNC_5(VAR_4, VAR_4->sa.agf_bp);


 VAR_7 = FUNC_10(VAR_5, VAR_8);
 if (VAR_7->pagf_freeblks != FUNC_2(VAR_6->agf_freeblks))
  FUNC_5(VAR_4, VAR_4->sa.agf_bp);
 if (VAR_7->pagf_flcount != FUNC_2(VAR_6->agf_flcount))
  FUNC_5(VAR_4, VAR_4->sa.agf_bp);
 if (VAR_7->pagf_btreeblks != FUNC_2(VAR_6->agf_btreeblks))
  FUNC_5(VAR_4, VAR_4->sa.agf_bp);
 FUNC_11(VAR_7);

 FUNC_4(VAR_4);
out:
 return VAR_16;
}
