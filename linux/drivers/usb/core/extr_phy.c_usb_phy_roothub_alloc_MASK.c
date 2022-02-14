
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_roothub {int list; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_phy_roothub* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct usb_phy_roothub* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (struct device*,int,int *) ;

struct usb_phy_roothub *FUNC_6(struct device *VAR_3)
{
 struct usb_phy_roothub *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (!FUNC_2(VAR_0))
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_3->of_node, "phys",
           "#phy-cells");
 if (VAR_6 <= 0)
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_3, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 FUNC_1(&VAR_4->list);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = FUNC_5(VAR_3, VAR_5, &VAR_4->list);
  if (VAR_7)
   return FUNC_0(VAR_7);
 }

 return VAR_4;
}
