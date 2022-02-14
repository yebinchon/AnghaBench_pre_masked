
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_failaddr_t ;
struct xfs_mount {int m_sb; } ;
struct TYPE_4__ {int li_lsn; } ;
struct xfs_buf_log_item {TYPE_2__ bli_item; } ;
struct xfs_buf {struct xfs_attr3_leaf_hdr* b_addr; struct xfs_buf_log_item* b_log_item; struct xfs_mount* b_mount; } ;
struct TYPE_3__ {int lsn; } ;
struct xfs_attr3_leaf_hdr {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xfs_buf*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_buf *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->b_mount;
 struct xfs_buf_log_item *VAR_4 = VAR_2->b_log_item;
 struct xfs_attr3_leaf_hdr *VAR_5 = VAR_2->b_addr;
 xfs_failaddr_t VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6) {
  FUNC_4(VAR_2, -VAR_0, VAR_6);
  return;
 }

 if (!FUNC_3(&VAR_3->m_sb))
  return;

 if (VAR_4)
  VAR_5->info.lsn = FUNC_0(VAR_4->bli_item.li_lsn);

 FUNC_2(VAR_2, VAR_1);
}
