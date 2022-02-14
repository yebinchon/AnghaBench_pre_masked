
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_extlen_t ;
struct TYPE_4__ {int sb_logblocks; int sb_logstart; int sb_meta_uuid; } ;
struct xfs_mount {int m_ag_prealloc_blocks; TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct xfs_agf {void* agf_longest; void* agf_freeblks; void* agf_refcount_blocks; void* agf_refcount_level; void* agf_refcount_root; int agf_uuid; scalar_t__ agf_flcount; scalar_t__ agf_fllast; void* agf_flfirst; void* agf_rmap_blocks; void** agf_levels; void** agf_roots; void* agf_length; void* agf_seqno; void* agf_versionnum; void* agf_magicnum; } ;
struct aghdr_init_data {int agno; int agsize; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_mount*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct xfs_agf* FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_mount*) ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int FUNC_4 (struct xfs_mount*) ;
 int FUNC_5 (void**,int) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct xfs_mount*,struct aghdr_init_data*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct xfs_mount*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(
 struct xfs_mount *VAR_5,
 struct xfs_buf *VAR_6,
 struct aghdr_init_data *VAR_7)
{
 struct xfs_agf *VAR_8 = FUNC_1(VAR_6);
 xfs_extlen_t VAR_9;

 VAR_8->agf_magicnum = FUNC_6(VAR_0);
 VAR_8->agf_versionnum = FUNC_6(VAR_1);
 VAR_8->agf_seqno = FUNC_6(VAR_7->agno);
 VAR_8->agf_length = FUNC_6(VAR_7->agsize);
 VAR_8->agf_roots[VAR_2] = FUNC_6(FUNC_0(VAR_5));
 VAR_8->agf_roots[VAR_3] = FUNC_6(FUNC_2(VAR_5));
 VAR_8->agf_levels[VAR_2] = FUNC_6(1);
 VAR_8->agf_levels[VAR_3] = FUNC_6(1);
 if (FUNC_12(&VAR_5->m_sb)) {
  VAR_8->agf_roots[VAR_4] =
     FUNC_6(FUNC_4(VAR_5));
  VAR_8->agf_levels[VAR_4] = FUNC_6(1);
  VAR_8->agf_rmap_blocks = FUNC_6(1);
 }

 VAR_8->agf_flfirst = FUNC_6(1);
 VAR_8->agf_fllast = 0;
 VAR_8->agf_flcount = 0;
 VAR_9 = VAR_7->agsize - VAR_5->m_ag_prealloc_blocks;
 VAR_8->agf_freeblks = FUNC_6(VAR_9);
 VAR_8->agf_longest = FUNC_6(VAR_9);
 if (FUNC_10(&VAR_5->m_sb))
  FUNC_8(&VAR_8->agf_uuid, &VAR_5->m_sb.sb_meta_uuid);
 if (FUNC_11(&VAR_5->m_sb)) {
  VAR_8->agf_refcount_root = FUNC_6(
    FUNC_9(VAR_5));
  VAR_8->agf_refcount_level = FUNC_6(1);
  VAR_8->agf_refcount_blocks = FUNC_6(1);
 }

 if (FUNC_7(VAR_5, VAR_7)) {
  int64_t VAR_10 = VAR_5->m_sb.sb_logblocks;

  FUNC_5(&VAR_8->agf_freeblks, -VAR_10);
  VAR_8->agf_longest = FUNC_6(VAR_7->agsize -
   FUNC_3(VAR_5, VAR_5->m_sb.sb_logstart) - VAR_10);
 }
}
