
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct aq_nic_s {int fwreq_mutex; int aq_hw; TYPE_1__* aq_fw_ops; } ;
struct TYPE_2__ {int (* renegotiate ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct aq_nic_s *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = 0;

 if (FUNC_5(!VAR_2->aq_fw_ops->renegotiate))
  return -VAR_0;

 if (FUNC_3(VAR_1)) {
  FUNC_0(&VAR_2->fwreq_mutex);
  VAR_3 = VAR_2->aq_fw_ops->renegotiate(VAR_2->aq_hw);
  FUNC_1(&VAR_2->fwreq_mutex);
 }

 return VAR_3;
}
