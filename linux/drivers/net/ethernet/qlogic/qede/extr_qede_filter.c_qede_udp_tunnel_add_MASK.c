
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u16 ;
typedef int tunn_params ;
struct udp_tunnel_info {int type; int port; } ;
struct TYPE_4__ {int geneve_enable; int vxlan_enable; } ;
struct TYPE_5__ {TYPE_1__ common; } ;
struct qede_dev {void* geneve_dst_port; int cdev; TYPE_3__* ops; TYPE_2__ dev_info; void* vxlan_dst_port; } ;
struct qed_tunn_params {int update_vxlan_port; int update_geneve_port; void* geneve_port; void* vxlan_port; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int (* tunn_config ) (int ,struct qed_tunn_params*) ;} ;


 int FUNC_0 (struct qede_dev*,char*,void*) ;
 int FUNC_1 (struct qede_dev*,int ,char*,void*) ;
 int VAR_0 ;


 int FUNC_2 (struct qede_dev*) ;
 int FUNC_3 (struct qede_dev*) ;
 int FUNC_4 (struct qed_tunn_params*,int ,int) ;
 struct qede_dev* FUNC_5 (struct net_device*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,struct qed_tunn_params*) ;
 int FUNC_8 (int ,struct qed_tunn_params*) ;

void FUNC_9(struct net_device *VAR_1, struct udp_tunnel_info *VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_5(VAR_1);
 struct qed_tunn_params VAR_4;
 u16 VAR_5 = FUNC_6(VAR_2->port);
 int VAR_6;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));

 switch (VAR_2->type) {
 case 128:
  if (!VAR_3->dev_info.common.vxlan_enable)
   return;

  if (VAR_3->vxlan_dst_port)
   return;

  VAR_4.update_vxlan_port = 1;
  VAR_4.vxlan_port = VAR_5;

  FUNC_2(VAR_3);
  VAR_6 = VAR_3->ops->tunn_config(VAR_3->cdev, &VAR_4);
  FUNC_3(VAR_3);

  if (!VAR_6) {
   VAR_3->vxlan_dst_port = VAR_5;
   FUNC_1(VAR_3, VAR_0, "Added vxlan port=%d\n",
       VAR_5);
  } else {
   FUNC_0(VAR_3, "Failed to add vxlan UDP port=%d\n",
      VAR_5);
  }

  break;
 case 129:
  if (!VAR_3->dev_info.common.geneve_enable)
   return;

  if (VAR_3->geneve_dst_port)
   return;

  VAR_4.update_geneve_port = 1;
  VAR_4.geneve_port = VAR_5;

  FUNC_2(VAR_3);
  VAR_6 = VAR_3->ops->tunn_config(VAR_3->cdev, &VAR_4);
  FUNC_3(VAR_3);

  if (!VAR_6) {
   VAR_3->geneve_dst_port = VAR_5;
   FUNC_1(VAR_3, VAR_0,
       "Added geneve port=%d\n", VAR_5);
  } else {
   FUNC_0(VAR_3, "Failed to add geneve UDP port=%d\n",
      VAR_5);
  }

  break;
 default:
  return;
 }
}
