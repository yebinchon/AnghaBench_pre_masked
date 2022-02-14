
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int num_queues; int netdev; } ;


 int FUNC_0 (struct ena_adapter*,int) ;
 int FUNC_1 (struct ena_adapter*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct ena_adapter*,int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ena_adapter *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_queues; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3)
   goto err_setup_tx;
 }

 return 0;

err_setup_tx:

 FUNC_2(VAR_1, VAR_0, VAR_1->netdev,
    "Tx queue %d: allocation failed\n", VAR_2);


 while (VAR_2--)
  FUNC_0(VAR_1, VAR_2);
 return VAR_3;
}
