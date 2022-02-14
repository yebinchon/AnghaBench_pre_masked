
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fieldbus_dev {int id; int cdev; int dev; int parent; int dc_wq; int fieldbus_id_get; int write_area; int read_area; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int ,struct fieldbus_dev*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int,int ,int) ;

__attribute__((used)) static int FUNC_12(struct fieldbus_dev *VAR_7)
{
 dev_t VAR_8;
 int VAR_9;

 if (!VAR_7)
  return -VAR_0;
 if (!VAR_7->read_area || !VAR_7->write_area || !VAR_7->fieldbus_id_get)
  return -VAR_0;
 VAR_7->id = FUNC_8(&VAR_6, 0, VAR_2, VAR_1);
 if (VAR_7->id < 0)
  return VAR_7->id;
 VAR_8 = FUNC_2(FUNC_1(VAR_4), VAR_7->id);
 FUNC_10(&VAR_7->dc_wq);
 FUNC_6(&VAR_7->cdev, &VAR_5);
 VAR_9 = FUNC_4(&VAR_7->cdev, VAR_8, 1);
 if (VAR_9) {
  FUNC_11("fieldbus_dev%d unable to add device %d:%d\n",
         VAR_7->id, FUNC_1(VAR_4), VAR_7->id);
  goto err_cdev;
 }
 VAR_7->dev = FUNC_7(&VAR_3, VAR_7->parent, VAR_8, VAR_7,
    "fieldbus_dev%d", VAR_7->id);
 if (FUNC_0(VAR_7->dev)) {
  VAR_9 = FUNC_3(VAR_7->dev);
  goto err_dev_create;
 }
 return 0;

err_dev_create:
 FUNC_5(&VAR_7->cdev);
err_cdev:
 FUNC_9(&VAR_6, VAR_7->id);
 return VAR_9;
}
