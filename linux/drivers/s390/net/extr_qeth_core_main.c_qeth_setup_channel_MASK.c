
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_channel {int irq_pending; int state; struct ccw_device* ccwdev; } ;
struct ccw_device {int handler; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ccw_device*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct qeth_channel *VAR_3)
{
 struct ccw_device *VAR_4 = VAR_3->ccwdev;

 FUNC_0(VAR_1, 2, "setupch");

 VAR_3->state = VAR_0;
 FUNC_1(&VAR_3->irq_pending, 0);

 FUNC_3(FUNC_2(VAR_4));
 VAR_4->handler = VAR_2;
 FUNC_4(FUNC_2(VAR_4));
}
