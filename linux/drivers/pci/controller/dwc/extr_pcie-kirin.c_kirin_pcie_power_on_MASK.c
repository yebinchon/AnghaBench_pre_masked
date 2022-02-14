
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirin_pcie {int gpio_id_reset; int sysctrl; int crgctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct kirin_pcie*,int) ;
 int FUNC_3 (struct kirin_pcie*) ;
 int FUNC_4 (struct kirin_pcie*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct kirin_pcie *VAR_14)
{
 int VAR_15;


 FUNC_5(VAR_14->sysctrl,
       VAR_7, VAR_6);
 FUNC_6(VAR_13, VAR_12);
 FUNC_3(VAR_14);

 VAR_15 = FUNC_2(VAR_14, 1);
 if (VAR_15)
  return VAR_15;


 FUNC_5(VAR_14->sysctrl,
       VAR_11, VAR_10);
 FUNC_5(VAR_14->crgctrl,
       VAR_1, VAR_0);
 FUNC_5(VAR_14->sysctrl,
       VAR_9, VAR_8);

 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15)
  goto close_clk;


 if (!FUNC_1(VAR_14->gpio_id_reset, "pcie_perst")) {
  FUNC_6(VAR_5, VAR_4);
  VAR_15 = FUNC_0(VAR_14->gpio_id_reset, 1);
  if (VAR_15)
   goto close_clk;
  FUNC_6(VAR_3, VAR_2);

  return 0;
 }

close_clk:
 FUNC_2(VAR_14, 0);
 return VAR_15;
}
