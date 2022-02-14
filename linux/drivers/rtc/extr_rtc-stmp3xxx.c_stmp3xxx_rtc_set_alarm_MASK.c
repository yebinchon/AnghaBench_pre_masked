
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_rtc_data {scalar_t__ io; } ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct stmp3xxx_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct stmp3xxx_rtc_data *VAR_3 = FUNC_0(VAR_1);

 FUNC_3(FUNC_1(&VAR_2->time), VAR_3->io + VAR_0);

 FUNC_2(VAR_1, VAR_2->enabled);

 return 0;
}
