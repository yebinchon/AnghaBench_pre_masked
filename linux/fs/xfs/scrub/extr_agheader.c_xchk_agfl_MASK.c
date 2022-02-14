
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
typedef int xfs_agblock_t ;
struct TYPE_4__ {int agf_bp; int agfl_bp; int agi_bp; int agno; } ;
struct xfs_scrub {TYPE_2__ sa; int mp; TYPE_1__* sm; } ;
struct xfs_agf {int agf_flcount; } ;
struct xchk_agfl_info {unsigned int sz_entries; scalar_t__* entries; unsigned int nr_entries; struct xfs_scrub* sc; } ;
typedef int sai ;
struct TYPE_3__ {int sm_flags; int sm_agno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct xfs_agf* FUNC_1 (int ) ;
 int VAR_4 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int,int ) ;
 int FUNC_5 (struct xchk_agfl_info*,int ,int) ;
 int FUNC_6 (scalar_t__*,unsigned int,int,int ,int *) ;
 int FUNC_7 (struct xfs_scrub*,int ,int *,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct xfs_scrub*) ;
 int FUNC_9 (struct xfs_scrub*,int ) ;
 int FUNC_10 (struct xfs_scrub*,int ) ;
 int FUNC_11 (struct xfs_scrub*,int ,int ,int*) ;
 unsigned int FUNC_12 (int ) ;
 int FUNC_13 (int ,struct xfs_agf*,int ,int ,struct xchk_agfl_info*) ;

int
FUNC_14(
 struct xfs_scrub *VAR_7)
{
 struct xchk_agfl_info VAR_8;
 struct xfs_agf *VAR_9;
 xfs_agnumber_t VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_10 = VAR_7->sa.agno = VAR_7->sm->sm_agno;
 VAR_13 = FUNC_7(VAR_7, VAR_10, &VAR_7->sa.agi_bp,
   &VAR_7->sa.agf_bp, &VAR_7->sa.agfl_bp);
 if (!FUNC_11(VAR_7, VAR_10, FUNC_0(VAR_7->mp), &VAR_13))
  goto out;
 if (!VAR_7->sa.agf_bp)
  return -VAR_1;
 FUNC_10(VAR_7, VAR_7->sa.agfl_bp);

 FUNC_8(VAR_7);

 if (VAR_7->sm->sm_flags & VAR_4)
  goto out;


 VAR_9 = FUNC_1(VAR_7->sa.agf_bp);
 VAR_11 = FUNC_2(VAR_9->agf_flcount);
 if (VAR_11 > FUNC_12(VAR_7->mp)) {
  FUNC_9(VAR_7, VAR_7->sa.agf_bp);
  goto out;
 }
 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.sc = VAR_7;
 VAR_8.sz_entries = VAR_11;
 VAR_8.entries = FUNC_4(sizeof(xfs_agblock_t) * VAR_11,
   VAR_3);
 if (!VAR_8.entries) {
  VAR_13 = -VAR_2;
  goto out;
 }


 VAR_13 = FUNC_13(VAR_7->mp, FUNC_1(VAR_7->sa.agf_bp),
   VAR_7->sa.agfl_bp, VAR_6, &VAR_8);
 if (VAR_13 == -VAR_0) {
  VAR_13 = 0;
  goto out_free;
 }
 if (VAR_13)
  goto out_free;

 if (VAR_11 != VAR_8.nr_entries) {
  FUNC_9(VAR_7, VAR_7->sa.agf_bp);
  goto out_free;
 }


 FUNC_6(VAR_8.entries, VAR_8.nr_entries, sizeof(VAR_8.entries[0]),
   VAR_5, ((void*)0));
 for (VAR_12 = 1; VAR_12 < VAR_8.nr_entries; VAR_12++) {
  if (VAR_8.entries[VAR_12] == VAR_8.entries[VAR_12 - 1]) {
   FUNC_9(VAR_7, VAR_7->sa.agf_bp);
   break;
  }
 }

out_free:
 FUNC_3(VAR_8.entries);
out:
 return VAR_13;
}
