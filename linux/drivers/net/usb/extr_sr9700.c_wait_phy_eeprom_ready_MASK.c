
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct usbnet*,int ,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  u8 VAR_7 = 0;
  int VAR_8;

  FUNC_2(1);
  VAR_8 = FUNC_1(VAR_4, VAR_2, &VAR_7);
  if (VAR_8 < 0)
   return VAR_8;


  if (!(VAR_7 & VAR_1))
   return 0;
 }

 FUNC_0(VAR_4->net, "%s write timed out!\n", VAR_5 ? "phy" : "eeprom");

 return -VAR_0;
}
