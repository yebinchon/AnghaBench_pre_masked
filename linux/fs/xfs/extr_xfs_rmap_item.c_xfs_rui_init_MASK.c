
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_2__ {uintptr_t rui_id; scalar_t__ rui_nextents; } ;
struct xfs_rui_log_item {int rui_refcount; int rui_next_extent; TYPE_1__ rui_format; int rui_item; } ;
struct xfs_mount {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int) ;
 struct xfs_rui_log_item* FUNC_2 (int ,int ) ;
 struct xfs_rui_log_item* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct xfs_mount*,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;

struct xfs_rui_log_item *
FUNC_6(
 struct xfs_mount *VAR_4,
 uint VAR_5)

{
 struct xfs_rui_log_item *VAR_6;

 FUNC_0(VAR_5 > 0);
 if (VAR_5 > VAR_1)
  VAR_6 = FUNC_2(FUNC_5(VAR_5), 0);
 else
  VAR_6 = FUNC_3(VAR_3, 0);

 FUNC_4(VAR_4, &VAR_6->rui_item, VAR_0, &VAR_2);
 VAR_6->rui_format.rui_nextents = VAR_5;
 VAR_6->rui_format.rui_id = (uintptr_t)(void *)VAR_6;
 FUNC_1(&VAR_6->rui_next_extent, 0);
 FUNC_1(&VAR_6->rui_refcount, 2);

 return VAR_6;
}
