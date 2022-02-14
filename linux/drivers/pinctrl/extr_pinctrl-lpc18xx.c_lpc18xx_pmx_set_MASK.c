
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dev; } ;
struct lpc18xx_scu_data {int base; } ;
struct lpc18xx_pin_caps {scalar_t__ type; int analog; int offset; unsigned int* functions; } ;
struct TYPE_2__ {int name; struct lpc18xx_pin_caps* drv_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int * VAR_16 ;
 TYPE_1__* VAR_17 ;
 struct lpc18xx_scu_data* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_18, unsigned VAR_19,
      unsigned VAR_20)
{
 struct lpc18xx_scu_data *VAR_21 = FUNC_2(VAR_18);
 struct lpc18xx_pin_caps *VAR_22 = VAR_17[VAR_20].drv_data;
 int VAR_23;
 u32 VAR_24;


 if (VAR_22->type == VAR_15) {
  if (VAR_19 == VAR_4)
   return 0;

  goto fail;
 }

 if (VAR_22->type == VAR_14) {
  if (VAR_19 == VAR_3)
   return 0;

  goto fail;
 }

 if (VAR_19 == VAR_1 && (VAR_22->analog & VAR_6)) {
  u32 VAR_25;

  FUNC_4(VAR_7, VAR_21->base + VAR_22->offset);

  if (FUNC_0(VAR_22->analog) == 0)
   VAR_25 = VAR_10;
  else
   VAR_25 = VAR_11;

  VAR_24 = FUNC_3(VAR_21->base + VAR_25);
  VAR_24 |= VAR_22->analog & VAR_5;
  FUNC_4(VAR_24, VAR_21->base + VAR_25);

  return 0;
 }

 if (VAR_19 == VAR_2 && (VAR_22->analog & VAR_6)) {
  FUNC_4(VAR_7, VAR_21->base + VAR_22->offset);

  VAR_24 = FUNC_3(VAR_21->base + VAR_12);
  VAR_24 |= VAR_13;
  FUNC_4(VAR_24, VAR_21->base + VAR_12);

  return 0;
 }

 for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23++) {
  if (VAR_19 == VAR_22->functions[VAR_23])
   break;
 }

 if (VAR_23 >= VAR_8)
  goto fail;

 VAR_24 = FUNC_3(VAR_21->base + VAR_22->offset);
 VAR_24 &= ~VAR_9;
 FUNC_4(VAR_24 | VAR_23, VAR_21->base + VAR_22->offset);

 return 0;
fail:
 FUNC_1(VAR_18->dev, "Pin %s can't be %s\n", VAR_17[VAR_20].name,
            VAR_16[VAR_19]);
 return -VAR_0;
}
