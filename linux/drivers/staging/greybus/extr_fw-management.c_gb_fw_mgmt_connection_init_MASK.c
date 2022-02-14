
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_connection {TYPE_1__* bundle; } ;
struct fw_mgmt {int node; int cdev; int class_device; int dev_num; int * parent; int kref; int mutex; int id_map; int completion; struct gb_connection* connection; int timeout_jiffies; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int *,int ,int *,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct gb_connection*) ;
 int FUNC_9 (struct gb_connection*) ;
 int FUNC_10 (struct gb_connection*,struct fw_mgmt*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct fw_mgmt* FUNC_16 (int,int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int VAR_9 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct fw_mgmt*) ;

int FUNC_24(struct gb_connection *VAR_10)
{
 struct fw_mgmt *VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_10)
  return 0;

 VAR_11 = FUNC_16(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->parent = &VAR_10->bundle->dev;
 VAR_11->timeout_jiffies = FUNC_19(VAR_1);
 VAR_11->connection = VAR_10;

 FUNC_10(VAR_10, VAR_11);
 FUNC_14(&VAR_11->completion);
 FUNC_11(&VAR_11->id_map);
 FUNC_20(&VAR_11->mutex);
 FUNC_15(&VAR_11->kref);

 FUNC_21(&VAR_9);
 FUNC_17(&VAR_11->node, &VAR_7);
 FUNC_22(&VAR_9);

 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12)
  goto err_list_del;

 VAR_13 = FUNC_12(&VAR_8, 0, VAR_3, VAR_2);
 if (VAR_13 < 0) {
  VAR_12 = VAR_13;
  goto err_connection_disable;
 }


 VAR_11->dev_num = FUNC_2(FUNC_1(VAR_5), VAR_13);
 FUNC_6(&VAR_11->cdev, &VAR_6);

 VAR_12 = FUNC_4(&VAR_11->cdev, VAR_11->dev_num, 1);
 if (VAR_12)
  goto err_remove_ida;


 VAR_11->class_device = FUNC_7(VAR_4, VAR_11->parent,
           VAR_11->dev_num, ((void*)0),
           "gb-fw-mgmt-%d", VAR_13);
 if (FUNC_0(VAR_11->class_device)) {
  VAR_12 = FUNC_3(VAR_11->class_device);
  goto err_del_cdev;
 }

 return 0;

err_del_cdev:
 FUNC_5(&VAR_11->cdev);
err_remove_ida:
 FUNC_13(&VAR_8, VAR_13);
err_connection_disable:
 FUNC_8(VAR_10);
err_list_del:
 FUNC_21(&VAR_9);
 FUNC_18(&VAR_11->node);
 FUNC_22(&VAR_9);

 FUNC_23(VAR_11);

 return VAR_12;
}
