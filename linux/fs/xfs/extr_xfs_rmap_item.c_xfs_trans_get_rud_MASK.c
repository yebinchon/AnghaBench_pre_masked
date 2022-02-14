
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_trans {int t_mountp; } ;
struct TYPE_4__ {int rui_id; } ;
struct xfs_rui_log_item {TYPE_2__ rui_format; } ;
struct TYPE_3__ {int rud_rui_id; } ;
struct xfs_rud_log_item {int rud_item; TYPE_1__ rud_format; struct xfs_rui_log_item* rud_ruip; } ;


 int VAR_0 ;
 struct xfs_rud_log_item* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct xfs_trans*,int *) ;

__attribute__((used)) static struct xfs_rud_log_item *
FUNC_3(
 struct xfs_trans *VAR_3,
 struct xfs_rui_log_item *VAR_4)
{
 struct xfs_rud_log_item *VAR_5;

 VAR_5 = FUNC_0(VAR_2, 0);
 FUNC_1(VAR_3->t_mountp, &VAR_5->rud_item, VAR_0,
     &VAR_1);
 VAR_5->rud_ruip = VAR_4;
 VAR_5->rud_format.rud_rui_id = VAR_4->rui_format.rui_id;

 FUNC_2(VAR_3, &VAR_5->rud_item);
 return VAR_5;
}
