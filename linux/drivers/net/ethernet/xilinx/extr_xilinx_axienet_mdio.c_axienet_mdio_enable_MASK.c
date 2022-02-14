
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct axienet_local {int ndev; scalar_t__ clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct axienet_local*,int ,int) ;
 int FUNC_1 (struct axienet_local*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*) ;
 struct device_node* FUNC_6 (int *,char*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*,char*,int*) ;

int FUNC_9(struct axienet_local *VAR_4)
{
 u32 VAR_5, VAR_6;

 if (VAR_4->clk) {
  VAR_6 = FUNC_2(VAR_4->clk);
 } else {
  struct device_node *VAR_7;




  VAR_7 = FUNC_6(((void*)0), "cpu");
  if (!VAR_7) {
   FUNC_5(VAR_4->ndev, "Could not find CPU device node.\n");
   VAR_6 = VAR_0;
  } else {
   int VAR_8 = FUNC_8(VAR_7, "clock-frequency",
             &VAR_6);
   if (VAR_8) {
    FUNC_5(VAR_4->ndev, "CPU clock-frequency property not found.\n");
    VAR_6 = VAR_0;
   }
   FUNC_7(VAR_7);
  }
  FUNC_4(VAR_4->ndev, "Setting assumed host clock to %u\n",
       VAR_6);
 }
 VAR_5 = (VAR_6 / (VAR_1 * 2)) - 1;




 if (VAR_6 % (VAR_1 * 2))
  VAR_5++;

 FUNC_3(VAR_4->ndev,
     "Setting MDIO clock divisor to %u/%u Hz host clock.\n",
     VAR_5, VAR_6);

 FUNC_0(VAR_4, VAR_3, VAR_5 | VAR_2);

 return FUNC_1(VAR_4);
}
