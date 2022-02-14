
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_roothub {int list; struct phy* phy; } ;
struct phy {int dummy; } ;
struct list_head {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy*) ;
 struct usb_phy_roothub* FUNC_3 (struct device*,int,int ) ;
 struct phy* FUNC_4 (struct device*,int ,int) ;
 int FUNC_5 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, int VAR_4,
       struct list_head *VAR_5)
{
 struct usb_phy_roothub *VAR_6;
 struct phy *VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_3->of_node, VAR_4);
 if (FUNC_1(VAR_7)) {
  if (FUNC_2(VAR_7) == -VAR_0)
   return 0;
  else
   return FUNC_2(VAR_7);
 }

 VAR_6 = FUNC_3(VAR_3, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_0(&VAR_6->list);

 VAR_6->phy = VAR_7;

 FUNC_5(&VAR_6->list, VAR_5);

 return 0;
}
