
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct uio_info {scalar_t__ irq; struct uio_device* uio_dev; int name; int irq_flags; int version; } ;
struct TYPE_7__ {int release; struct device* parent; int * class; int devt; } ;
struct uio_device {TYPE_1__ dev; int minor; int event; int wait; int info_lock; struct uio_info* info; struct module* owner; } ;
struct module {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,struct uio_device*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct uio_device*) ;
 struct uio_device* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (scalar_t__,int ,int ,int ,struct uio_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct uio_device*) ;
 int FUNC_14 (struct uio_device*) ;
 int VAR_7 ;
 int FUNC_15 (struct uio_device*) ;
 int FUNC_16 (struct uio_device*) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_17(struct module *VAR_10,
     struct device *VAR_11,
     struct uio_info *VAR_12)
{
 struct uio_device *VAR_13;
 int VAR_14 = 0;

 if (!VAR_6)
  return -VAR_2;

 if (!VAR_11 || !VAR_12 || !VAR_12->name || !VAR_12->version)
  return -VAR_0;

 VAR_12->uio_dev = ((void*)0);

 VAR_13 = FUNC_9(sizeof(*VAR_13), VAR_3);
 if (!VAR_13) {
  return -VAR_1;
 }

 VAR_13->owner = VAR_10;
 VAR_13->info = VAR_12;
 FUNC_10(&VAR_13->info_lock);
 FUNC_7(&VAR_13->wait);
 FUNC_1(&VAR_13->event, 0);

 VAR_14 = FUNC_16(VAR_13);
 if (VAR_14) {
  FUNC_8(VAR_13);
  return VAR_14;
 }

 FUNC_6(&VAR_13->dev);
 VAR_13->dev.devt = FUNC_0(VAR_9, VAR_13->minor);
 VAR_13->dev.class = &VAR_5;
 VAR_13->dev.parent = VAR_11;
 VAR_13->dev.release = VAR_7;
 FUNC_2(&VAR_13->dev, VAR_13);

 VAR_14 = FUNC_3(&VAR_13->dev, "uio%d", VAR_13->minor);
 if (VAR_14)
  goto err_device_create;

 VAR_14 = FUNC_4(&VAR_13->dev);
 if (VAR_14)
  goto err_device_create;

 VAR_14 = FUNC_13(VAR_13);
 if (VAR_14)
  goto err_uio_dev_add_attributes;

 VAR_12->uio_dev = VAR_13;

 if (VAR_12->irq && (VAR_12->irq != VAR_4)) {
  VAR_14 = FUNC_12(VAR_12->irq, VAR_8,
      VAR_12->irq_flags, VAR_12->name, VAR_13);
  if (VAR_14) {
   VAR_12->uio_dev = ((void*)0);
   goto err_request_irq;
  }
 }

 return 0;

err_request_irq:
 FUNC_14(VAR_13);
err_uio_dev_add_attributes:
 FUNC_5(&VAR_13->dev);
err_device_create:
 FUNC_15(VAR_13);
 FUNC_11(&VAR_13->dev);
 return VAR_14;
}
