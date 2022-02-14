
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int ovp; int i_boost_limit; int switch_freq; int num_strings; int i_limit; scalar_t__ cabc_en; scalar_t__ ext_gen; scalar_t__ cs_out_en; } ;
struct pm8941_wled {TYPE_1__ cfg; int regmap; scalar_t__ addr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pm8941_wled *VAR_21)
{
 int VAR_22;
 int VAR_23;

 VAR_22 = FUNC_1(VAR_21->regmap,
   VAR_21->addr + VAR_4,
   VAR_5, VAR_21->cfg.ovp);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_21->regmap,
   VAR_21->addr + VAR_0,
   VAR_1, VAR_21->cfg.i_boost_limit);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_21->regmap,
   VAR_21->addr + VAR_2,
   VAR_3, VAR_21->cfg.switch_freq);
 if (VAR_22)
  return VAR_22;

 if (VAR_21->cfg.cs_out_en) {
  u8 VAR_24 = (FUNC_0(VAR_21->cfg.num_strings) - 1)
    << VAR_8;

  VAR_22 = FUNC_1(VAR_21->regmap,
    VAR_21->addr + VAR_6,
    VAR_7, VAR_24);
  if (VAR_22)
   return VAR_22;
 }

 for (VAR_23 = 0; VAR_23 < VAR_21->cfg.num_strings; ++VAR_23) {
  u16 VAR_25 = VAR_21->addr + VAR_18 * VAR_23;

  VAR_22 = FUNC_1(VAR_21->regmap,
    VAR_25 + VAR_13,
    VAR_14,
    VAR_12);
  if (VAR_22)
   return VAR_22;

  if (VAR_21->cfg.ext_gen) {
   VAR_22 = FUNC_1(VAR_21->regmap,
     VAR_25 + VAR_15,
     VAR_17,
     VAR_16);
   if (VAR_22)
    return VAR_22;
  }

  VAR_22 = FUNC_1(VAR_21->regmap,
    VAR_25 + VAR_19,
    VAR_20,
    VAR_21->cfg.i_limit);
  if (VAR_22)
   return VAR_22;

  VAR_22 = FUNC_1(VAR_21->regmap,
    VAR_25 + VAR_9,
    VAR_11,
    VAR_21->cfg.cabc_en ?
     VAR_10 : 0);
  if (VAR_22)
   return VAR_22;
 }

 return 0;
}
