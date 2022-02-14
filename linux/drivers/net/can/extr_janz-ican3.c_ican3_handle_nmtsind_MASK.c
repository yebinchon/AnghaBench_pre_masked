
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ican3_msg {int* data; int len; } ;
struct ican3_dev {int ndev; } ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ican3_dev*,struct ican3_msg*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int*,int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ican3_dev *VAR_2, struct ican3_msg *VAR_3)
{
 u16 VAR_4;

 VAR_4 = VAR_3->data[0] + VAR_3->data[1] * 0x100;
 if (VAR_4 == VAR_0) {
  switch (VAR_3->data[2]) {
  case 131:
  case 130:



   FUNC_1(&VAR_3->len, -3);
   FUNC_3(VAR_3->data, VAR_3->data + 3, FUNC_2(VAR_3->len));
   FUNC_0(VAR_2, VAR_3);
   break;
  case 129:
  case 128:

   break;
  default:
   FUNC_4(VAR_2->ndev, "unknown NMTS event indication %x\n",
        VAR_3->data[2]);
   break;
  }
 } else if (VAR_4 == VAR_1) {

 } else {
  FUNC_4(VAR_2->ndev, "unhandled NMTS indication %x\n",
       VAR_4);
  return;
 }
}
