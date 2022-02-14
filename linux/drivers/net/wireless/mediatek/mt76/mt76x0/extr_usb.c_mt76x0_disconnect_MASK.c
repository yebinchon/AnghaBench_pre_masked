
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int hw; int state; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (int ,int *) ;
 struct mt76x02_dev* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct mt76x02_dev *VAR_2 = FUNC_5(VAR_1);
 bool VAR_3 = FUNC_4(VAR_0, &VAR_2->mt76.state);

 if (!VAR_3)
  return;

 FUNC_1(VAR_2->mt76.hw);
 FUNC_3(VAR_2);

 FUNC_7(VAR_1, ((void*)0));
 FUNC_6(FUNC_2(VAR_1));

 FUNC_0(VAR_2->mt76.hw);
}
