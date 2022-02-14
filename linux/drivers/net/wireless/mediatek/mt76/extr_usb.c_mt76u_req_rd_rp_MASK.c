
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mt76_usb {int usb_ctrl_mtx; } ;
struct mt76_reg_pair {scalar_t__ reg; int value; } ;
struct mt76_dev {struct mt76_usb usb; } ;


 int FUNC_0 (struct mt76_dev*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct mt76_dev *VAR_0, u32 VAR_1, struct mt76_reg_pair *VAR_2,
  int VAR_3)
{
 struct mt76_usb *VAR_4 = &VAR_0->usb;

 FUNC_1(&VAR_4->usb_ctrl_mtx);
 while (VAR_3 > 0) {
  VAR_2->value = FUNC_0(VAR_0, VAR_1 + VAR_2->reg);
  VAR_3--;
  VAR_2++;
 }
 FUNC_2(&VAR_4->usb_ctrl_mtx);

 return 0;
}
