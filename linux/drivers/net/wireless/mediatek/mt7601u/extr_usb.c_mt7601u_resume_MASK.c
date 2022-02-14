
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct mt7601u_dev {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7601u_dev*) ;
 int FUNC_1 (int ,int *) ;
 struct mt7601u_dev* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_1)
{
 struct mt7601u_dev *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_0, &VAR_2->state);

 return 0;
}
