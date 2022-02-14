
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_connection {TYPE_1__* bundle; } ;
struct gb_cap {int node; int cdev; int class_device; int dev_num; int * parent; int kref; int mutex; struct gb_connection* connection; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int *,int ,int *,char*,int) ;
 int FUNC_8 (struct gb_connection*) ;
 int FUNC_9 (struct gb_connection*) ;
 int FUNC_10 (struct gb_connection*,struct gb_cap*) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 struct gb_cap* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int VAR_8 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct gb_cap*) ;

int FUNC_21(struct gb_connection *VAR_9)
{
 struct gb_cap *VAR_10;
 int VAR_11, VAR_12;

 if (!VAR_9)
  return 0;

 VAR_10 = FUNC_14(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->parent = &VAR_9->bundle->dev;
 VAR_10->connection = VAR_9;
 FUNC_17(&VAR_10->mutex);
 FUNC_10(VAR_9, VAR_10);
 FUNC_13(&VAR_10->kref);

 FUNC_18(&VAR_8);
 FUNC_15(&VAR_10->node, &VAR_6);
 FUNC_19(&VAR_8);

 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11)
  goto err_list_del;

 VAR_12 = FUNC_11(&VAR_7, 0, VAR_2, VAR_1);
 if (VAR_12 < 0) {
  VAR_11 = VAR_12;
  goto err_connection_disable;
 }


 VAR_10->dev_num = FUNC_2(FUNC_1(VAR_4), VAR_12);
 FUNC_6(&VAR_10->cdev, &VAR_5);

 VAR_11 = FUNC_4(&VAR_10->cdev, VAR_10->dev_num, 1);
 if (VAR_11)
  goto err_remove_ida;


 VAR_10->class_device = FUNC_7(VAR_3, VAR_10->parent, VAR_10->dev_num,
       ((void*)0), "gb-authenticate-%d", VAR_12);
 if (FUNC_0(VAR_10->class_device)) {
  VAR_11 = FUNC_3(VAR_10->class_device);
  goto err_del_cdev;
 }

 return 0;

err_del_cdev:
 FUNC_5(&VAR_10->cdev);
err_remove_ida:
 FUNC_12(&VAR_7, VAR_12);
err_connection_disable:
 FUNC_8(VAR_9);
err_list_del:
 FUNC_18(&VAR_8);
 FUNC_16(&VAR_10->node);
 FUNC_19(&VAR_8);

 FUNC_20(VAR_10);

 return VAR_11;
}
