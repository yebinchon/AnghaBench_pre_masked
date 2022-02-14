
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct xfs_perag {int pagi_init; scalar_t__ pagi_freecount; scalar_t__ pagi_count; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct xfs_agi {int agi_freecount; int agi_count; } ;


 int FUNC_0 (int) ;
 struct xfs_agi* FUNC_1 (struct xfs_buf*) ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_mount*,int ) ;
 struct xfs_perag* FUNC_5 (struct xfs_mount*,int ) ;
 int FUNC_6 (struct xfs_perag*) ;
 int FUNC_7 (struct xfs_mount*,struct xfs_trans*,int ,struct xfs_buf**) ;

int
FUNC_8(
 struct xfs_mount *VAR_0,
 struct xfs_trans *VAR_1,
 xfs_agnumber_t VAR_2,
 struct xfs_buf **VAR_3)
{
 struct xfs_agi *VAR_4;
 struct xfs_perag *VAR_5;
 int VAR_6;

 FUNC_4(VAR_0, VAR_2);

 VAR_6 = FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_1(*VAR_3);
 VAR_5 = FUNC_5(VAR_0, VAR_2);
 if (!VAR_5->pagi_init) {
  VAR_5->pagi_freecount = FUNC_3(VAR_4->agi_freecount);
  VAR_5->pagi_count = FUNC_3(VAR_4->agi_count);
  VAR_5->pagi_init = 1;
 }





 FUNC_0(VAR_5->pagi_freecount == FUNC_3(VAR_4->agi_freecount) ||
  FUNC_2(VAR_0));
 FUNC_6(VAR_5);
 return 0;
}
