
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_phy_ddata {int * pins_uart; int * pins; int dev; int * pins_utmi; int * pins_ulpi; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int ) ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct cpcap_phy_ddata *VAR_0)
{
 VAR_0->pins = FUNC_3(VAR_0->dev);
 if (FUNC_0(VAR_0->pins)) {
  FUNC_2(VAR_0->dev, "default pins not configured: %ld\n",
    FUNC_1(VAR_0->pins));
  VAR_0->pins = ((void*)0);

  return 0;
 }

 VAR_0->pins_ulpi = FUNC_4(VAR_0->pins, "ulpi");
 if (FUNC_0(VAR_0->pins_ulpi)) {
  FUNC_2(VAR_0->dev, "ulpi pins not configured\n");
  VAR_0->pins_ulpi = ((void*)0);
 }

 VAR_0->pins_utmi = FUNC_4(VAR_0->pins, "utmi");
 if (FUNC_0(VAR_0->pins_utmi)) {
  FUNC_2(VAR_0->dev, "utmi pins not configured\n");
  VAR_0->pins_utmi = ((void*)0);
 }

 VAR_0->pins_uart = FUNC_4(VAR_0->pins, "uart");
 if (FUNC_0(VAR_0->pins_uart)) {
  FUNC_2(VAR_0->dev, "uart pins not configured\n");
  VAR_0->pins_uart = ((void*)0);
 }

 if (VAR_0->pins_uart)
  return FUNC_5(VAR_0->pins, VAR_0->pins_uart);

 return 0;
}
