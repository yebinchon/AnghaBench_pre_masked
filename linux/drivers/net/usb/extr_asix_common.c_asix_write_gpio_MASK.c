
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int net; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ,int) ;

int FUNC_4(struct usbnet *VAR_1, u16 VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_1->net, "asix_write_gpio() - value = 0x%04x\n", VAR_2);
 VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_2, 0, 0, ((void*)0), VAR_4);
 if (VAR_5 < 0)
  FUNC_3(VAR_1->net, "Failed to write GPIO value 0x%04x: %02x\n",
      VAR_2, VAR_5);

 if (VAR_3)
  FUNC_1(VAR_3);

 return VAR_5;
}
