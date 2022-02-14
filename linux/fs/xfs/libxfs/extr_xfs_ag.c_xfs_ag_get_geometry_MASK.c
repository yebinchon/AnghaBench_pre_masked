
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agnumber_t ;
struct xfs_perag {unsigned int pagf_freeblks; unsigned int pagf_flcount; unsigned int pagf_btreeblks; } ;
struct TYPE_2__ {scalar_t__ sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct xfs_agi {int agi_freecount; int agi_count; } ;
struct xfs_agf {int agf_length; } ;
struct xfs_ag_geometry {unsigned int ag_freeblks; void* ag_length; void* ag_ifree; void* ag_icount; scalar_t__ ag_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfs_agf* FUNC_0 (struct xfs_buf*) ;
 struct xfs_agi* FUNC_1 (struct xfs_buf*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_ag_geometry*,int ,int) ;
 int FUNC_4 (struct xfs_perag*,struct xfs_ag_geometry*) ;
 unsigned int FUNC_5 (struct xfs_perag*,int ) ;
 int FUNC_6 (struct xfs_mount*,int *,scalar_t__,int ,struct xfs_buf**) ;
 int FUNC_7 (struct xfs_buf*) ;
 int FUNC_8 (struct xfs_mount*,int *,scalar_t__,struct xfs_buf**) ;
 struct xfs_perag* FUNC_9 (struct xfs_mount*,scalar_t__) ;
 int FUNC_10 (struct xfs_perag*) ;

int
FUNC_11(
 struct xfs_mount *VAR_2,
 xfs_agnumber_t VAR_3,
 struct xfs_ag_geometry *VAR_4)
{
 struct xfs_buf *VAR_5;
 struct xfs_buf *VAR_6;
 struct xfs_agi *VAR_7;
 struct xfs_agf *VAR_8;
 struct xfs_perag *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_3 >= VAR_2->m_sb.sb_agcount)
  return -VAR_0;


 VAR_11 = FUNC_8(VAR_2, ((void*)0), VAR_3, &VAR_5);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_6(VAR_2, ((void*)0), VAR_3, 0, &VAR_6);
 if (VAR_11)
  goto out_agi;
 VAR_9 = FUNC_9(VAR_2, VAR_3);


 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->ag_number = VAR_3;

 VAR_7 = FUNC_1(VAR_5);
 VAR_4->ag_icount = FUNC_2(VAR_7->agi_count);
 VAR_4->ag_ifree = FUNC_2(VAR_7->agi_freecount);

 VAR_8 = FUNC_0(VAR_6);
 VAR_4->ag_length = FUNC_2(VAR_8->agf_length);
 VAR_10 = VAR_9->pagf_freeblks +
     VAR_9->pagf_flcount +
     VAR_9->pagf_btreeblks -
     FUNC_5(VAR_9, VAR_1);
 VAR_4->ag_freeblks = VAR_10;
 FUNC_4(VAR_9, VAR_4);


 FUNC_10(VAR_9);
 FUNC_7(VAR_6);
out_agi:
 FUNC_7(VAR_5);
 return VAR_11;
}
