
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct most_dev {int usb_device; } ;
struct mbo {int bus_address; int virt_address; int ifp; } ;


 struct most_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mbo *VAR_0, u32 VAR_1)
{
 struct most_dev *VAR_2 = FUNC_0(VAR_0->ifp);

 FUNC_1(VAR_2->usb_device, VAR_1, VAR_0->virt_address,
     VAR_0->bus_address);
}
