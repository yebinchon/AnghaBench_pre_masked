
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_meson_g12a {scalar_t__ usb3_ports; int regmap; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dwc3_meson_g12a*) ;
 int FUNC_2 (struct dwc3_meson_g12a*) ;
 int FUNC_3 (struct dwc3_meson_g12a*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dwc3_meson_g12a *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_6->regmap, VAR_0,
   VAR_1,
   FUNC_0(VAR_1, 0x20));

 FUNC_4(VAR_6->regmap, VAR_2,
   VAR_3,
   VAR_3);
 FUNC_4(VAR_6->regmap, VAR_2,
   VAR_4,
   VAR_4);
 FUNC_4(VAR_6->regmap, VAR_2,
   VAR_5,
   FUNC_0(VAR_5, 0xff));


 if (VAR_6->usb3_ports)
  FUNC_2(VAR_6);

 FUNC_3(VAR_6);

 return 0;
}
