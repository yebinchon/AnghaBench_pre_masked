
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct xfs_agfl {int agfl_uuid; void* agfl_seqno; void* agfl_magicnum; } ;
struct aghdr_init_data {int agno; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfs_agfl* FUNC_0 (struct xfs_buf*) ;
 void** FUNC_1 (struct xfs_mount*,struct xfs_buf*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct xfs_mount*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(
 struct xfs_mount *VAR_2,
 struct xfs_buf *VAR_3,
 struct aghdr_init_data *VAR_4)
{
 struct xfs_agfl *VAR_5 = FUNC_0(VAR_3);
 __be32 *VAR_6;
 int VAR_7;

 if (FUNC_5(&VAR_2->m_sb)) {
  VAR_5->agfl_magicnum = FUNC_2(VAR_1);
  VAR_5->agfl_seqno = FUNC_2(VAR_4->agno);
  FUNC_3(&VAR_5->agfl_uuid, &VAR_2->m_sb.sb_meta_uuid);
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3);
 for (VAR_7 = 0; VAR_7 < FUNC_4(VAR_2); VAR_7++)
  VAR_6[VAR_7] = FUNC_2(VAR_0);
}
