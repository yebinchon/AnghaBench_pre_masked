
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_usb2phy {struct regmap* usbgrf; struct regmap* grf; } ;
struct regmap {int dummy; } ;



__attribute__((used)) static inline struct regmap *FUNC_0(struct rockchip_usb2phy *VAR_0)
{
 return VAR_0->usbgrf == ((void*)0) ? VAR_0->grf : VAR_0->usbgrf;
}
