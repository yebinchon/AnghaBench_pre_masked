
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_connection {int dummy; } ;
struct fw_mgmt {int disabled; int node; int connection; int mutex; int dev_num; int cdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 struct fw_mgmt* FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct fw_mgmt*) ;

void FUNC_10(struct gb_connection *VAR_3)
{
 struct fw_mgmt *VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = FUNC_4(VAR_3);

 FUNC_2(VAR_0, VAR_4->dev_num);
 FUNC_1(&VAR_4->cdev);
 FUNC_5(&VAR_1, FUNC_0(VAR_4->dev_num));





 FUNC_7(&VAR_4->mutex);
 VAR_4->disabled = 1;
 FUNC_8(&VAR_4->mutex);


 FUNC_3(VAR_4->connection);


 FUNC_7(&VAR_2);
 FUNC_6(&VAR_4->node);
 FUNC_8(&VAR_2);






 FUNC_9(VAR_4);
}
