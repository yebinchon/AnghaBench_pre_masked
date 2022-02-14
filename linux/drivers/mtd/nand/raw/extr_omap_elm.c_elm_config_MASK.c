
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct elm_info {int bch_type; int ecc_steps; int ecc_syndrome_size; } ;
struct device {int dummy; } ;
typedef enum bch_ecc { ____Placeholder_bch_ecc } bch_ecc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct elm_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct elm_info*,int ,int) ;

int FUNC_3(struct device *VAR_6, enum bch_ecc VAR_7,
 int VAR_8, int VAR_9, int VAR_10)
{
 u32 VAR_11;
 struct elm_info *VAR_12 = FUNC_1(VAR_6);

 if (!VAR_12) {
  FUNC_0(VAR_6, "Unable to configure elm - device not probed?\n");
  return -VAR_4;
 }

 if (VAR_9 > ((VAR_2 + 1) / 2)) {
  FUNC_0(VAR_6, "unsupported config ecc-size=%d\n", VAR_9);
  return -VAR_1;
 }

 if (VAR_8 > VAR_5) {
  FUNC_0(VAR_6, "unsupported config ecc-step=%d\n", VAR_8);
  return -VAR_1;
 }

 VAR_11 = (VAR_7 & VAR_0) | (VAR_2 << 16);
 FUNC_2(VAR_12, VAR_3, VAR_11);
 VAR_12->bch_type = VAR_7;
 VAR_12->ecc_steps = VAR_8;
 VAR_12->ecc_syndrome_size = VAR_10;

 return 0;
}
