
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_sb {int dummy; } ;
struct xfs_mount {int m_sb; } ;
struct TYPE_4__ {int li_lsn; } ;
struct xfs_buf_log_item {TYPE_1__ bli_item; } ;
struct xfs_buf {struct xfs_buf_log_item* b_log_item; struct xfs_mount* b_mount; } ;
struct TYPE_5__ {int sb_lsn; } ;


 TYPE_2__* FUNC_0 (struct xfs_buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_sb*,TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_buf*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xfs_mount*,struct xfs_buf*,struct xfs_sb*) ;
 int FUNC_6 (struct xfs_mount*,struct xfs_buf*,struct xfs_sb*) ;
 int FUNC_7 (struct xfs_buf*,int,int ) ;

__attribute__((used)) static void
FUNC_8(
 struct xfs_buf *VAR_2)
{
 struct xfs_sb VAR_3;
 struct xfs_mount *VAR_4 = VAR_2->b_mount;
 struct xfs_buf_log_item *VAR_5 = VAR_2->b_log_item;
 int VAR_6;





 FUNC_1(&VAR_3, FUNC_0(VAR_2), 0);
 VAR_6 = FUNC_5(VAR_4, VAR_2, &VAR_3);
 if (VAR_6)
  goto out_error;
 VAR_6 = FUNC_6(VAR_4, VAR_2, &VAR_3);
 if (VAR_6)
  goto out_error;

 if (!FUNC_4(&VAR_4->m_sb))
  return;

 if (VAR_5)
  FUNC_0(VAR_2)->sb_lsn = FUNC_2(VAR_5->bli_item.li_lsn);

 FUNC_3(VAR_2, VAR_0);
 return;

out_error:
 FUNC_7(VAR_2, VAR_6, VAR_1);
}
