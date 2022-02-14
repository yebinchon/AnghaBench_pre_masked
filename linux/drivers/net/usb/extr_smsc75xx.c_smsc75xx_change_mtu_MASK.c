
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct usbnet*,scalar_t__) ;
 int FUNC_3 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct usbnet *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_2 + VAR_0);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3->net, "Failed to set mac rx frame length\n");
  return VAR_4;
 }

 return FUNC_3(VAR_1, VAR_2);
}
