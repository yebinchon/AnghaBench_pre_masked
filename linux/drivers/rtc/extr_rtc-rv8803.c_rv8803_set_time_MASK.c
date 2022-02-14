
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv8803_data {int flags_lock; int client; } ;
struct rtc_time {int tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 struct rv8803_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,size_t,int,int*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct rv8803_data *VAR_14 = FUNC_1(VAR_12);
 u8 VAR_15[7];
 int VAR_16, VAR_17, VAR_18;

 VAR_16 = FUNC_4(VAR_14->client, VAR_0);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_18 = FUNC_5(VAR_14->client, VAR_0,
          VAR_16 | VAR_1);
 if (VAR_18)
  return VAR_18;

 VAR_15[VAR_9] = FUNC_0(VAR_13->tm_sec);
 VAR_15[VAR_7] = FUNC_0(VAR_13->tm_min);
 VAR_15[VAR_6] = FUNC_0(VAR_13->tm_hour);
 VAR_15[VAR_10] = 1 << (VAR_13->tm_wday);
 VAR_15[VAR_2] = FUNC_0(VAR_13->tm_mday);
 VAR_15[VAR_8] = FUNC_0(VAR_13->tm_mon + 1);
 VAR_15[VAR_11] = FUNC_0(VAR_13->tm_year - 100);

 VAR_18 = FUNC_6(VAR_14->client, VAR_9, 7, VAR_15);
 if (VAR_18)
  return VAR_18;


 VAR_18 = FUNC_5(VAR_14->client, VAR_0,
          VAR_16 & ~VAR_1);
 if (VAR_18)
  return VAR_18;

 FUNC_2(&VAR_14->flags_lock);

 VAR_17 = FUNC_4(VAR_14->client, VAR_3);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_14->flags_lock);
  return VAR_17;
 }

 VAR_18 = FUNC_5(VAR_14->client, VAR_3,
          VAR_17 & ~(VAR_4 | VAR_5));

 FUNC_3(&VAR_14->flags_lock);

 return VAR_18;
}
