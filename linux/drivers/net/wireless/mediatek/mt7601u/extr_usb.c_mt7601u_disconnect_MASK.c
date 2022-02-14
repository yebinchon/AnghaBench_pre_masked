
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct mt7601u_dev {int hw; int stat_wq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct mt7601u_dev*) ;
 struct mt7601u_dev* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct mt7601u_dev *VAR_1 = FUNC_5(VAR_0);

 FUNC_2(VAR_1->hw);
 FUNC_4(VAR_1);

 FUNC_7(VAR_0, ((void*)0));
 FUNC_6(FUNC_3(VAR_0));

 FUNC_0(VAR_1->stat_wq);
 FUNC_1(VAR_1->hw);
}
