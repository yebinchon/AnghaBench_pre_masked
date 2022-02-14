
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int release; int * class; int devt; } ;
struct event_device_data {int exist; TYPE_1__ dev; int cdev; int available; int wq; int queue_lock; int events; } ;
struct acpi_device {struct event_device_data* driver_data; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (struct event_device_data*) ;
 int FUNC_9 (int *,scalar_t__,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct event_device_data*) ;
 struct event_device_data* FUNC_13 (int,int ) ;
 int VAR_9 ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct acpi_device *VAR_10)
{
 struct event_device_data *VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_9(&VAR_6, VAR_2-1, VAR_3);
 if (VAR_13 < 0) {
  VAR_12 = VAR_13;
  FUNC_4(&VAR_10->dev, "Failed to find minor number: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_11 = FUNC_13(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  goto free_minor;
 }


 VAR_10->driver_data = VAR_11;
 VAR_11->events = FUNC_7(VAR_9);
 if (!VAR_11->events) {
  FUNC_12(VAR_11);
  VAR_12 = -VAR_0;
  goto free_minor;
 }
 FUNC_14(&VAR_11->queue_lock);
 FUNC_11(&VAR_11->wq);
 VAR_11->exist = 1;
 FUNC_1(&VAR_11->available, 1);


 VAR_11->dev.devt = FUNC_0(VAR_7, VAR_13);
 VAR_11->dev.class = &VAR_4;
 VAR_11->dev.release = VAR_8;
 FUNC_5(&VAR_11->dev, VAR_1, VAR_13);
 FUNC_6(&VAR_11->dev);


 FUNC_3(&VAR_11->cdev, &VAR_5);
 VAR_12 = FUNC_2(&VAR_11->cdev, &VAR_11->dev);
 if (VAR_12)
  goto free_dev_data;

 return 0;

free_dev_data:
 FUNC_8(VAR_11);
free_minor:
 FUNC_10(&VAR_6, VAR_13);
 return VAR_12;
}
