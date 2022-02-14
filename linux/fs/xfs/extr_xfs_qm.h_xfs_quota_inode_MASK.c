
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* m_quotainfo; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int uint ;
struct xfs_inode {int dummy; } ;
struct TYPE_4__ {struct xfs_inode* qi_pquotaip; struct xfs_inode* qi_gquotaip; struct xfs_inode* qi_uquotaip; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




__attribute__((used)) static inline struct xfs_inode *
FUNC_1(xfs_mount_t *VAR_1, uint VAR_2)
{
 switch (VAR_2 & VAR_0) {
 case 128:
  return VAR_1->m_quotainfo->qi_uquotaip;
 case 130:
  return VAR_1->m_quotainfo->qi_gquotaip;
 case 129:
  return VAR_1->m_quotainfo->qi_pquotaip;
 default:
  FUNC_0(0);
 }
 return ((void*)0);
}
