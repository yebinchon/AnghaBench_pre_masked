
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_3__ {int sb_imax_pct; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
typedef int __u32 ;
struct TYPE_4__ {int tr_growdata; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_3 (struct xfs_trans*) ;
 int FUNC_4 (struct xfs_trans*,int ,int) ;
 int FUNC_5 (struct xfs_trans*) ;

__attribute__((used)) static int
FUNC_6(
 struct xfs_mount *VAR_3,
 __u32 VAR_4)
{
 struct xfs_trans *VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_4 > 100)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3, &FUNC_0(VAR_3)->tr_growdata,
   FUNC_1(VAR_3), 0, VAR_1, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_4 - VAR_3->m_sb.sb_imax_pct;
 FUNC_4(VAR_5, VAR_2, VAR_6);
 FUNC_5(VAR_5);
 return FUNC_3(VAR_5);
}
