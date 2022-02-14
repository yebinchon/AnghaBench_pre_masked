
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct dsa_loop_pdata* platform_data; } ;
struct mdio_device {TYPE_2__ dev; int bus; } ;
struct dsa_switch {struct dsa_loop_priv* priv; int * ops; TYPE_2__* dev; } ;
struct dsa_loop_priv {int bus; TYPE_6__* netdev; } ;
struct TYPE_7__ {int ** netdev; } ;
struct dsa_loop_pdata {TYPE_1__ cd; int netdev; int enabled_ports; int name; } ;
struct TYPE_9__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,struct dsa_switch*) ;
 struct dsa_loop_priv* FUNC_3 (TYPE_2__*,int,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct dsa_switch*) ;
 struct dsa_switch* FUNC_5 (TYPE_2__*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct mdio_device *VAR_8)
{
 struct dsa_loop_pdata *VAR_9 = VAR_8->dev.platform_data;
 struct dsa_loop_priv *VAR_10;
 struct dsa_switch *VAR_11;

 if (!VAR_9)
  return -VAR_2;

 FUNC_1(&VAR_8->dev, "%s: 0x%0x\n",
   VAR_9->name, VAR_9->enabled_ports);

 VAR_11 = FUNC_5(&VAR_8->dev, VAR_1);
 if (!VAR_11)
  return -VAR_3;

 VAR_10 = FUNC_3(&VAR_8->dev, sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->netdev = FUNC_0(&VAR_7, VAR_9->netdev);
 if (!VAR_10->netdev)
  return -VAR_4;

 VAR_9->cd.netdev[VAR_0] = &VAR_10->netdev->dev;

 VAR_11->dev = &VAR_8->dev;
 VAR_11->ops = &VAR_6;
 VAR_11->priv = VAR_10;
 VAR_10->bus = VAR_8->bus;

 FUNC_2(&VAR_8->dev, VAR_11);

 return FUNC_4(VAR_11);
}
