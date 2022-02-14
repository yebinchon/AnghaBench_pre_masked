
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
typedef enum v4l2_exposure_auto_type { ____Placeholder_v4l2_exposure_auto_type } v4l2_exposure_auto_type ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_4,
         enum v4l2_exposure_auto_type VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_2, &VAR_6);
 if (!VAR_7) {
  if (VAR_5 == VAR_3)
   VAR_6 |= (VAR_0 | VAR_1);
  else
   VAR_6 &= ~(VAR_0 | VAR_1);
  VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_6);
 }

 return VAR_7;
}
