
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qede_dev {TYPE_1__* ndev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct qede_dev*) ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(void *VAR_0, u8 *VAR_1, bool VAR_2)
{
 struct qede_dev *VAR_3 = VAR_0;

 FUNC_0(VAR_3);

 if (!FUNC_3(VAR_1)) {
  FUNC_1(VAR_3);
  return;
 }

 FUNC_2(VAR_3->ndev->dev_addr, VAR_1);
 FUNC_1(VAR_3);
}
