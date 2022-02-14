
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct llcc_slice_config {scalar_t__ slice_id; } ;
struct TYPE_6__ {int num_banks; scalar_t__ max_slices; int* offsets; int cfg_size; scalar_t__ ecc_irq; int lock; struct llcc_slice_config const* cfg; void* bitmap; struct platform_device* regmap; struct platform_device* bcast_regmap; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct platform_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,int,int,int ) ;
 TYPE_1__* FUNC_6 (struct device*,int,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_7 (int *) ;
 struct platform_device* FUNC_8 (struct device*,char*,int,TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,TYPE_1__*) ;
 int FUNC_11 (struct platform_device*) ;
 void* FUNC_12 (struct platform_device*,char*) ;
 int FUNC_13 (struct platform_device*,int ,int*) ;

int FUNC_14(struct platform_device *VAR_8,
        const struct llcc_slice_config *VAR_9, u32 VAR_10)
{
 u32 VAR_11;
 struct device *VAR_12 = &VAR_8->dev;
 int VAR_13, VAR_14;
 struct platform_device *VAR_15;

 VAR_7 = FUNC_6(VAR_12, sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_13 = -VAR_2;
  goto err;
 }

 VAR_7->regmap = FUNC_12(VAR_8, "llcc_base");
 if (FUNC_2(VAR_7->regmap)) {
  VAR_13 = FUNC_3(VAR_7->regmap);
  goto err;
 }

 VAR_7->bcast_regmap =
  FUNC_12(VAR_8, "llcc_broadcast_base");
 if (FUNC_2(VAR_7->bcast_regmap)) {
  VAR_13 = FUNC_3(VAR_7->bcast_regmap);
  goto err;
 }

 VAR_13 = FUNC_13(VAR_7->regmap, VAR_4,
      &VAR_11);
 if (VAR_13)
  goto err;

 VAR_11 &= VAR_5;
 VAR_11 >>= VAR_6;
 VAR_7->num_banks = VAR_11;

 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  if (VAR_9[VAR_14].slice_id > VAR_7->max_slices)
   VAR_7->max_slices = VAR_9[VAR_14].slice_id;

 VAR_7->offsets = FUNC_5(VAR_12, VAR_11, sizeof(u32),
       VAR_3);
 if (!VAR_7->offsets) {
  VAR_13 = -VAR_2;
  goto err;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  VAR_7->offsets[VAR_14] = VAR_14 * VAR_0;

 VAR_7->bitmap = FUNC_5(VAR_12,
 FUNC_0(VAR_7->max_slices), sizeof(unsigned long),
      VAR_3);
 if (!VAR_7->bitmap) {
  VAR_13 = -VAR_2;
  goto err;
 }

 VAR_7->cfg = VAR_9;
 VAR_7->cfg_size = VAR_10;
 FUNC_7(&VAR_7->lock);
 FUNC_10(VAR_8, VAR_7);

 VAR_13 = FUNC_11(VAR_8);
 if (VAR_13)
  goto err;

 VAR_7->ecc_irq = FUNC_9(VAR_8, 0);
 if (VAR_7->ecc_irq >= 0) {
  VAR_15 = FUNC_8(&VAR_8->dev,
      "qcom_llcc_edac", -1, VAR_7,
      sizeof(*VAR_7));
  if (FUNC_2(VAR_15))
   FUNC_4(VAR_12, "Failed to register llcc edac driver\n");
 }

 return 0;
err:
 VAR_7 = FUNC_1(-VAR_1);
 return VAR_13;
}
