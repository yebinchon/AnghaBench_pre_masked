
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* tc_config; } ;
struct ixgbe_adapter {TYPE_3__ temp_dcb_cfg; } ;
struct TYPE_5__ {TYPE_1__* path; } ;
struct TYPE_4__ {scalar_t__ up_to_tc_bitmap; scalar_t__ bwg_percent; scalar_t__ bwg_id; scalar_t__ prio_type; } ;


 scalar_t__ VAR_0 ;
 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, int VAR_2,
      u8 VAR_3, u8 VAR_4, u8 VAR_5,
      u8 VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_0(VAR_1);

 if (VAR_3 != VAR_0)
  VAR_7->temp_dcb_cfg.tc_config[VAR_2].path[0].prio_type = VAR_3;
 if (VAR_4 != VAR_0)
  VAR_7->temp_dcb_cfg.tc_config[VAR_2].path[0].bwg_id = VAR_4;
 if (VAR_5 != VAR_0)
  VAR_7->temp_dcb_cfg.tc_config[VAR_2].path[0].bwg_percent =
   VAR_5;
 if (VAR_6 != VAR_0)
  VAR_7->temp_dcb_cfg.tc_config[VAR_2].path[0].up_to_tc_bitmap =
   VAR_6;
}
