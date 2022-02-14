
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snvs_rtc_data {scalar_t__ offset; int regmap; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snvs_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,int,int) ;
 int FUNC_2 (struct snvs_rtc_data*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, unsigned int VAR_4)
{
 struct snvs_rtc_data *VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_5->regmap, VAR_5->offset + VAR_0,
      (VAR_1 | VAR_2),
      VAR_4 ? (VAR_1 | VAR_2) : 0);

 return FUNC_2(VAR_5);
}
