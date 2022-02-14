
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
typedef int xfs_agino_t ;
struct xfs_scrub_metadata {int sm_flags; int sm_agno; } ;
struct xfs_scrub {struct xfs_scrub_metadata* sm; struct xfs_mount* mp; } ;
struct xfs_perag {int pagi_count; scalar_t__ pagi_init; } ;
struct xfs_mount {int m_sb; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_2__ {int agf_freeblks; int agf_length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct xfs_buf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct xfs_mount*,int ,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct xfs_mount*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct xfs_mount*,int ) ;
 int FUNC_6 (struct xfs_mount*,int ,int*,int*) ;
 int FUNC_7 (struct xfs_mount*,int *,int ,int ,struct xfs_buf**) ;
 int FUNC_8 (struct xfs_mount*,scalar_t__) ;
 int FUNC_9 (struct xfs_buf*) ;
 int FUNC_10 (struct xfs_mount*,int *,int ,struct xfs_buf**) ;
 scalar_t__ FUNC_11 (struct xfs_mount*,int) ;
 struct xfs_perag* FUNC_12 (struct xfs_mount*,int ) ;
 int FUNC_13 (struct xfs_perag*) ;
 scalar_t__ FUNC_14 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (struct xfs_mount*,int ,int) ;

xfs_extlen_t
FUNC_21(
 struct xfs_scrub *VAR_5)
{
 struct xfs_mount *VAR_6 = VAR_5->mp;
 struct xfs_scrub_metadata *VAR_7 = VAR_5->sm;
 struct xfs_perag *VAR_8;
 struct xfs_buf *VAR_9;
 xfs_agino_t VAR_10 = VAR_1;
 xfs_extlen_t VAR_11 = VAR_0;
 xfs_extlen_t VAR_12;
 xfs_extlen_t VAR_13;
 xfs_extlen_t VAR_14;
 xfs_extlen_t VAR_15;
 xfs_extlen_t VAR_16;
 xfs_extlen_t VAR_17;
 int VAR_18;

 if (!(VAR_7->sm_flags & VAR_4))
  return 0;

 VAR_8 = FUNC_12(VAR_6, VAR_7->sm_agno);
 if (VAR_8->pagi_init) {

  VAR_10 = VAR_8->pagi_count;
 } else {

  VAR_18 = FUNC_10(VAR_6, ((void*)0), VAR_7->sm_agno, &VAR_9);
  if (!VAR_18) {
   VAR_10 = VAR_8->pagi_count;
   FUNC_9(VAR_9);
  }
 }


 VAR_18 = FUNC_7(VAR_6, ((void*)0), VAR_7->sm_agno, 0, &VAR_9);
 if (!VAR_18) {
  VAR_11 = FUNC_1(FUNC_0(VAR_9)->agf_length);
  VAR_13 = FUNC_1(FUNC_0(VAR_9)->agf_freeblks);
  VAR_12 = VAR_11 - VAR_13;
  FUNC_9(VAR_9);
 }
 FUNC_13(VAR_8);


 if (VAR_10 == VAR_1 ||
     !FUNC_20(VAR_6, VAR_7->sm_agno, VAR_10)) {
  xfs_agino_t VAR_19, VAR_20;

  FUNC_6(VAR_6, VAR_7->sm_agno, &VAR_19, &VAR_20);
  VAR_10 = VAR_20 - VAR_19 + 1;
 }


 if (VAR_11 == VAR_0 ||
     VAR_11 != FUNC_5(VAR_6, VAR_7->sm_agno) ||
     VAR_13 >= VAR_11) {
  VAR_11 = FUNC_5(VAR_6, VAR_7->sm_agno);
  VAR_13 = VAR_11;
  VAR_12 = VAR_11;
 }

 FUNC_3(VAR_6, VAR_7->sm_agno, VAR_10, VAR_11,
   VAR_13, VAR_12);






 VAR_14 = 2 * FUNC_8(VAR_6, VAR_13);
 if (FUNC_19(&VAR_6->m_sb))
  VAR_15 = FUNC_11(VAR_6, VAR_10 /
    VAR_3);
 else
  VAR_15 = FUNC_11(VAR_6, VAR_10 /
    VAR_2);
 if (FUNC_16(&VAR_6->m_sb))
  VAR_15 *= 2;
 if (FUNC_17(&VAR_6->m_sb))
  VAR_17 = FUNC_14(VAR_6, VAR_12);
 else
  VAR_17 = 0;
 if (FUNC_18(&VAR_6->m_sb)) {
  if (FUNC_17(&VAR_6->m_sb))
   VAR_16 = FUNC_15(VAR_6,
     (unsigned long long)VAR_11 * 2);
  else
   VAR_16 = FUNC_15(VAR_6, VAR_12);
 } else {
  VAR_16 = 0;
 }

 FUNC_4(VAR_6, VAR_7->sm_agno, VAR_14,
   VAR_15, VAR_16, VAR_17);

 return FUNC_2(FUNC_2(VAR_14, VAR_15), FUNC_2(VAR_16, VAR_17));
}
