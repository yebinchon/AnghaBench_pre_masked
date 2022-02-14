
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct most_dev {int usb_device; } ;
struct mbo {int bus_address; int ifp; } ;


 int VAR_0 ;
 struct most_dev* FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static void *FUNC_2(struct mbo *VAR_1, u32 VAR_2)
{
 struct most_dev *VAR_3 = FUNC_0(VAR_1->ifp);

 return FUNC_1(VAR_3->usb_device, VAR_2, VAR_0,
      &VAR_1->bus_address);
}
