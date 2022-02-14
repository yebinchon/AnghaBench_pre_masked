
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xfs_qoff_logitem_t ;
struct TYPE_11__ {int sb_qflags; } ;
struct TYPE_12__ {int m_qflags; int m_sb_lock; TYPE_1__ m_sb; struct xfs_quotainfo* m_quotainfo; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int uint ;
struct xfs_quotainfo {int qi_quotaofflock; int * qi_pquotaip; int * qi_gquotaip; int * qi_uquotaip; } ;


 int FUNC_0 (struct xfs_quotainfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int **,int) ;
 int FUNC_11 (TYPE_2__*,int *,int) ;
 int FUNC_12 (TYPE_2__*,int) ;

int
FUNC_13(
 xfs_mount_t *VAR_19,
 uint VAR_20)
{
 struct xfs_quotainfo *VAR_21 = VAR_19->m_quotainfo;
 uint VAR_22;
 int VAR_23;
 uint VAR_24;
 xfs_qoff_logitem_t *VAR_25;






 if ((VAR_19->m_qflags & VAR_20) == 0)
  return -VAR_0;
 VAR_23 = 0;

 VAR_20 &= (VAR_2 | VAR_3);







 FUNC_0(VAR_21);
 FUNC_1(&VAR_21->qi_quotaofflock);




 if ((VAR_20 & VAR_2) == 0) {
  VAR_19->m_qflags &= ~(VAR_20);

  FUNC_3(&VAR_19->m_sb_lock);
  VAR_19->m_sb.sb_qflags = VAR_19->m_qflags;
  FUNC_4(&VAR_19->m_sb_lock);
  FUNC_2(&VAR_21->qi_quotaofflock);


  return FUNC_12(VAR_19, 0);
 }

 VAR_22 = 0;
 VAR_24 = 0;





 if (VAR_20 & VAR_15) {
  VAR_22 |= VAR_14;
  VAR_20 |= (VAR_17 | VAR_18);
  VAR_24 |= VAR_16;
 }
 if (VAR_20 & VAR_4) {
  VAR_22 |= VAR_12;
  VAR_20 |= (VAR_6 | VAR_7);
  VAR_24 |= VAR_5;
 }
 if (VAR_20 & VAR_8) {
  VAR_22 |= VAR_13;
  VAR_20 |= (VAR_10 | VAR_11);
  VAR_24 |= VAR_9;
 }





 if ((VAR_19->m_qflags & VAR_20) == 0)
  goto out_unlock;






 VAR_23 = FUNC_10(VAR_19, &VAR_25, VAR_20);
 if (VAR_23)
  goto out_unlock;
 VAR_19->m_qflags &= ~VAR_24;
 FUNC_9(VAR_19, VAR_20);






 VAR_19->m_qflags &= ~VAR_20;





 FUNC_8(VAR_19, VAR_22);
 VAR_23 = FUNC_11(VAR_19, VAR_25, VAR_20);
 if (VAR_23) {

  FUNC_5(VAR_19, VAR_1);
  goto out_unlock;
 }




 if (VAR_19->m_qflags == 0) {
  FUNC_2(&VAR_21->qi_quotaofflock);
  FUNC_7(VAR_19);
  return 0;
 }




 if ((VAR_22 & VAR_14) && VAR_21->qi_uquotaip) {
  FUNC_6(VAR_21->qi_uquotaip);
  VAR_21->qi_uquotaip = ((void*)0);
 }
 if ((VAR_22 & VAR_12) && VAR_21->qi_gquotaip) {
  FUNC_6(VAR_21->qi_gquotaip);
  VAR_21->qi_gquotaip = ((void*)0);
 }
 if ((VAR_22 & VAR_13) && VAR_21->qi_pquotaip) {
  FUNC_6(VAR_21->qi_pquotaip);
  VAR_21->qi_pquotaip = ((void*)0);
 }

out_unlock:
 FUNC_2(&VAR_21->qi_quotaofflock);
 return VAR_23;
}
