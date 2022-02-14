
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int time64_t ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 time64_t VAR_8;

 VAR_8 = FUNC_3(&VAR_7->time);

 FUNC_4(&VAR_5);

 if (VAR_4)
  FUNC_0(VAR_3);

 FUNC_2(VAR_1, (uint16_t)(VAR_8 << 15));
 FUNC_2(VAR_2, (uint16_t)(VAR_8 >> 1));
 FUNC_2(VAR_0, (uint16_t)(VAR_8 >> 17));

 if (VAR_7->enabled)
  FUNC_1(VAR_3);

 VAR_4 = VAR_7->enabled;

 FUNC_5(&VAR_5);

 return 0;
}
