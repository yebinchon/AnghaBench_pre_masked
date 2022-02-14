
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_10__ {int * ops; } ;
struct ehv_bc_data {unsigned int handle; scalar_t__ rx_irq; scalar_t__ tx_irq; TYPE_1__ port; int dev; int lock; scalar_t__ tail; scalar_t__ head; } ;
struct device_node {int dummy; } ;
struct TYPE_11__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct ehv_bc_data* VAR_2 ;
 unsigned int FUNC_2 (int const) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_3__*,char*,int ,unsigned int,unsigned int) ;
 int FUNC_5 (TYPE_3__*,struct ehv_bc_data*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__) ;
 void* FUNC_7 (struct device_node*,int) ;
 int FUNC_8 (struct ehv_bc_data*,int ,int) ;
 int * FUNC_9 (struct device_node*,char*,int *) ;
 int FUNC_10 (int *) ;
 unsigned int VAR_5 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,unsigned int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct ehv_bc_data *VAR_8;
 const uint32_t *VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 static unsigned int VAR_12 = 1;
 unsigned int VAR_13;

 VAR_9 = FUNC_9(VAR_7, "hv-handle", ((void*)0));
 if (!VAR_9) {
  FUNC_3(&VAR_6->dev, "no 'hv-handle' property in %pOFn node\n",
   VAR_7);
  return -VAR_0;
 }





 VAR_10 = FUNC_2(*VAR_9);
 VAR_13 = (VAR_10 == VAR_5) ? 0 : VAR_12++;
 VAR_8 = &VAR_2[VAR_13];

 VAR_8->handle = VAR_10;
 VAR_8->head = 0;
 VAR_8->tail = 0;
 FUNC_10(&VAR_8->lock);

 VAR_8->rx_irq = FUNC_7(VAR_7, 0);
 VAR_8->tx_irq = FUNC_7(VAR_7, 1);
 if ((VAR_8->rx_irq == VAR_1) || (VAR_8->tx_irq == VAR_1)) {
  FUNC_3(&VAR_6->dev, "no 'interrupts' property in %pOFn node\n",
   VAR_7);
  VAR_11 = -VAR_0;
  goto error;
 }

 FUNC_12(&VAR_8->port);
 VAR_8->port.ops = &VAR_4;

 VAR_8->dev = FUNC_13(&VAR_8->port, VAR_3, VAR_13,
   &VAR_6->dev);
 if (FUNC_0(VAR_8->dev)) {
  VAR_11 = FUNC_1(VAR_8->dev);
  FUNC_3(&VAR_6->dev, "could not register tty (ret=%i)\n", VAR_11);
  goto error;
 }

 FUNC_5(&VAR_6->dev, VAR_8);

 FUNC_4(&VAR_6->dev, "registered /dev/%s%u for byte channel %u\n",
  VAR_3->name, VAR_13, VAR_8->handle);

 return 0;

error:
 FUNC_11(&VAR_8->port);
 FUNC_6(VAR_8->tx_irq);
 FUNC_6(VAR_8->rx_irq);

 FUNC_8(VAR_8, 0, sizeof(struct ehv_bc_data));
 return VAR_11;
}
