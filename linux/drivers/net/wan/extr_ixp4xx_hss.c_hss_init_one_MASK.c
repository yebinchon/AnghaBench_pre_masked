
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct port {int * npe; int napi; int plat; TYPE_3__* dev; int id; int clock_reg; scalar_t__ clock_rate; int clock_type; struct net_device* netdev; } ;
struct TYPE_5__ {int platform_data; } ;
struct platform_device {TYPE_3__ dev; int id; } ;
struct net_device {int tx_queue_len; int * netdev_ops; } ;
struct TYPE_4__ {int xmit; int attach; } ;
typedef TYPE_1__ hdlc_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,TYPE_3__*) ;
 struct net_device* FUNC_1 (struct port*) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct port*) ;
 struct port* FUNC_5 (int,int ) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct net_device*,int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (struct platform_device*,struct port*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_10)
{
 struct port *VAR_11;
 struct net_device *VAR_12;
 hdlc_device *VAR_13;
 int VAR_14;

 if ((VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_4)) == ((void*)0))
  return -VAR_3;

 if ((VAR_11->npe = FUNC_9(0)) == ((void*)0)) {
  VAR_14 = -VAR_2;
  goto err_free;
 }

 if ((VAR_11->netdev = VAR_12 = FUNC_1(VAR_11)) == ((void*)0)) {
  VAR_14 = -VAR_3;
  goto err_plat;
 }

 FUNC_0(VAR_12, &VAR_10->dev);
 VAR_13 = FUNC_2(VAR_12);
 VAR_13->attach = VAR_6;
 VAR_13->xmit = VAR_9;
 VAR_12->netdev_ops = &VAR_7;
 VAR_12->tx_queue_len = 100;
 VAR_11->clock_type = VAR_1;
 VAR_11->clock_rate = 0;
 VAR_11->clock_reg = VAR_0;
 VAR_11->id = VAR_10->id;
 VAR_11->dev = &VAR_10->dev;
 VAR_11->plat = VAR_10->dev.platform_data;
 FUNC_7(VAR_12, &VAR_11->napi, VAR_8, VAR_5);

 if ((VAR_14 = FUNC_11(VAR_12)))
  goto err_free_netdev;

 FUNC_10(VAR_10, VAR_11);

 FUNC_6(VAR_12, "initialized\n");
 return 0;

err_free_netdev:
 FUNC_3(VAR_12);
err_plat:
 FUNC_8(VAR_11->npe);
err_free:
 FUNC_4(VAR_11);
 return VAR_14;
}
