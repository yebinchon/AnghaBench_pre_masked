
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qe_ep {int data01; int txframe; TYPE_1__* udc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qe_ep*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qe_ep*) ;
 int FUNC_5 (struct qe_ep*,int) ;

__attribute__((used)) static int FUNC_6(struct qe_ep *VAR_2)
{
 if (FUNC_3(VAR_2->txframe) & VAR_0) {
  FUNC_4(VAR_2);
  FUNC_0(VAR_2->udc->dev, "The EP0 transmit data have error!\n");
  if (FUNC_2(VAR_2->txframe) & VAR_1)
   VAR_2->data01 = 0;
  else
   VAR_2->data01 = 1;

  FUNC_5(VAR_2, 1);
 } else
  FUNC_5(VAR_2, 0);

 FUNC_1(VAR_2, VAR_2->txframe);
 return 0;
}
