
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int time64_t ;
struct rtc_time {int dummy; } ;
struct mc13xxx_rtc {int mc13xxx; int valid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct mc13xxx_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (unsigned int,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct mc13xxx_rtc *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7, VAR_8, VAR_9;

 if (!VAR_6->valid)
  return -VAR_0;

 do {
  int VAR_10;

  VAR_10 = FUNC_1(VAR_6->mc13xxx, VAR_1, &VAR_8);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_1(VAR_6->mc13xxx, VAR_2, &VAR_7);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_1(VAR_6->mc13xxx, VAR_1, &VAR_9);
  if (VAR_10)
   return VAR_10;
 } while (VAR_8 != VAR_9);

 FUNC_2((time64_t)VAR_8 * VAR_3 + VAR_7, VAR_5);

 return 0;
}
