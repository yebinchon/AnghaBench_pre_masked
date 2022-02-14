
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct wm8994_pdata {void** gpio_defaults; scalar_t__ csnaddr_pd; scalar_t__ spkmode_pu; int ldo_ena_always_driven; int gpio_base; int irq_base; } ;
struct wm8994 {int type; int num_supplies; int revision; int cust_id; int dev; TYPE_1__* supplies; int ldo_ena_always_driven; int gpio_base; int irq_base; int regmap; struct wm8994_pdata pdata; } ;
struct regulator_bulk_data {int dummy; } ;
struct regmap_config {int dummy; } ;
typedef void* reg_sequence ;
struct TYPE_6__ {void* supply; } ;


 int FUNC_0 (void**) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,char*,...) ;
 struct wm8994_pdata* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char const*,char,int) ;
 int FUNC_5 (int ,struct wm8994*) ;
 int FUNC_6 (int ,char*,char) ;
 TYPE_1__* FUNC_7 (int ,int,int,int ) ;
 int FUNC_8 (int ,int,void**,int,int *,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,void* const*,int) ;
 int FUNC_13 (int ,struct regmap_config*) ;
 int FUNC_14 (int,TYPE_1__*) ;
 int FUNC_15 (int,TYPE_1__*) ;
 int FUNC_16 (int,TYPE_1__*) ;
 int FUNC_17 (int ,int,TYPE_1__*) ;
 void** VAR_17 ;
 struct regmap_config VAR_18 ;
 void** VAR_19 ;
 void** VAR_20 ;
 struct regmap_config VAR_21 ;
 void** VAR_22 ;
 void** VAR_23 ;
 int FUNC_18 (struct wm8994*) ;
 int FUNC_19 (struct wm8994*) ;
 scalar_t__ FUNC_20 (struct wm8994_pdata*,int) ;
 void** VAR_24 ;
 int FUNC_21 (struct wm8994*,int ) ;
 int FUNC_22 (struct wm8994*,int ,int) ;
 struct regmap_config VAR_25 ;
 void** VAR_26 ;
 void** VAR_27 ;
 int FUNC_23 (struct wm8994*,scalar_t__,int,int) ;
 int FUNC_24 (struct wm8994*) ;

__attribute__((used)) static int FUNC_25(struct wm8994 *VAR_28, int VAR_29)
{
 struct wm8994_pdata *VAR_30;
 struct regmap_config *VAR_31;
 const struct reg_sequence *VAR_32 = ((void*)0);
 const char *VAR_33;
 int VAR_34, VAR_35, VAR_36 = 0;
 int VAR_37 = 0;

 if (FUNC_3(VAR_28->dev)) {
  VAR_30 = FUNC_3(VAR_28->dev);
  VAR_28->pdata = *VAR_30;
 }
 VAR_30 = &VAR_28->pdata;

 VAR_34 = FUNC_24(VAR_28);
 if (VAR_34 != 0)
  return VAR_34;

 FUNC_5(VAR_28->dev, VAR_28);


 VAR_34 = FUNC_8(VAR_28->dev, 0,
         VAR_26,
         FUNC_0(VAR_26),
         ((void*)0), 0, ((void*)0));
 if (VAR_34 != 0) {
  FUNC_2(VAR_28->dev, "Failed to add children: %d\n", VAR_34);
  goto err;
 }

 switch (VAR_28->type) {
 case 130:
  VAR_28->num_supplies = FUNC_0(VAR_17);
  break;
 case 128:
  VAR_28->num_supplies = FUNC_0(VAR_24);
  break;
 case 129:
  VAR_28->num_supplies = FUNC_0(VAR_20);
  break;
 default:
  FUNC_1();
  goto err;
 }

 VAR_28->supplies = FUNC_7(VAR_28->dev,
     VAR_28->num_supplies,
     sizeof(struct regulator_bulk_data),
     VAR_2);
 if (!VAR_28->supplies) {
  VAR_34 = -VAR_1;
  goto err;
 }

 switch (VAR_28->type) {
 case 130:
  for (VAR_35 = 0; VAR_35 < FUNC_0(VAR_17); VAR_35++)
   VAR_28->supplies[VAR_35].supply = VAR_17[VAR_35];
  break;
 case 128:
  for (VAR_35 = 0; VAR_35 < FUNC_0(VAR_24); VAR_35++)
   VAR_28->supplies[VAR_35].supply = VAR_24[VAR_35];
  break;
 case 129:
  for (VAR_35 = 0; VAR_35 < FUNC_0(VAR_20); VAR_35++)
   VAR_28->supplies[VAR_35].supply = VAR_20[VAR_35];
  break;
 default:
  FUNC_1();
  goto err;
 }






 VAR_34 = FUNC_17(VAR_28->dev, VAR_28->num_supplies,
     VAR_28->supplies);
 if (VAR_34 != 0) {
  FUNC_2(VAR_28->dev, "Failed to get supplies: %d\n", VAR_34);
  goto err;
 }

 VAR_34 = FUNC_15(VAR_28->num_supplies, VAR_28->supplies);
 if (VAR_34 != 0) {
  FUNC_2(VAR_28->dev, "Failed to enable supplies: %d\n", VAR_34);
  goto err_regulator_free;
 }

 VAR_34 = FUNC_21(VAR_28, VAR_15);
 if (VAR_34 < 0) {
  FUNC_2(VAR_28->dev, "Failed to read ID register\n");
  goto err_enable;
 }
 switch (VAR_34) {
 case 0x1811:
  VAR_33 = "WM1811";
  if (VAR_28->type != 130)
   FUNC_6(VAR_28->dev, "Device registered as type %d\n",
     VAR_28->type);
  VAR_28->type = 130;
  break;
 case 0x8994:
  VAR_33 = "WM8994";
  if (VAR_28->type != 128)
   FUNC_6(VAR_28->dev, "Device registered as type %d\n",
     VAR_28->type);
  VAR_28->type = 128;
  break;
 case 0x8958:
  VAR_33 = "WM8958";
  if (VAR_28->type != 129)
   FUNC_6(VAR_28->dev, "Device registered as type %d\n",
     VAR_28->type);
  VAR_28->type = 129;
  break;
 default:
  FUNC_2(VAR_28->dev, "Device is not a WM8994, ID is %x\n",
   VAR_34);
  VAR_34 = -VAR_0;
  goto err_enable;
 }

 VAR_34 = FUNC_21(VAR_28, VAR_3);
 if (VAR_34 < 0) {
  FUNC_2(VAR_28->dev, "Failed to read revision register: %d\n",
   VAR_34);
  goto err_enable;
 }
 VAR_28->revision = VAR_34 & VAR_4;
 VAR_28->cust_id = (VAR_34 & VAR_6) >> VAR_7;

 switch (VAR_28->type) {
 case 128:
  switch (VAR_28->revision) {
  case 0:
  case 1:
   FUNC_6(VAR_28->dev,
     "revision %c not fully supported\n",
     'A' + VAR_28->revision);
   break;
  case 2:
  case 3:
  default:
   VAR_32 = VAR_27;
   VAR_36 = FUNC_0(VAR_27);
   break;
  }
  break;

 case 129:
  switch (VAR_28->revision) {
  case 0:
   VAR_32 = VAR_22;
   VAR_36 = FUNC_0(VAR_22);
   break;
  default:
   break;
  }
  break;

 case 130:

  if (VAR_28->revision > 1)
   VAR_28->revision++;

  VAR_32 = VAR_19;
  VAR_36 = FUNC_0(VAR_19);
  break;

 default:
  break;
 }

 FUNC_4(VAR_28->dev, "%s revision %c CUST_ID %02x\n", VAR_33,
   'A' + VAR_28->revision, VAR_28->cust_id);

 switch (VAR_28->type) {
 case 130:
  VAR_31 = &VAR_18;
  break;
 case 128:
  VAR_31 = &VAR_25;
  break;
 case 129:
  VAR_31 = &VAR_21;
  break;
 default:
  FUNC_2(VAR_28->dev, "Unknown device type %d\n", VAR_28->type);
  VAR_34 = -VAR_0;
  goto err_enable;
 }

 VAR_34 = FUNC_13(VAR_28->regmap, VAR_31);
 if (VAR_34 != 0) {
  FUNC_2(VAR_28->dev, "Failed to reinit register cache: %d\n",
   VAR_34);
  goto err_enable;
 }





 VAR_34 = FUNC_22(VAR_28, VAR_15,
          FUNC_21(VAR_28, VAR_15));
 if (VAR_34 != 0) {
  FUNC_2(VAR_28->dev, "Failed to reset device: %d\n", VAR_34);
  goto err_enable;
 }

 if (VAR_32) {
  VAR_34 = FUNC_12(VAR_28->regmap, VAR_32,
         VAR_36);
  if (VAR_34 != 0) {
   FUNC_2(VAR_28->dev, "Failed to register patch: %d\n",
    VAR_34);
   goto err_enable;
  }
 }

 VAR_28->irq_base = VAR_30->irq_base;
 VAR_28->gpio_base = VAR_30->gpio_base;


 for (VAR_35 = 0; VAR_35 < FUNC_0(VAR_30->gpio_defaults); VAR_35++) {
  if (VAR_30->gpio_defaults[VAR_35]) {
   FUNC_23(VAR_28, VAR_8 + VAR_35,
     0xffff, VAR_30->gpio_defaults[VAR_35]);
  }
 }

 VAR_28->ldo_ena_always_driven = VAR_30->ldo_ena_always_driven;

 if (VAR_30->spkmode_pu)
  VAR_37 |= VAR_16;
 if (VAR_30->csnaddr_pd)
  VAR_37 |= VAR_5;


 FUNC_23(VAR_28, VAR_14,
   VAR_9 | VAR_11 |
   VAR_16 | VAR_5,
   VAR_37);







 for (VAR_35 = 0; VAR_35 < VAR_13; VAR_35++) {
  if (FUNC_20(VAR_30, VAR_35))
   FUNC_23(VAR_28, VAR_12 + VAR_35,
     VAR_10, VAR_10);
  else
   FUNC_23(VAR_28, VAR_12 + VAR_35,
     VAR_10, 0);
 }

 FUNC_19(VAR_28);

 VAR_34 = FUNC_8(VAR_28->dev, -1,
         VAR_23, FUNC_0(VAR_23),
         ((void*)0), 0, ((void*)0));
 if (VAR_34 != 0) {
  FUNC_2(VAR_28->dev, "Failed to add children: %d\n", VAR_34);
  goto err_irq;
 }

 FUNC_10(VAR_28->dev);
 FUNC_11(VAR_28->dev);

 return 0;

err_irq:
 FUNC_18(VAR_28);
err_enable:
 FUNC_14(VAR_28->num_supplies,
          VAR_28->supplies);
err_regulator_free:
 FUNC_16(VAR_28->num_supplies, VAR_28->supplies);
err:
 FUNC_9(VAR_28->dev);
 return VAR_34;
}
