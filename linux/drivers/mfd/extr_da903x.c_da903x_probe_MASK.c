
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {size_t driver_data; } ;
struct i2c_client {int irq; int dev; } ;
struct da903x_platform_data {int dummy; } ;
struct da903x_chip {int events_mask; TYPE_1__* ops; int notifier_list; int irq_work; int lock; int * dev; struct i2c_client* client; } ;
struct TYPE_2__ {int (* init_chip ) (struct da903x_chip*) ;int (* read_events ) (struct da903x_chip*,unsigned int*) ;int (* mask_events ) (struct da903x_chip*,int) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct da903x_chip*,struct da903x_platform_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int *,char*,int ) ;
 struct da903x_platform_data* FUNC_4 (int *) ;
 struct da903x_chip* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,int ,int ,char*,struct da903x_chip*) ;
 int FUNC_7 (struct i2c_client*,struct da903x_chip*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct da903x_chip*) ;
 int FUNC_10 (struct da903x_chip*,int) ;
 int FUNC_11 (struct da903x_chip*,unsigned int*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_6,
      const struct i2c_device_id *VAR_7)
{
 struct da903x_platform_data *VAR_8 = FUNC_4(&VAR_6->dev);
 struct da903x_chip *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(&VAR_6->dev, sizeof(struct da903x_chip),
    VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_9->client = VAR_6;
 VAR_9->dev = &VAR_6->dev;
 VAR_9->ops = &VAR_5[VAR_7->driver_data];

 FUNC_8(&VAR_9->lock);
 FUNC_1(&VAR_9->irq_work, VAR_4);
 FUNC_0(&VAR_9->notifier_list);

 FUNC_7(VAR_6, VAR_9);

 VAR_11 = VAR_9->ops->init_chip(VAR_9);
 if (VAR_11)
  return VAR_11;


 VAR_9->events_mask = 0xffffffff;
 VAR_9->ops->mask_events(VAR_9, VAR_9->events_mask);
 VAR_9->ops->read_events(VAR_9, &VAR_10);

 VAR_11 = FUNC_6(&VAR_6->dev, VAR_6->irq, VAR_3,
   VAR_2,
   "da903x", VAR_9);
 if (VAR_11) {
  FUNC_3(&VAR_6->dev, "failed to request irq %d\n",
    VAR_6->irq);
  return VAR_11;
 }

 return FUNC_2(VAR_9, VAR_8);
}
