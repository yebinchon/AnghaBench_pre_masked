
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mdio_device {int addr; int bus; } ;
struct bcm_ns_usb3 {struct mdio_device* mdiodev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bcm_ns_usb3 *VAR_0, u16 VAR_1,
      u16 VAR_2)
{
 struct mdio_device *VAR_3 = VAR_0->mdiodev;

 return FUNC_0(VAR_3->bus, VAR_3->addr, VAR_1, VAR_2);
}
