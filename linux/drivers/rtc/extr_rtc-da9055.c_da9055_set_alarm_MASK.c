
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtc_time {int tm_year; int tm_mon; int tm_min; int tm_mday; int tm_hour; } ;
struct da9055 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct da9055*,int ,int,int *) ;
 int FUNC_1 (struct da9055*,int ,int ,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct da9055 *VAR_7, struct rtc_time *VAR_8)
{
 int VAR_9;
 uint8_t VAR_10[2];

 VAR_8->tm_year -= 100;
 VAR_8->tm_mon += 1;

 VAR_9 = FUNC_1(VAR_7, VAR_1,
    VAR_4, VAR_8->tm_min);
 if (VAR_9 != 0) {
  FUNC_2(VAR_7->dev, "Failed to write ALRM MIN: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_10[0] = VAR_8->tm_hour;
 VAR_10[1] = VAR_8->tm_mday;

 VAR_9 = FUNC_0(VAR_7, VAR_0, 2, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_2,
    VAR_5, VAR_8->tm_mon);
 if (VAR_9 < 0)
  FUNC_2(VAR_7->dev, "Failed to write ALM Month:%d\n", VAR_9);

 VAR_9 = FUNC_1(VAR_7, VAR_3,
    VAR_6, VAR_8->tm_year);
 if (VAR_9 < 0)
  FUNC_2(VAR_7->dev, "Failed to write ALM Year:%d\n", VAR_9);

 return VAR_9;
}
