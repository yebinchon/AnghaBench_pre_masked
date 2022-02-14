
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* init_fw_port ) (struct mwifiex_adapter*) ;} ;
struct mwifiex_adapter {scalar_t__ hw_status; int init_wait_q_woken; int init_wait_q; TYPE_1__ if_ops; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct mwifiex_adapter *VAR_1)
{

 if (VAR_1->hw_status == VAR_0)
  if (VAR_1->if_ops.init_fw_port)
   VAR_1->if_ops.init_fw_port(VAR_1);

 VAR_1->init_wait_q_woken = 1;
 FUNC_1(&VAR_1->init_wait_q);
 return 0;
}
