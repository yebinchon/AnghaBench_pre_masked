
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int napi_rx; int napi_tx; int dev; } ;
struct net_device {int proto_down; } ;


 int FUNC_0 (int ,struct rocker_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 struct rocker_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,int ,struct rocker_port*) ;
 int VAR_0 ;
 int FUNC_6 (struct rocker_port*) ;
 int FUNC_7 (struct rocker_port*) ;
 int FUNC_8 (struct rocker_port*) ;
 int FUNC_9 (struct rocker_port*) ;
 int FUNC_10 (struct rocker_port*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (struct rocker_port*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_3)
{
 struct rocker_port *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(FUNC_7(VAR_4),
     VAR_2, 0,
     VAR_0, VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_4->dev, "cannot assign tx irq\n");
  goto err_request_tx_irq;
 }

 VAR_5 = FUNC_5(FUNC_6(VAR_4),
     VAR_1, 0,
     VAR_0, VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_4->dev, "cannot assign rx irq\n");
  goto err_request_rx_irq;
 }

 VAR_5 = FUNC_11(VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_4->dev, "cannot open port in world\n");
  goto err_world_port_open;
 }

 FUNC_1(&VAR_4->napi_tx);
 FUNC_1(&VAR_4->napi_rx);
 if (!VAR_3->proto_down)
  FUNC_10(VAR_4, 1);
 FUNC_4(VAR_3);
 return 0;

err_world_port_open:
 FUNC_0(FUNC_6(VAR_4), VAR_4);
err_request_rx_irq:
 FUNC_0(FUNC_7(VAR_4), VAR_4);
err_request_tx_irq:
 FUNC_8(VAR_4);
 return VAR_5;
}
