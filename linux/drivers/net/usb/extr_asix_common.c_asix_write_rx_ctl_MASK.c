
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int net; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,int *,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ,int) ;

int FUNC_3(struct usbnet *VAR_1, u16 VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1->net, "asix_write_rx_ctl() - mode = 0x%04x\n", VAR_2);
 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2, 0, 0, ((void*)0), VAR_3);
 if (VAR_4 < 0)
  FUNC_2(VAR_1->net, "Failed to write RX_CTL mode to 0x%04x: %02x\n",
      VAR_2, VAR_4);

 return VAR_4;
}
