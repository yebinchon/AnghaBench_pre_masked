
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int xs_kobj; } ;
struct xfs_mount {int m_kobj; TYPE_1__ m_stats; int m_reclaim_work; int m_ail; int m_flags; int m_rootip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_mount*) ;
 int VAR_3 ;
 int FUNC_4 (struct xfs_mount*) ;
 int FUNC_5 (struct xfs_mount*) ;
 int FUNC_6 (struct xfs_mount*) ;
 int FUNC_7 (struct xfs_mount*) ;
 int FUNC_8 (struct xfs_mount*) ;
 int FUNC_9 (struct xfs_mount*) ;
 int FUNC_10 (struct xfs_mount*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct xfs_mount*,int ) ;
 int FUNC_13 (struct xfs_mount*) ;
 int FUNC_14 (struct xfs_mount*) ;
 int FUNC_15 (struct xfs_mount*) ;
 int FUNC_16 (struct xfs_mount*) ;
 int FUNC_17 (struct xfs_mount*,int ) ;
 int FUNC_18 (struct xfs_mount*,scalar_t__*,int *) ;
 int FUNC_19 (struct xfs_mount*) ;
 int FUNC_20 (struct xfs_mount*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct xfs_mount*) ;
 int FUNC_23 (struct xfs_mount*,char*) ;

void
FUNC_24(
 struct xfs_mount *VAR_4)
{
 uint64_t VAR_5;
 int VAR_6;

 FUNC_20(VAR_4);
 FUNC_9(VAR_4);
 FUNC_16(VAR_4);
 FUNC_19(VAR_4);
 FUNC_11(VAR_4->m_rootip);
 FUNC_12(VAR_4, VAR_1);





 FUNC_7(VAR_4);
 FUNC_1(VAR_3);







 VAR_4->m_flags |= VAR_2;




 FUNC_2(VAR_4->m_ail);







 FUNC_0(&VAR_4->m_reclaim_work);
 FUNC_17(VAR_4, VAR_0);
 FUNC_10(VAR_4);

 FUNC_15(VAR_4);
 VAR_5 = 0;
 VAR_6 = FUNC_18(VAR_4, &VAR_5, ((void*)0));
 if (VAR_6)
  FUNC_23(VAR_4, "Unable to free reserved block pool. "
    "Freespace may not be correct on next mount.");

 VAR_6 = FUNC_13(VAR_4);
 if (VAR_6)
  FUNC_23(VAR_4, "Unable to update superblock counters. "
    "Freespace may not be correct on next mount.");


 FUNC_14(VAR_4);
 FUNC_3(VAR_4);
 FUNC_22(VAR_4);




 FUNC_8(VAR_4);

 FUNC_6(VAR_4);
 FUNC_4(VAR_4);
 FUNC_21(&VAR_4->m_stats.xs_kobj);
 FUNC_21(&VAR_4->m_kobj);
}
