
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_device {int mutex; int usb; scalar_t__ usb_gone; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, bool VAR_2)
{
 struct hso_device *VAR_3 = VAR_1;
 int VAR_4 = !VAR_2;
 int VAR_5;

 FUNC_0(&VAR_3->mutex);
 if (VAR_3->usb_gone)
  VAR_5 = 0;
 else
  VAR_5 = FUNC_2(VAR_3->usb, FUNC_3(VAR_3->usb, 0),
           VAR_4 ? 0x82 : 0x81, 0x40, 0, 0, ((void*)0), 0,
           VAR_0);
 FUNC_1(&VAR_3->mutex);
 return VAR_5;
}
