
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ican3_msg {int* data; } ;
struct TYPE_2__ {int rxerr; int txerr; } ;
struct ican3_dev {int termination_enabled; int ndev; int termination_comp; int buserror_comp; TYPE_1__ bec; } ;


 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct ican3_dev *VAR_1, struct ican3_msg *VAR_2)
{
 switch (VAR_2->data[0]) {
 case 129:
 case 130:
  VAR_1->bec.rxerr = VAR_2->data[5];
  VAR_1->bec.txerr = VAR_2->data[6];
  FUNC_0(&VAR_1->buserror_comp);
  break;
 case 128:
  VAR_1->termination_enabled = VAR_2->data[6] & VAR_0;
  FUNC_0(&VAR_1->termination_comp);
  break;
 default:
  FUNC_1(VAR_1->ndev, "received an unknown inquiry response\n");
  break;
 }
}
