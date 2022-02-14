
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snvs_rtc_data {TYPE_1__* rtc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct snvs_rtc_data*,int*) ;

__attribute__((used)) static int FUNC_2(struct snvs_rtc_data *VAR_1)
{
 u32 VAR_2, VAR_3;
 u32 VAR_4;
 unsigned int VAR_5 = 1000;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, &VAR_2);
 if (VAR_6)
  return VAR_6;


 do {
  VAR_6 = FUNC_1(VAR_1, &VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_4 = VAR_3 - VAR_2;
 } while (VAR_4 < 3 && --VAR_5);
 if (!VAR_5) {
  FUNC_0(&VAR_1->rtc->dev, "Timeout waiting for LPSRT Counter to change\n");
  return -VAR_0;
 }
 return 0;
}
