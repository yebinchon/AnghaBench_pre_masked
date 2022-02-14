
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct usbnet*,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_2(VAR_3, VAR_1 | VAR_2);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3->net, "Failed to power down PHY : %d\n", VAR_4);
  return VAR_4;
 }
 FUNC_0(20);


 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3->net, "Failed to reset PHY: %d\n", VAR_4);
  return VAR_4;
 }
 FUNC_0(600);


 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3->net, "Failed to power up PHY: %d\n", VAR_4);
  return VAR_4;
 }
 FUNC_0(20);


 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3->net, "Failed to reset PHY: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
