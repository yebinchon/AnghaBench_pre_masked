
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_mount {int dummy; } ;
struct TYPE_2__ {uintptr_t bui_id; int bui_nextents; } ;
struct xfs_bui_log_item {int bui_refcount; int bui_next_extent; TYPE_1__ bui_format; int bui_item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 struct xfs_bui_log_item* FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xfs_mount*,int *,int ,int *) ;

struct xfs_bui_log_item *
FUNC_3(
 struct xfs_mount *VAR_4)

{
 struct xfs_bui_log_item *VAR_5;

 VAR_5 = FUNC_1(VAR_3, 0);

 FUNC_2(VAR_4, &VAR_5->bui_item, VAR_1, &VAR_2);
 VAR_5->bui_format.bui_nextents = VAR_0;
 VAR_5->bui_format.bui_id = (uintptr_t)(void *)VAR_5;
 FUNC_0(&VAR_5->bui_next_extent, 0);
 FUNC_0(&VAR_5->bui_refcount, 2);

 return VAR_5;
}
