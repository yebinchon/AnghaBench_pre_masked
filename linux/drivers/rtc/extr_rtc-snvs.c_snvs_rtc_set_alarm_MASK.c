
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snvs_rtc_data {scalar_t__ offset; int regmap; } ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 struct snvs_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,unsigned long) ;
 unsigned long FUNC_3 (int *) ;
 int FUNC_4 (struct snvs_rtc_data*) ;
 int FUNC_5 (struct device*,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct snvs_rtc_data *VAR_7 = FUNC_0(VAR_5);
 unsigned long VAR_8 = FUNC_3(&VAR_6->time);
 int VAR_9;

 FUNC_1(VAR_7->regmap, VAR_7->offset + VAR_0, VAR_1, 0);
 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9)
  return VAR_9;
 FUNC_2(VAR_7->regmap, VAR_7->offset + VAR_4, VAR_8);


 FUNC_2(VAR_7->regmap, VAR_7->offset + VAR_2, VAR_3);

 return FUNC_5(VAR_5, VAR_6->enabled);
}
