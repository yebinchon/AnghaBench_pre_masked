
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mtu; int mac; int name; int * queue_count; int features; } ;
struct TYPE_6__ {TYPE_2__ config; int max_mcast_filters; int max_ucast_filters; } ;
union ionic_lif_identity {TYPE_3__ eth; int capabilities; } ;
typedef int u8 ;
struct ionic_dev {TYPE_1__* dev_cmd_regs; } ;
struct ionic {int dev; int dev_cmd_lock; struct ionic_dev idev; } ;
struct TYPE_4__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct ionic_dev*,int ,int ) ;
 int FUNC_2 (struct ionic*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (union ionic_lif_identity*,int *,size_t) ;
 size_t FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct ionic *VAR_6, u8 VAR_7,
         union ionic_lif_identity *VAR_8)
{
 struct ionic_dev *VAR_9 = &VAR_6->idev;
 size_t VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(sizeof(*VAR_8), sizeof(VAR_9->dev_cmd_regs->data));

 FUNC_7(&VAR_6->dev_cmd_lock);
 FUNC_1(VAR_9, VAR_7, VAR_1);
 VAR_11 = FUNC_2(VAR_6, VAR_0);
 FUNC_5(VAR_8, &VAR_9->dev_cmd_regs->data, VAR_10);
 FUNC_8(&VAR_6->dev_cmd_lock);
 if (VAR_11)
  return (VAR_11);

 FUNC_0(VAR_6->dev, "capabilities 0x%llx\n",
  FUNC_4(VAR_8->capabilities));

 FUNC_0(VAR_6->dev, "eth.max_ucast_filters %d\n",
  FUNC_3(VAR_8->eth.max_ucast_filters));
 FUNC_0(VAR_6->dev, "eth.max_mcast_filters %d\n",
  FUNC_3(VAR_8->eth.max_mcast_filters));
 FUNC_0(VAR_6->dev, "eth.features 0x%llx\n",
  FUNC_4(VAR_8->eth.config.features));
 FUNC_0(VAR_6->dev, "eth.queue_count[IONIC_QTYPE_ADMINQ] %d\n",
  FUNC_3(VAR_8->eth.config.queue_count[VAR_2]));
 FUNC_0(VAR_6->dev, "eth.queue_count[IONIC_QTYPE_NOTIFYQ] %d\n",
  FUNC_3(VAR_8->eth.config.queue_count[VAR_3]));
 FUNC_0(VAR_6->dev, "eth.queue_count[IONIC_QTYPE_RXQ] %d\n",
  FUNC_3(VAR_8->eth.config.queue_count[VAR_4]));
 FUNC_0(VAR_6->dev, "eth.queue_count[IONIC_QTYPE_TXQ] %d\n",
  FUNC_3(VAR_8->eth.config.queue_count[VAR_5]));
 FUNC_0(VAR_6->dev, "eth.config.name %s\n", VAR_8->eth.config.name);
 FUNC_0(VAR_6->dev, "eth.config.mac %pM\n", VAR_8->eth.config.mac);
 FUNC_0(VAR_6->dev, "eth.config.mtu %d\n",
  FUNC_3(VAR_8->eth.config.mtu));

 return 0;
}
