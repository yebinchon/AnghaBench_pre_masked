
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx_platform_data {int regmap; int * batt_pdata; int ac97; } ;
struct wm97xx_priv {int ac97; int dev; struct wm97xx_platform_data codec_pdata; } ;
struct wm97xx_pdata {int * batt_pdata; } ;
struct regmap_config {int dummy; } ;
struct mfd_cell {int pdata_size; struct wm97xx_platform_data* platform_data; } ;
struct ac97_codec_device {int vendor_id; } ;


 int FUNC_0 (struct mfd_cell*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;



 int FUNC_3 (struct ac97_codec_device*) ;
 int FUNC_4 (struct ac97_codec_device*,struct wm97xx_priv*) ;
 int FUNC_5 (int ,char*,int ) ;
 struct wm97xx_priv* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,int ,struct mfd_cell*,int,int *,int ,int *) ;
 int FUNC_8 (int ,struct regmap_config const*) ;
 struct wm97xx_pdata* FUNC_9 (struct ac97_codec_device*) ;
 int FUNC_10 (struct ac97_codec_device*) ;
 int FUNC_11 (int ) ;
 struct mfd_cell* VAR_4 ;
 struct regmap_config VAR_5 ;
 struct mfd_cell* VAR_6 ;
 struct regmap_config VAR_7 ;
 struct mfd_cell* VAR_8 ;
 struct regmap_config VAR_9 ;

__attribute__((used)) static int FUNC_12(struct ac97_codec_device *VAR_10)
{
 struct wm97xx_priv *VAR_11;
 const struct regmap_config *VAR_12;
 struct wm97xx_platform_data *VAR_13;
 struct mfd_cell *VAR_14;
 int VAR_15 = -VAR_0, VAR_16, VAR_17;
 struct wm97xx_pdata *VAR_18 = FUNC_9(VAR_10);

 VAR_11 = FUNC_6(FUNC_3(VAR_10),
         sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->dev = FUNC_3(VAR_10);
 VAR_11->ac97 = FUNC_10(VAR_10);
 if (FUNC_1(VAR_11->ac97))
  return FUNC_2(VAR_11->ac97);


 FUNC_4(VAR_10, VAR_11);
 FUNC_5(VAR_11->dev, "wm97xx core found, id=0x%x\n",
   VAR_10->vendor_id);

 VAR_13 = &VAR_11->codec_pdata;
 VAR_13->ac97 = VAR_11->ac97;
 VAR_13->batt_pdata = VAR_18 ? VAR_18->batt_pdata : ((void*)0);

 switch (VAR_10->vendor_id) {
 case 130:
  VAR_12 = &VAR_5;
  VAR_14 = VAR_4;
  VAR_16 = FUNC_0(VAR_4);
  break;
 case 129:
  VAR_12 = &VAR_7;
  VAR_14 = VAR_6;
  VAR_16 = FUNC_0(VAR_6);
  break;
 case 128:
  VAR_12 = &VAR_9;
  VAR_14 = VAR_8;
  VAR_16 = FUNC_0(VAR_8);
  break;
 default:
  goto err_free_compat;
 }

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_14[VAR_17].platform_data = VAR_13;
  VAR_14[VAR_17].pdata_size = sizeof(*VAR_13);
 }

 VAR_13->regmap = FUNC_8(VAR_11->ac97, VAR_12);
 if (FUNC_1(VAR_13->regmap)) {
  VAR_15 = FUNC_2(VAR_13->regmap);
  goto err_free_compat;
 }

 VAR_15 = FUNC_7(VAR_11->dev, VAR_3,
       VAR_14, VAR_16, ((void*)0), 0, ((void*)0));
 if (VAR_15)
  goto err_free_compat;

 return VAR_15;

err_free_compat:
 FUNC_11(VAR_11->ac97);
 return VAR_15;
}
