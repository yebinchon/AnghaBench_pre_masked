
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_queue_info {int id; } ;
struct be_rx_obj {struct be_adapter* adapter; struct be_queue_info cq; } ;
struct be_rx_compl_info {scalar_t__ num_rcvd; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct be_adapter*,int ) ;
 int FUNC_1 (struct be_adapter*,int ,int,int) ;
 int FUNC_2 (struct be_rx_obj*,struct be_rx_compl_info*) ;
 struct be_rx_compl_info* FUNC_3 (struct be_rx_obj*) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct be_rx_obj *VAR_1)
{
 struct be_queue_info *VAR_2 = &VAR_1->cq;
 struct be_rx_compl_info *VAR_3;
 struct be_adapter *VAR_4 = VAR_1->adapter;
 int VAR_5 = 0;







 for (;;) {
  VAR_3 = FUNC_3(VAR_1);
  if (!VAR_3) {
   if (FUNC_5(VAR_4))
    break;

   if (VAR_5++ > 50 ||
       FUNC_0(VAR_4,
        VAR_0)) {
    FUNC_4(&VAR_4->pdev->dev,
      "did not receive flush compl\n");
    break;
   }
   FUNC_1(VAR_4, VAR_2->id, 1, 0);
   FUNC_6(1);
  } else {
   FUNC_2(VAR_1, VAR_3);
   FUNC_1(VAR_4, VAR_2->id, 0, 1);
   if (VAR_3->num_rcvd == 0)
    break;
  }
 }


 FUNC_1(VAR_4, VAR_2->id, 0, 0);
}
