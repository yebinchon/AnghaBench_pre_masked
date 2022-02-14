
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union drv_info_to_mcp {int dummy; } drv_info_to_mcp ;
typedef int u8 ;
typedef int u32 ;
struct bnx2x {scalar_t__ state; int drv_info_mutex; TYPE_3__* slowpath; scalar_t__ drv_info_mng_owner; } ;
struct TYPE_11__ {int * versions; } ;
struct TYPE_8__ {int * version; } ;
struct TYPE_7__ {int * version; } ;
struct TYPE_10__ {TYPE_2__ fcoe_stat; TYPE_1__ iscsi_stat; } ;
struct TYPE_9__ {TYPE_4__ drv_info_to_mcp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int * VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bnx2x*,TYPE_5__*) ;
 int FUNC_4 (struct bnx2x*,int ,int ) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (int *,int) ;
 TYPE_5__* VAR_7 ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct bnx2x *VAR_8)
{
 u32 VAR_9 = VAR_6;
 u32 VAR_10 = VAR_6;
 u32 VAR_11 = VAR_6;
 int VAR_12 = FUNC_0(VAR_8);
 u8 *VAR_13;

 if (!FUNC_3(VAR_8, VAR_7))
  return;

 FUNC_9(&VAR_8->drv_info_mutex);

 if (VAR_8->drv_info_mng_owner)
  goto out;

 if (VAR_8->state != VAR_1)
  goto out;


 VAR_11 = FUNC_7(VAR_2, 1);
 if (!FUNC_1(VAR_8))
  goto out;


 FUNC_8(&VAR_8->slowpath->drv_info_to_mcp, 0,
        sizeof(union drv_info_to_mcp));
 FUNC_6(VAR_8);
 VAR_13 = VAR_8->slowpath->drv_info_to_mcp.iscsi_stat.version;
 VAR_9 = FUNC_7(VAR_13, 0);

 FUNC_8(&VAR_8->slowpath->drv_info_to_mcp, 0,
        sizeof(union drv_info_to_mcp));
 FUNC_5(VAR_8);
 VAR_13 = VAR_8->slowpath->drv_info_to_mcp.fcoe_stat.version;
 VAR_10 = FUNC_7(VAR_13, 0);

out:
 FUNC_4(VAR_8, VAR_7[VAR_12].versions[VAR_3], VAR_11);
 FUNC_4(VAR_8, VAR_7[VAR_12].versions[VAR_5], VAR_9);
 FUNC_4(VAR_8, VAR_7[VAR_12].versions[VAR_4], VAR_10);

 FUNC_10(&VAR_8->drv_info_mutex);

 FUNC_2(VAR_0, "Setting driver version: ETH [%08x] iSCSI [%08x] FCoE [%08x]\n",
    VAR_11, VAR_9, VAR_10);
}
