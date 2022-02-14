
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_keystone {int usbss; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_8, void *VAR_9)
{
 struct dwc3_keystone *VAR_10 = VAR_9;

 FUNC_1(VAR_10->usbss, VAR_1, VAR_4);
 FUNC_1(VAR_10->usbss, VAR_3, VAR_7);
 FUNC_1(VAR_10->usbss, VAR_2, VAR_5);
 FUNC_1(VAR_10->usbss, VAR_6, FUNC_0(0));

 return VAR_0;
}
