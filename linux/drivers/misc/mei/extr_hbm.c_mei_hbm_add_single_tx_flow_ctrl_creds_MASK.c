
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ single_recv_buf; } ;
struct mei_me_client {int tx_flow_ctrl_creds; TYPE_1__ props; } ;
struct mei_device {int dev; } ;
struct hbm_flow_control {int me_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 struct mei_me_client* FUNC_3 (struct mei_device*,int ) ;
 int FUNC_4 (struct mei_me_client*) ;

__attribute__((used)) static int FUNC_5(struct mei_device *VAR_2,
       struct hbm_flow_control *VAR_3)
{
 struct mei_me_client *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2, VAR_3->me_addr);
 if (!VAR_4) {
  FUNC_2(VAR_2->dev, "no such me client %d\n", VAR_3->me_addr);
  return -VAR_1;
 }

 if (FUNC_0(VAR_4->props.single_recv_buf == 0)) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_4->tx_flow_ctrl_creds++;
 FUNC_1(VAR_2->dev, "recv flow ctrl msg ME %d (single) creds = %d.\n",
  VAR_3->me_addr, VAR_4->tx_flow_ctrl_creds);

 VAR_5 = 0;
out:
 FUNC_4(VAR_4);
 return VAR_5;
}
