
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snvs_lpgpr_priv {int regmap; struct snvs_lpgpr_cfg* dcfg; } ;
struct snvs_lpgpr_cfg {scalar_t__ offset; int offset_lplr; int offset_hplr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,void*,size_t) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, unsigned int VAR_4, void *VAR_5,
       size_t VAR_6)
{
 struct snvs_lpgpr_priv *VAR_7 = VAR_3;
 const struct snvs_lpgpr_cfg *VAR_8 = VAR_7->dcfg;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7->regmap, VAR_8->offset_hplr, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9 & VAR_2)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_7->regmap, VAR_8->offset_lplr, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9 & VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_7->regmap, VAR_8->offset + VAR_4, VAR_5,
    VAR_6 / 4);
}
