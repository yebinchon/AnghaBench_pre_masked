
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_iodelay_reg_values {int cdpe; int fdpe; } ;
struct ti_iodelay_reg_data {int signature_mask; int signature_value; int binary_data_coarse_mask; int binary_data_fine_mask; int lock_mask; int unlock_val; } ;
struct ti_iodelay_device {int regmap; struct device* dev; struct ti_iodelay_reg_values reg_init_conf_values; struct ti_iodelay_reg_data* reg_data; } ;
struct ti_iodelay_cfg {int g_delay; int a_delay; int offset; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int ,int,int,int,int,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct ti_iodelay_device *VAR_0,
      struct ti_iodelay_cfg *VAR_1)
{
 const struct ti_iodelay_reg_data *VAR_2 = VAR_0->reg_data;
 struct ti_iodelay_reg_values *VAR_3 = &VAR_0->reg_init_conf_values;
 struct device *VAR_4 = VAR_0->dev;
 u32 VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 u32 VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 int VAR_15;


 VAR_5 = VAR_1->g_delay / 920;
 VAR_6 = ((VAR_1->g_delay % 920) * 10) / 60;

 VAR_7 = VAR_1->a_delay / VAR_3->cdpe;
 VAR_8 = ((VAR_1->a_delay % VAR_3->cdpe) * 10) / VAR_3->fdpe;

 VAR_9 = VAR_5 + VAR_7;
 VAR_10 = (VAR_6 + VAR_8) / 10;

 if (VAR_10 > 22) {
  VAR_11 = VAR_9 * VAR_3->cdpe + VAR_10 * VAR_3->fdpe;
  VAR_9 = VAR_11 / VAR_3->cdpe;
  VAR_10 = (VAR_11 % VAR_3->cdpe) / VAR_3->fdpe;
 }

 VAR_12 = VAR_2->signature_mask;
 VAR_13 = VAR_2->signature_value << FUNC_0(VAR_2->signature_mask);

 VAR_12 |= VAR_2->binary_data_coarse_mask;
 VAR_14 = VAR_9 << FUNC_0(VAR_2->binary_data_coarse_mask);
 if (VAR_14 & ~VAR_2->binary_data_coarse_mask) {
  FUNC_2(VAR_4, "Masking overflow of coarse elements %08x\n",
   VAR_14);
  VAR_14 &= VAR_2->binary_data_coarse_mask;
 }
 VAR_13 |= VAR_14;

 VAR_12 |= VAR_2->binary_data_fine_mask;
 VAR_14 = VAR_10 << FUNC_0(VAR_2->binary_data_fine_mask);
 if (VAR_14 & ~VAR_2->binary_data_fine_mask) {
  FUNC_2(VAR_4, "Masking overflow of fine elements %08x\n",
   VAR_14);
  VAR_14 &= VAR_2->binary_data_fine_mask;
 }
 VAR_13 |= VAR_14;







 VAR_12 |= VAR_2->lock_mask;
 VAR_13 |= VAR_2->unlock_val << FUNC_0(VAR_2->lock_mask);
 VAR_15 = FUNC_3(VAR_0->regmap, VAR_1->offset, VAR_12, VAR_13);

 FUNC_1(VAR_4, "Set reg 0x%x Delay(a: %d g: %d), Elements(C=%d F=%d)0x%x\n",
  VAR_1->offset, VAR_1->a_delay, VAR_1->g_delay, VAR_9,
  VAR_10, VAR_13);

 return VAR_15;
}
