
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
 int FUNC_1 (struct device*,struct rtc_time*,unsigned long*,unsigned long*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rtc_time *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 struct pl031_local *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_4, &VAR_5);
 if (VAR_7 == 0) {
  FUNC_2(VAR_5, VAR_6->base + VAR_1);
  FUNC_2(VAR_4, VAR_6->base + VAR_0);
 }

 return VAR_7;
}
