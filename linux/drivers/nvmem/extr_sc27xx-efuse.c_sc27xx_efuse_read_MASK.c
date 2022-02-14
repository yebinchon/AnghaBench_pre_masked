
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sc27xx_efuse {int regmap; scalar_t__ base; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (void*,size_t*,size_t) ;
 int FUNC_1 (int ,scalar_t__,size_t*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,size_t) ;
 int FUNC_4 (struct sc27xx_efuse*) ;
 int FUNC_5 (struct sc27xx_efuse*,int ) ;
 int FUNC_6 (struct sc27xx_efuse*) ;

__attribute__((used)) static int FUNC_7(void *VAR_14, u32 VAR_15, void *VAR_16, size_t VAR_17)
{
 struct sc27xx_efuse *VAR_18 = VAR_14;
 u32 VAR_19, VAR_20 = VAR_15 / VAR_5;
 u32 VAR_21 = (VAR_15 % VAR_5) * VAR_0;
 int VAR_22;

 if (VAR_20 > VAR_4 ||
     VAR_17 > VAR_5)
  return -VAR_1;

 VAR_22 = FUNC_4(VAR_18);
 if (VAR_22)
  return VAR_22;


 VAR_22 = FUNC_2(VAR_18->regmap, VAR_13,
     VAR_8, VAR_8);
 if (VAR_22)
  goto unlock_efuse;





 VAR_22 = FUNC_5(VAR_18, VAR_12);
 if (VAR_22)
  goto disable_efuse;


 VAR_22 = FUNC_3(VAR_18->regmap,
      VAR_18->base + VAR_2,
      VAR_20 & VAR_3);
 if (VAR_22)
  goto disable_efuse;


 VAR_22 = FUNC_2(VAR_18->regmap,
     VAR_18->base + VAR_9,
     VAR_11,
     VAR_11);
 if (VAR_22)
  goto disable_efuse;





 VAR_22 = FUNC_5(VAR_18, VAR_10);
 if (VAR_22)
  goto disable_efuse;


 VAR_22 = FUNC_1(VAR_18->regmap, VAR_18->base + VAR_7,
     &VAR_19);
 if (VAR_22)
  goto disable_efuse;


 VAR_22 = FUNC_2(VAR_18->regmap,
     VAR_18->base + VAR_9,
     VAR_6,
     VAR_6);

disable_efuse:

 FUNC_2(VAR_18->regmap, VAR_13, VAR_8, 0);
unlock_efuse:
 FUNC_6(VAR_18);

 if (!VAR_22) {
  VAR_19 >>= VAR_21;
  FUNC_0(VAR_16, &VAR_19, VAR_17);
 }

 return VAR_22;
}
