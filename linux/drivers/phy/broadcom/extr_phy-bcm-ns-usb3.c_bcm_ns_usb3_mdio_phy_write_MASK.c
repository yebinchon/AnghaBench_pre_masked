
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bcm_ns_usb3 {int (* phy_write ) (struct bcm_ns_usb3*,int ,int ) ;} ;


 int FUNC_0 (struct bcm_ns_usb3*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bcm_ns_usb3 *VAR_0, u16 VAR_1,
          u16 VAR_2)
{
 return VAR_0->phy_write(VAR_0, VAR_1, VAR_2);
}
