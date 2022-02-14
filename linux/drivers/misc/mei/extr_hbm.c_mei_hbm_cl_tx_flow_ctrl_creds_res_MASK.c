
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl {int tx_flow_ctrl_creds; } ;
struct hbm_flow_control {int host_addr; } ;


 int FUNC_0 (struct mei_device*,struct mei_cl*,char*,int ) ;
 int FUNC_1 (struct mei_device*,struct hbm_flow_control*) ;
 struct mei_cl* FUNC_2 (struct mei_device*,struct hbm_flow_control*) ;

__attribute__((used)) static void FUNC_3(struct mei_device *VAR_0,
            struct hbm_flow_control *VAR_1)
{
 struct mei_cl *VAR_2;

 if (!VAR_1->host_addr) {

  FUNC_1(VAR_0, VAR_1);
  return;
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_2->tx_flow_ctrl_creds++;
  FUNC_0(VAR_0, VAR_2, "flow control creds = %d.\n",
    VAR_2->tx_flow_ctrl_creds);
 }
}
