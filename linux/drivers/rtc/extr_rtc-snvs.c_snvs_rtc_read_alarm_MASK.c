
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snvs_rtc_data {scalar_t__ offset; int regmap; } ;
struct rtc_wkalrm {int pending; int time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct snvs_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct snvs_rtc_data *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6, VAR_7;

 FUNC_1(VAR_5->regmap, VAR_5->offset + VAR_2, &VAR_6);
 FUNC_2(VAR_6, &VAR_4->time);

 FUNC_1(VAR_5->regmap, VAR_5->offset + VAR_0, &VAR_7);
 VAR_4->pending = (VAR_7 & VAR_1) ? 1 : 0;

 return 0;
}
