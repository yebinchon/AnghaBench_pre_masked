
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_eee {scalar_t__ eee_enabled; } ;
struct aq_nic_s {int fwreq_mutex; int aq_hw; TYPE_1__* aq_fw_ops; } ;
struct aq_nic_cfg_s {scalar_t__ eee_speeds; } ;
struct TYPE_2__ {int (* get_eee_rate ) (int ,scalar_t__*,scalar_t__*) ;int (* set_eee_rate ) (int ,scalar_t__) ;} ;


 int VAR_0 ;
 struct aq_nic_cfg_s* FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct aq_nic_s* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, struct ethtool_eee *VAR_2)
{
 struct aq_nic_s *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4, VAR_5;
 struct aq_nic_cfg_s *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_3);

 if (FUNC_6(!VAR_3->aq_fw_ops->get_eee_rate ||
       !VAR_3->aq_fw_ops->set_eee_rate))
  return -VAR_0;

 FUNC_1(&VAR_3->fwreq_mutex);
 VAR_7 = VAR_3->aq_fw_ops->get_eee_rate(VAR_3->aq_hw, &VAR_4,
           &VAR_5);
 FUNC_2(&VAR_3->fwreq_mutex);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_2->eee_enabled) {
  VAR_4 = VAR_5;
  VAR_6->eee_speeds = VAR_4;
 } else {
  VAR_4 = 0;
  VAR_6->eee_speeds = 0;
 }

 FUNC_1(&VAR_3->fwreq_mutex);
 VAR_7 = VAR_3->aq_fw_ops->set_eee_rate(VAR_3->aq_hw, VAR_4);
 FUNC_2(&VAR_3->fwreq_mutex);

 return VAR_7;
}
