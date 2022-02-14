
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int time; } ;
struct pl031_local {scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct pl031_local* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (int *,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct pl031_local *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;
 int VAR_5;


 VAR_5 = FUNC_3(&VAR_2->time);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_2(&VAR_2->time, &VAR_4);
  if (VAR_5 == 0) {
   FUNC_4(VAR_4, VAR_3->base + VAR_0);
   FUNC_1(VAR_1, VAR_2->enabled);
  }
 }

 return VAR_5;
}
