
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int const*,int) ;
 int FUNC_1 (struct usbnet*,int ,int const*,int ) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_2, const u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1,
       VAR_3, VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->net, "setting BSSID[%pM] failed (%08X)\n",
       VAR_3, VAR_4);
  return VAR_4;
 }

 return VAR_4;
}
