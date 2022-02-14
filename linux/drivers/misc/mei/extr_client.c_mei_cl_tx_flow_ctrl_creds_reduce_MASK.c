
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_cl {scalar_t__ tx_flow_ctrl_creds; TYPE_1__* me_cl; } ;
struct TYPE_2__ {scalar_t__ tx_flow_ctrl_creds; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mei_cl*) ;
 scalar_t__ FUNC_2 (struct mei_cl*) ;

__attribute__((used)) static int FUNC_3(struct mei_cl *VAR_1)
{
 if (FUNC_0(!VAR_1 || !VAR_1->me_cl))
  return -VAR_0;

 if (FUNC_1(VAR_1))
  return 0;

 if (FUNC_2(VAR_1)) {
  if (FUNC_0(VAR_1->me_cl->tx_flow_ctrl_creds <= 0))
   return -VAR_0;
  VAR_1->me_cl->tx_flow_ctrl_creds--;
 } else {
  if (FUNC_0(VAR_1->tx_flow_ctrl_creds <= 0))
   return -VAR_0;
  VAR_1->tx_flow_ctrl_creds--;
 }
 return 0;
}
