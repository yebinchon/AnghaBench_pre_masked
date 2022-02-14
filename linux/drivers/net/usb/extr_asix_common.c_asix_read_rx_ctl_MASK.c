
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int net; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

u16 FUNC_3(struct usbnet *VAR_1, int VAR_2)
{
 __le16 VAR_3;
 int VAR_4 = FUNC_0(VAR_1, VAR_0, 0, 0, 2, &VAR_3, VAR_2);

 if (VAR_4 < 0) {
  FUNC_2(VAR_1->net, "Error reading RX_CTL register: %02x\n", VAR_4);
  goto out;
 }
 VAR_4 = FUNC_1(VAR_3);
out:
 return VAR_4;
}
