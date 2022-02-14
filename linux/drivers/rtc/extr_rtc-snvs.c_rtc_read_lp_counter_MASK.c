
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct snvs_rtc_data {TYPE_1__* rtc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct snvs_rtc_data*) ;

__attribute__((used)) static u32 FUNC_2(struct snvs_rtc_data *VAR_1)
{
 u64 VAR_2, VAR_3;
 unsigned int VAR_4 = 100;





 VAR_2 = FUNC_1(VAR_1);
 do {
  VAR_3 = VAR_2;
  VAR_2 = FUNC_1(VAR_1);
 } while (VAR_2 != VAR_3 && --VAR_4);
 if (!VAR_4)
  FUNC_0(&VAR_1->rtc->dev, "Timeout trying to get valid LPSRT Counter read\n");


 return (u32) (VAR_2 >> VAR_0);
}
