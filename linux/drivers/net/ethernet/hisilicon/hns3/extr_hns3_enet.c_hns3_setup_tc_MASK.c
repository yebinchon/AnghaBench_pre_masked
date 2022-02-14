
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ num_tc; scalar_t__ hw; scalar_t__* prio_tc_map; } ;
struct tc_mqprio_qopt_offload {scalar_t__ mode; TYPE_1__ qopt; } ;
struct net_device {int dummy; } ;
struct hnae3_knic_private_info {TYPE_2__* dcb_ops; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;
struct TYPE_4__ {int (* setup_tc ) (struct hnae3_handle*,scalar_t__,scalar_t__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int ,struct net_device*,char*,scalar_t__) ;
 int FUNC_2 (struct hnae3_handle*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6, void *VAR_7)
{
 struct tc_mqprio_qopt_offload *VAR_8 = VAR_7;
 u8 *VAR_9 = VAR_8->qopt.prio_tc_map;
 struct hnae3_knic_private_info *VAR_10;
 u8 VAR_11 = VAR_8->qopt.num_tc;
 u16 VAR_12 = VAR_8->mode;
 u8 VAR_13 = VAR_8->qopt.hw;
 struct hnae3_handle *VAR_14;

 if (!((VAR_13 == VAR_3 &&
        VAR_12 == VAR_4) || (!VAR_13 && VAR_11 == 0)))
  return -VAR_1;

 if (VAR_11 > VAR_2)
  return -VAR_0;

 if (!VAR_6)
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_6);
 VAR_10 = &VAR_14->kinfo;

 FUNC_1(VAR_14, VAR_5, VAR_6, "setup tc: num_tc=%u\n", VAR_11);

 return (VAR_10->dcb_ops && VAR_10->dcb_ops->setup_tc) ?
  VAR_10->dcb_ops->setup_tc(VAR_14, VAR_11, VAR_9) : -VAR_1;
}
