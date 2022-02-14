
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snvs_rtc_data {TYPE_1__* rtc; scalar_t__ offset; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct snvs_rtc_data *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5;
 unsigned int VAR_6 = 100;

 FUNC_1(VAR_2->regmap, VAR_2->offset + VAR_1, &VAR_4);
 do {
  VAR_5 = VAR_4;
  FUNC_1(VAR_2->regmap, VAR_2->offset + VAR_1, &VAR_4);
 } while (VAR_4 != VAR_5 && --VAR_6);
 if (!VAR_6) {
  FUNC_0(&VAR_2->rtc->dev, "Timeout trying to get valid LPSRT Counter read\n");
  return -VAR_0;
 }

 *VAR_3 = VAR_4;
 return 0;
}
