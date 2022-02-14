
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8788_buck2_dvs {int * gpio; } ;
struct lp8788_buck1_dvs {int gpio; } ;
struct lp8788_buck {int lp; scalar_t__ dvs; } ;
typedef enum lp8788_dvs_mode { ____Placeholder_lp8788_dvs_mode } lp8788_dvs_mode ;
typedef enum lp8788_buck_id { ____Placeholder_lp8788_buck_id } lp8788_buck_id ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lp8788_buck*,int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static u8 FUNC_3(struct lp8788_buck *VAR_11,
     enum lp8788_buck_id VAR_12)
{
 enum lp8788_dvs_mode VAR_13 = FUNC_1(VAR_11, VAR_12);
 struct lp8788_buck1_dvs *VAR_14;
 struct lp8788_buck2_dvs *VAR_15;
 u8 VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;

 switch (VAR_12) {
 case 129:
  if (VAR_13 == VAR_0) {
   VAR_14 = (struct lp8788_buck1_dvs *)VAR_11->dvs;
   if (!VAR_14)
    goto err;

   VAR_17 = FUNC_0(VAR_14->gpio) ? 1 : 0;
  } else {
   FUNC_2(VAR_11->lp, VAR_8, &VAR_16);
   VAR_17 = (VAR_16 & VAR_2) >> VAR_3;
  }
  VAR_18 = VAR_4 + VAR_17;
  break;
 case 128:
  if (VAR_13 == VAR_0) {
   VAR_15 = (struct lp8788_buck2_dvs *)VAR_11->dvs;
   if (!VAR_15)
    goto err;

   VAR_19 = FUNC_0(VAR_15->gpio[0]);
   VAR_20 = FUNC_0(VAR_15->gpio[1]);

   if (VAR_19 == VAR_10 && VAR_20 == VAR_10)
    VAR_17 = 0;
   else if (VAR_19 == VAR_10 && VAR_20 == VAR_9)
    VAR_17 = 2;
   else if (VAR_19 == VAR_9 && VAR_20 == VAR_10)
    VAR_17 = 1;
   else
    VAR_17 = 3;
  } else {
   FUNC_2(VAR_11->lp, VAR_8, &VAR_16);
   VAR_17 = (VAR_16 & VAR_5) >> VAR_6;
  }
  VAR_18 = VAR_7 + VAR_17;
  break;
 default:
  goto err;
 }

 return VAR_18;
err:
 return VAR_1;
}
