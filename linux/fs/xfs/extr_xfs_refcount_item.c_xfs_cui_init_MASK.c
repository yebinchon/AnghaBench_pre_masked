
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct xfs_mount {int dummy; } ;
struct TYPE_2__ {uintptr_t cui_id; scalar_t__ cui_nextents; } ;
struct xfs_cui_log_item {int cui_refcount; int cui_next_extent; TYPE_1__ cui_format; int cui_item; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 struct xfs_cui_log_item* FUNC_2 (int ,int ) ;
 struct xfs_cui_log_item* FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (struct xfs_mount*,int *,int ,int *) ;

struct xfs_cui_log_item *
FUNC_6(
 struct xfs_mount *VAR_4,
 uint VAR_5)

{
 struct xfs_cui_log_item *VAR_6;

 FUNC_0(VAR_5 > 0);
 if (VAR_5 > VAR_0)
  VAR_6 = FUNC_2(FUNC_4(VAR_5),
    0);
 else
  VAR_6 = FUNC_3(VAR_3, 0);

 FUNC_5(VAR_4, &VAR_6->cui_item, VAR_1, &VAR_2);
 VAR_6->cui_format.cui_nextents = VAR_5;
 VAR_6->cui_format.cui_id = (uintptr_t)(void *)VAR_6;
 FUNC_1(&VAR_6->cui_next_extent, 0);
 FUNC_1(&VAR_6->cui_refcount, 2);

 return VAR_6;
}
