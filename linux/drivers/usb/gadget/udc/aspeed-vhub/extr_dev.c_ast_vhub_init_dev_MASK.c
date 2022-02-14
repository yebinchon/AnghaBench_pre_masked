
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct device {int of_node; } ;
struct TYPE_15__ {int of_node; } ;
struct TYPE_18__ {TYPE_2__ dev; int speed; int max_speed; int name; int * ep0; int * ops; int ep_list; } ;
struct TYPE_13__ {int ep; } ;
struct ast_vhub_dev {unsigned int index; int registered; TYPE_4__* port_dev; TYPE_5__ gadget; TYPE_12__ ep0; scalar_t__ regs; int name; struct ast_vhub* vhub; } ;
struct ast_vhub {TYPE_3__* pdev; scalar_t__ force_usb1; scalar_t__ regs; TYPE_1__* ports; } ;
struct TYPE_17__ {struct device* parent; int release; } ;
struct TYPE_16__ {struct device dev; } ;
struct TYPE_14__ {struct ast_vhub_dev dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ast_vhub*,TYPE_12__*,struct ast_vhub_dev*) ;
 int VAR_7 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_4__*,char*,int ,unsigned int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct device*,int ,char*,unsigned int) ;
 TYPE_4__* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_5__*) ;

int FUNC_11(struct ast_vhub *VAR_8, unsigned int VAR_9)
{
 struct ast_vhub_dev *VAR_10 = &VAR_8->ports[VAR_9].dev;
 struct device *VAR_11 = &VAR_8->pdev->dev;
 int VAR_12;

 VAR_10->vhub = VAR_8;
 VAR_10->index = VAR_9;
 VAR_10->name = FUNC_7(VAR_11, VAR_1, "port%d", VAR_9+1);
 VAR_10->regs = VAR_8->regs + 0x100 + 0x10 * VAR_9;

 FUNC_1(VAR_8, &VAR_10->ep0, VAR_10);






 VAR_10->port_dev = FUNC_8(sizeof(struct device), VAR_1);
 if (!VAR_10->port_dev)
  return -VAR_0;
 FUNC_6(VAR_10->port_dev);
 VAR_10->port_dev->release = VAR_6;
 VAR_10->port_dev->parent = VAR_11;
 FUNC_3(VAR_10->port_dev, "%s:p%d", FUNC_2(VAR_11), VAR_9 + 1);
 VAR_12 = FUNC_4(VAR_10->port_dev);
 if (VAR_12)
  goto fail_add;


 FUNC_0(&VAR_10->gadget.ep_list);
 VAR_10->gadget.ops = &VAR_7;
 VAR_10->gadget.ep0 = &VAR_10->ep0.ep;
 VAR_10->gadget.name = VAR_2;
 if (VAR_8->force_usb1)
  VAR_10->gadget.max_speed = VAR_3;
 else
  VAR_10->gadget.max_speed = VAR_4;
 VAR_10->gadget.speed = VAR_5;
 VAR_10->gadget.dev.of_node = VAR_8->pdev->dev.of_node;

 VAR_12 = FUNC_10(VAR_10->port_dev, &VAR_10->gadget);
 if (VAR_12 != 0)
  goto fail_udc;
 VAR_10->registered = 1;

 return 0;
 fail_udc:
 FUNC_5(VAR_10->port_dev);
 fail_add:
 FUNC_9(VAR_10->port_dev);

 return VAR_12;
}
