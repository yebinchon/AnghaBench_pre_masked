
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_omap {int dev; int vbus_reg; } ;
typedef enum omap_dwc3_vbus_id_status { ____Placeholder_omap_dwc3_vbus_id_status } omap_dwc3_vbus_id_status ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc3_omap*) ;
 int FUNC_3 (struct dwc3_omap*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dwc3_omap *VAR_4,
 enum omap_dwc3_vbus_id_status VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 switch (VAR_5) {
 case 130:
  if (VAR_4->vbus_reg) {
   VAR_6 = FUNC_5(VAR_4->vbus_reg);
   if (VAR_6) {
    FUNC_1(VAR_4->dev, "regulator enable failed\n");
    return;
   }
  }

  VAR_7 = FUNC_2(VAR_4);
  VAR_7 &= ~VAR_0;
  FUNC_3(VAR_4, VAR_7);
  break;

 case 128:
  VAR_7 = FUNC_2(VAR_4);
  VAR_7 &= ~VAR_1;
  VAR_7 |= VAR_3
    | VAR_2;
  FUNC_3(VAR_4, VAR_7);
  break;

 case 131:
  if (VAR_4->vbus_reg)
   FUNC_4(VAR_4->vbus_reg);
  VAR_7 = FUNC_2(VAR_4);
  VAR_7 |= VAR_0;
  FUNC_3(VAR_4, VAR_7);
  break;

 case 129:
  VAR_7 = FUNC_2(VAR_4);
  VAR_7 &= ~(VAR_2
    | VAR_3);
  VAR_7 |= VAR_1;
  FUNC_3(VAR_4, VAR_7);
  break;

 default:
  FUNC_0(VAR_4->dev, "invalid state\n");
 }
}
