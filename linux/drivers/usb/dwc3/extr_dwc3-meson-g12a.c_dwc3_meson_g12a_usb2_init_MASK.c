
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_meson_g12a {scalar_t__ otg_mode; int regmap; int otg_phy_mode; int * phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct dwc3_meson_g12a*,int,int ) ;
 int FUNC_1 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(struct dwc3_meson_g12a *VAR_10)
{
 int VAR_11;

 if (VAR_10->otg_mode == VAR_9)
  VAR_10->otg_phy_mode = VAR_0;
 else
  VAR_10->otg_phy_mode = VAR_1;

 for (VAR_11 = 0 ; VAR_11 < VAR_8 ; ++VAR_11) {
  if (!VAR_10->phys[VAR_11])
   continue;

  FUNC_1(VAR_10->regmap, VAR_2 + (VAR_6 * VAR_11),
       VAR_5,
       VAR_5);

  if (VAR_11 == VAR_7) {
   FUNC_1(VAR_10->regmap,
    VAR_2 + (VAR_6 * VAR_11),
    VAR_4 | VAR_3,
    VAR_4 | VAR_3);

   FUNC_0(VAR_10, VAR_11,
            VAR_10->otg_phy_mode);
  } else
   FUNC_0(VAR_10, VAR_11,
            VAR_1);

  FUNC_1(VAR_10->regmap, VAR_2 + (VAR_6 * VAR_11),
       VAR_5, 0);
 }

 return 0;
}
