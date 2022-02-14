
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
struct TYPE_7__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_2__ m_sb; } ;
struct xfs_buf {TYPE_1__* b_pag; struct xfs_mount* b_mount; } ;
struct xfs_agf {int agf_refcount_level; int agf_length; int agf_btreeblks; int agf_seqno; int * agf_levels; int agf_flcount; int agf_fllast; int agf_flfirst; int agf_freeblks; int agf_versionnum; int agf_magicnum; int agf_lsn; int agf_uuid; } ;
struct TYPE_6__ {int pag_agno; } ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct xfs_agf* FUNC_1 (struct xfs_buf*) ;
 int * VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct xfs_mount*) ;
 int FUNC_6 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct xfs_buf*,int ) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_12(
 struct xfs_buf *VAR_5)
{
 struct xfs_mount *VAR_6 = VAR_5->b_mount;
 struct xfs_agf *VAR_7 = FUNC_1(VAR_5);

 if (FUNC_7(&VAR_6->m_sb)) {
  if (!FUNC_4(&VAR_7->agf_uuid, &VAR_6->m_sb.sb_meta_uuid))
   return VAR_4;
  if (!FUNC_6(VAR_6,
    FUNC_3(FUNC_1(VAR_5)->agf_lsn)))
   return VAR_4;
 }

 if (!FUNC_11(VAR_5, VAR_7->agf_magicnum))
  return VAR_4;

 if (!(FUNC_0(FUNC_2(VAR_7->agf_versionnum)) &&
       FUNC_2(VAR_7->agf_freeblks) <= FUNC_2(VAR_7->agf_length) &&
       FUNC_2(VAR_7->agf_flfirst) < FUNC_5(VAR_6) &&
       FUNC_2(VAR_7->agf_fllast) < FUNC_5(VAR_6) &&
       FUNC_2(VAR_7->agf_flcount) <= FUNC_5(VAR_6)))
  return VAR_4;

 if (FUNC_2(VAR_7->agf_levels[VAR_0]) < 1 ||
     FUNC_2(VAR_7->agf_levels[VAR_1]) < 1 ||
     FUNC_2(VAR_7->agf_levels[VAR_0]) > VAR_3 ||
     FUNC_2(VAR_7->agf_levels[VAR_1]) > VAR_3)
  return VAR_4;

 if (FUNC_10(&VAR_6->m_sb) &&
     (FUNC_2(VAR_7->agf_levels[VAR_2]) < 1 ||
      FUNC_2(VAR_7->agf_levels[VAR_2]) > VAR_3))
  return VAR_4;







 if (VAR_5->b_pag && FUNC_2(VAR_7->agf_seqno) != VAR_5->b_pag->pag_agno)
  return VAR_4;

 if (FUNC_8(&VAR_6->m_sb) &&
     FUNC_2(VAR_7->agf_btreeblks) > FUNC_2(VAR_7->agf_length))
  return VAR_4;

 if (FUNC_9(&VAR_6->m_sb) &&
     (FUNC_2(VAR_7->agf_refcount_level) < 1 ||
      FUNC_2(VAR_7->agf_refcount_level) > VAR_3))
  return VAR_4;

 return ((void*)0);

}
