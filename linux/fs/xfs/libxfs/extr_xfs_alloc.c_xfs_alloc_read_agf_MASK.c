
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct xfs_perag {int pagf_init; scalar_t__ pagf_freeblks; scalar_t__ pagf_btreeblks; scalar_t__ pagf_flcount; scalar_t__ pagf_longest; scalar_t__* pagf_levels; int pagf_agflreset; scalar_t__ pagf_refcount_level; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int b_error; } ;
struct xfs_agf {int * agf_levels; int agf_longest; int agf_flcount; int agf_btreeblks; int agf_freeblks; int agf_refcount_level; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct xfs_agf* FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_mount*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_mount*,scalar_t__) ;
 int FUNC_5 (struct xfs_mount*,struct xfs_agf*) ;
 struct xfs_perag* FUNC_6 (struct xfs_mount*,scalar_t__) ;
 int FUNC_7 (struct xfs_perag*) ;
 int FUNC_8 (struct xfs_mount*,struct xfs_trans*,scalar_t__,int ,struct xfs_buf**) ;

int
FUNC_9(
 struct xfs_mount *VAR_6,
 struct xfs_trans *VAR_7,
 xfs_agnumber_t VAR_8,
 int VAR_9,
 struct xfs_buf **VAR_10)
{
 struct xfs_agf *VAR_11;
 struct xfs_perag *VAR_12;
 int VAR_13;

 FUNC_4(VAR_6, VAR_8);

 FUNC_0(VAR_8 != VAR_0);
 VAR_13 = FUNC_8(VAR_6, VAR_7, VAR_8,
   (VAR_9 & VAR_2) ? VAR_1 : 0,
   VAR_10);
 if (VAR_13)
  return VAR_13;
 if (!*VAR_10)
  return 0;
 FUNC_0(!(*VAR_10)->b_error);

 VAR_11 = FUNC_1(*VAR_10);
 VAR_12 = FUNC_6(VAR_6, VAR_8);
 if (!VAR_12->pagf_init) {
  VAR_12->pagf_freeblks = FUNC_3(VAR_11->agf_freeblks);
  VAR_12->pagf_btreeblks = FUNC_3(VAR_11->agf_btreeblks);
  VAR_12->pagf_flcount = FUNC_3(VAR_11->agf_flcount);
  VAR_12->pagf_longest = FUNC_3(VAR_11->agf_longest);
  VAR_12->pagf_levels[VAR_3] =
   FUNC_3(VAR_11->agf_levels[VAR_3]);
  VAR_12->pagf_levels[VAR_4] =
   FUNC_3(VAR_11->agf_levels[VAR_4]);
  VAR_12->pagf_levels[VAR_5] =
   FUNC_3(VAR_11->agf_levels[VAR_5]);
  VAR_12->pagf_refcount_level = FUNC_3(VAR_11->agf_refcount_level);
  VAR_12->pagf_init = 1;
  VAR_12->pagf_agflreset = FUNC_5(VAR_6, VAR_11);
 }
 FUNC_7(VAR_12);
 return 0;
}
