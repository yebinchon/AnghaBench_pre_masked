
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_trans {int t_mountp; } ;
struct TYPE_4__ {int bui_id; } ;
struct xfs_bui_log_item {TYPE_2__ bui_format; } ;
struct TYPE_3__ {int bud_bui_id; } ;
struct xfs_bud_log_item {int bud_item; TYPE_1__ bud_format; struct xfs_bui_log_item* bud_buip; } ;


 int VAR_0 ;
 struct xfs_bud_log_item* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,int *) ;
 int FUNC_2 (struct xfs_trans*,int *) ;

__attribute__((used)) static struct xfs_bud_log_item *
FUNC_3(
 struct xfs_trans *VAR_3,
 struct xfs_bui_log_item *VAR_4)
{
 struct xfs_bud_log_item *VAR_5;

 VAR_5 = FUNC_0(VAR_2, 0);
 FUNC_1(VAR_3->t_mountp, &VAR_5->bud_item, VAR_0,
     &VAR_1);
 VAR_5->bud_buip = VAR_4;
 VAR_5->bud_format.bud_bui_id = VAR_4->bui_format.bui_id;

 FUNC_2(VAR_3, &VAR_5->bud_item);
 return VAR_5;
}
