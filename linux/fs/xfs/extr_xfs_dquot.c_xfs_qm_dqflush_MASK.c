
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_failaddr_t ;
typedef int xfs_disk_dquot_t ;
struct xfs_mount {int m_sb; int m_ail; TYPE_1__* m_quotainfo; int m_ddev_targp; } ;
struct xfs_log_item {int li_lsn; } ;
struct TYPE_4__ {struct xfs_log_item qli_item; int qli_flush_lsn; } ;
struct xfs_dquot {int q_bufoffset; TYPE_2__ q_logitem; int dq_flags; int q_core; int q_blkno; int q_flush; struct xfs_mount* q_mount; } ;
struct xfs_disk_dquot {int d_id; } ;
struct xfs_dqblk {int dd_lsn; struct xfs_disk_dquot dd_diskdq; } ;
struct xfs_buf {struct xfs_dqblk* b_addr; } ;
struct TYPE_3__ {int qi_dqchunklen; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xfs_dquot*) ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct xfs_disk_dquot*,int *,int) ;
 int FUNC_7 (struct xfs_dquot*) ;
 int FUNC_8 (struct xfs_dquot*) ;
 int FUNC_9 (struct xfs_dquot*) ;
 int FUNC_10 (struct xfs_mount*,char*,int ,scalar_t__) ;
 int FUNC_11 (struct xfs_buf*,int ,struct xfs_log_item*) ;
 scalar_t__ FUNC_12 (struct xfs_buf*) ;
 int FUNC_13 (struct xfs_buf*) ;
 scalar_t__ FUNC_14 (struct xfs_mount*,struct xfs_dqblk*,int ,int ) ;
 int FUNC_15 (struct xfs_dquot*) ;
 int VAR_4 ;
 int FUNC_16 (struct xfs_mount*,int ) ;
 int FUNC_17 (struct xfs_mount*,int ) ;
 int VAR_5 ;
 int FUNC_18 (struct xfs_dquot*) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int ,int *,int *) ;
 int FUNC_21 (struct xfs_log_item*,int ) ;
 int FUNC_22 (struct xfs_mount*,int *,int ,int ,int ,int ,struct xfs_buf**,int *) ;
 int FUNC_23 (char*,int,int ) ;

int
FUNC_24(
 struct xfs_dquot *VAR_6,
 struct xfs_buf **VAR_7)
{
 struct xfs_mount *VAR_8 = VAR_6->q_mount;
 struct xfs_buf *VAR_9;
 struct xfs_dqblk *VAR_10;
 struct xfs_disk_dquot *VAR_11;
 xfs_failaddr_t VAR_12;
 int VAR_13;

 FUNC_0(FUNC_1(VAR_6));
 FUNC_0(!FUNC_4(&VAR_6->q_flush));

 FUNC_7(VAR_6);

 *VAR_7 = ((void*)0);

 FUNC_18(VAR_6);
 if (FUNC_2(VAR_8)) {
  struct xfs_log_item *VAR_14 = &VAR_6->q_logitem.qli_item;
  VAR_6->dq_flags &= ~VAR_3;

  FUNC_21(VAR_14, VAR_1);

  VAR_13 = -VAR_0;
  goto out_unlock;
 }




 VAR_13 = FUNC_22(VAR_8, ((void*)0), VAR_8->m_ddev_targp, VAR_6->q_blkno,
       VAR_8->m_quotainfo->qi_dqchunklen, 0, &VAR_9,
       &VAR_4);
 if (VAR_13)
  goto out_unlock;




 VAR_10 = VAR_9->b_addr + VAR_6->q_bufoffset;
 VAR_11 = &VAR_10->dd_diskdq;




 VAR_12 = FUNC_14(VAR_8, VAR_10, FUNC_3(VAR_11->d_id), 0);
 if (VAR_12) {
  FUNC_10(VAR_8, "corrupt dquot ID 0x%x in memory at %pS",
    FUNC_3(VAR_11->d_id), VAR_12);
  FUNC_13(VAR_9);
  FUNC_15(VAR_6);
  FUNC_16(VAR_8, VAR_1);
  return -VAR_0;
 }


 FUNC_6(VAR_11, &VAR_6->q_core, sizeof(xfs_disk_dquot_t));




 VAR_6->dq_flags &= ~VAR_3;

 FUNC_20(VAR_8->m_ail, &VAR_6->q_logitem.qli_flush_lsn,
     &VAR_6->q_logitem.qli_item.li_lsn);
 if (FUNC_19(&VAR_8->m_sb)) {
  VAR_10->dd_lsn = FUNC_5(VAR_6->q_logitem.qli_item.li_lsn);
  FUNC_23((char *)VAR_10, sizeof(struct xfs_dqblk),
     VAR_2);
 }





 FUNC_11(VAR_9, VAR_5,
      &VAR_6->q_logitem.qli_item);





 if (FUNC_12(VAR_9)) {
  FUNC_9(VAR_6);
  FUNC_17(VAR_8, 0);
 }

 FUNC_8(VAR_6);
 *VAR_7 = VAR_9;
 return 0;

out_unlock:
 FUNC_15(VAR_6);
 return -VAR_0;
}
