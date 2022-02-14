
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct xfs_agi {void** agi_unlinked; void* agi_free_level; void* agi_free_root; int agi_uuid; void* agi_dirino; void* agi_newino; scalar_t__ agi_freecount; void* agi_level; void* agi_root; scalar_t__ agi_count; void* agi_length; void* agi_seqno; void* agi_versionnum; void* agi_magicnum; } ;
struct aghdr_init_data {int agno; int agsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfs_agi* FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_mount*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(
 struct xfs_mount *VAR_4,
 struct xfs_buf *VAR_5,
 struct aghdr_init_data *VAR_6)
{
 struct xfs_agi *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;

 VAR_7->agi_magicnum = FUNC_3(VAR_1);
 VAR_7->agi_versionnum = FUNC_3(VAR_3);
 VAR_7->agi_seqno = FUNC_3(VAR_6->agno);
 VAR_7->agi_length = FUNC_3(VAR_6->agsize);
 VAR_7->agi_count = 0;
 VAR_7->agi_root = FUNC_3(FUNC_2(VAR_4));
 VAR_7->agi_level = FUNC_3(1);
 VAR_7->agi_freecount = 0;
 VAR_7->agi_newino = FUNC_3(VAR_0);
 VAR_7->agi_dirino = FUNC_3(VAR_0);
 if (FUNC_5(&VAR_4->m_sb))
  FUNC_4(&VAR_7->agi_uuid, &VAR_4->m_sb.sb_meta_uuid);
 if (FUNC_6(&VAR_4->m_sb)) {
  VAR_7->agi_free_root = FUNC_3(FUNC_1(VAR_4));
  VAR_7->agi_free_level = FUNC_3(1);
 }
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_7->agi_unlinked[VAR_8] = FUNC_3(VAR_0);
}
