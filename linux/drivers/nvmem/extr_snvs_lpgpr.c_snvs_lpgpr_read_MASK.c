
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snvs_lpgpr_priv {int regmap; struct snvs_lpgpr_cfg* dcfg; } ;
struct snvs_lpgpr_cfg {scalar_t__ offset; } ;


 int FUNC_0 (int ,scalar_t__,void*,size_t) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1, void *VAR_2,
      size_t VAR_3)
{
 struct snvs_lpgpr_priv *VAR_4 = VAR_0;
 const struct snvs_lpgpr_cfg *VAR_5 = VAR_4->dcfg;

 return FUNC_0(VAR_4->regmap, VAR_5->offset + VAR_1,
          VAR_2, VAR_3 / 4);
}
