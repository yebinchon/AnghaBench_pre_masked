
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crq_server_adapter {int work_task; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct crq_server_adapter *VAR_3 =
  (struct crq_server_adapter *)VAR_2;

 FUNC_2(FUNC_1(VAR_3->dev));
 FUNC_0(&VAR_3->work_task);

 return VAR_0;
}
