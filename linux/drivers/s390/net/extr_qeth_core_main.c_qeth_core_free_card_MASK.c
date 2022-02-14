
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* gdev; int qeth_service_level; int event_wq; int read_cmd; int data; int write; int read; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct qeth_card *VAR_0)
{
 FUNC_0(VAR_0, 2, "freecrd");
 FUNC_4(&VAR_0->read);
 FUNC_4(&VAR_0->write);
 FUNC_4(&VAR_0->data);
 FUNC_6(VAR_0->read_cmd);
 FUNC_1(VAR_0->event_wq);
 FUNC_5(VAR_0);
 FUNC_7(&VAR_0->qeth_service_level);
 FUNC_2(&VAR_0->gdev->dev, ((void*)0));
 FUNC_3(VAR_0);
}
