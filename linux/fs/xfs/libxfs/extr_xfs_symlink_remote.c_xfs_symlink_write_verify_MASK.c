
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_failaddr_t ;
struct xfs_mount {int m_sb; } ;
struct xfs_dsymlink_hdr {int sl_lsn; } ;
struct TYPE_2__ {int li_lsn; } ;
struct xfs_buf_log_item {TYPE_1__ bli_item; } ;
struct xfs_buf {struct xfs_dsymlink_hdr* b_addr; struct xfs_buf_log_item* b_log_item; struct xfs_mount* b_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_buf*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct xfs_buf*) ;
 int FUNC_4 (struct xfs_buf*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_buf *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->b_mount;
 struct xfs_buf_log_item *VAR_4 = VAR_2->b_log_item;
 xfs_failaddr_t VAR_5;


 if (!FUNC_2(&VAR_3->m_sb))
  return;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5) {
  FUNC_4(VAR_2, -VAR_0, VAR_5);
  return;
 }

 if (VAR_4) {
  struct xfs_dsymlink_hdr *VAR_6 = VAR_2->b_addr;
  VAR_6->sl_lsn = FUNC_0(VAR_4->bli_item.li_lsn);
 }
 FUNC_1(VAR_2, VAR_1);
}
