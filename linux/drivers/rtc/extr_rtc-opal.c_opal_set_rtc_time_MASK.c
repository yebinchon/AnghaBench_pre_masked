
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rtc_time*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7, struct rtc_time *VAR_8)
{
 s64 VAR_9 = VAR_1;
 int VAR_10 = 10;
 u32 VAR_11 = 0;
 u64 VAR_12 = 0;

 FUNC_3(VAR_8, &VAR_11, &VAR_12);

 while (VAR_9 == VAR_1 || VAR_9 == VAR_3) {
  VAR_9 = FUNC_2(VAR_11, VAR_12);
  if (VAR_9 == VAR_3) {
   FUNC_0(VAR_2);
   FUNC_1(((void*)0));
  } else if (VAR_9 == VAR_1) {
   FUNC_0(VAR_2);
  } else if (VAR_9 == VAR_4 || VAR_9 == VAR_5) {
   if (VAR_10--) {
    FUNC_0(10);
    VAR_9 = VAR_1;
   }
  }
 }

 return VAR_9 == VAR_6 ? 0 : -VAR_0;
}
