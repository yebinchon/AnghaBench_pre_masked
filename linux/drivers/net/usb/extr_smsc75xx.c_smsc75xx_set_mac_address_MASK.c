
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {TYPE_1__* net; } ;
struct TYPE_2__ {int* dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (struct usbnet*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_4)
{
 u32 VAR_5 = VAR_4->net->dev_addr[0] | VAR_4->net->dev_addr[1] << 8 |
  VAR_4->net->dev_addr[2] << 16 | VAR_4->net->dev_addr[3] << 24;
 u32 VAR_6 = VAR_4->net->dev_addr[4] | VAR_4->net->dev_addr[5] << 8;

 int VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->net, "Failed to write RX_ADDRH: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_3, VAR_5);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->net, "Failed to write RX_ADDRL: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_6 |= VAR_1;
 VAR_7 = FUNC_1(VAR_4, VAR_0, VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->net, "Failed to write ADDR_FILTX: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_0 + 4, VAR_5);
 if (VAR_7 < 0)
  FUNC_0(VAR_4->net, "Failed to write ADDR_FILTX+4: %d\n", VAR_7);

 return VAR_7;
}
