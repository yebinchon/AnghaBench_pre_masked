
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct pl031_local {scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pl031_local* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,struct rtc_time*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct pl031_local *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(FUNC_2(VAR_4->base + VAR_0),
   FUNC_2(VAR_4->base + VAR_1), VAR_3);

 return 0;
}
