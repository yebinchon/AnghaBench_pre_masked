
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int (* config_tc ) (struct xgbe_prv_data*) ;} ;
struct TYPE_3__ {scalar_t__ tc_cnt; } ;
struct xgbe_prv_data {TYPE_2__ hw_if; scalar_t__ num_tcs; TYPE_1__ hw_feat; } ;
struct tc_mqprio_qopt {scalar_t__ num_tc; int hw; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, enum tc_setup_type VAR_5,
    void *VAR_6)
{
 struct xgbe_prv_data *VAR_7 = FUNC_0(VAR_4);
 struct tc_mqprio_qopt *VAR_8 = VAR_6;
 u8 VAR_9;

 if (VAR_5 != VAR_3)
  return -VAR_1;

 VAR_8->hw = VAR_2;
 VAR_9 = VAR_8->num_tc;

 if (VAR_9 > VAR_7->hw_feat.tc_cnt)
  return -VAR_0;

 VAR_7->num_tcs = VAR_9;
 VAR_7->hw_if.config_tc(VAR_7);

 return 0;
}
