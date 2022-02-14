
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qeth_card {TYPE_1__* gdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,char*,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_3, int VAR_4, u16 VAR_5)
{
 int VAR_6;

 if (VAR_4 == 0)
  switch (VAR_5) {
  case 0x0001:
   VAR_6 = 0;
   break;
  case 0x0004:
  case 0x0100:
  case 0x0106:
   VAR_6 = -VAR_2;
   FUNC_1(&VAR_3->gdev->dev,
    "Setting address notification failed\n");
   break;
  case 0x0107:
   VAR_6 = -VAR_0;
   break;
  default:
   VAR_6 = -VAR_1;
  }
 else
  VAR_6 = -VAR_1;

 if (VAR_6) {
  FUNC_0(VAR_3, 2, "SBPp%04x", VAR_4);
  FUNC_0(VAR_3, 2, "SBPr%04x", VAR_5);
 }
 return VAR_6;
}
