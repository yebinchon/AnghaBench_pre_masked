
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rx8010_data {int ctrlreg; int client; } ;
struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int) ;
 struct rx8010_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,size_t,int,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct rx8010_data *VAR_14 = FUNC_1(VAR_12);
 u8 VAR_15[7];
 int VAR_16, VAR_17;
 int VAR_18;

 if ((VAR_13->tm_year < 100) || (VAR_13->tm_year > 199))
  return -VAR_0;


 VAR_16 = FUNC_2(VAR_14->client, VAR_1);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_14->ctrlreg = VAR_16 | VAR_2;
 VAR_18 = FUNC_3(VAR_14->client, VAR_1,
     VAR_14->ctrlreg);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_15[VAR_9 - VAR_9] = FUNC_0(VAR_13->tm_sec);
 VAR_15[VAR_7 - VAR_9] = FUNC_0(VAR_13->tm_min);
 VAR_15[VAR_5 - VAR_9] = FUNC_0(VAR_13->tm_hour);
 VAR_15[VAR_6 - VAR_9] = FUNC_0(VAR_13->tm_mday);
 VAR_15[VAR_8 - VAR_9] = FUNC_0(VAR_13->tm_mon + 1);
 VAR_15[VAR_11 - VAR_9] = FUNC_0(VAR_13->tm_year - 100);
 VAR_15[VAR_10 - VAR_9] = FUNC_0(1 << VAR_13->tm_wday);

 VAR_18 = FUNC_4(VAR_14->client,
          VAR_9, 7, VAR_15);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_16 = FUNC_2(VAR_14->client, VAR_1);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_14->ctrlreg = VAR_16 & ~VAR_2;
 VAR_18 = FUNC_3(VAR_14->client, VAR_1,
     VAR_14->ctrlreg);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_17 = FUNC_2(VAR_14->client, VAR_3);
 if (VAR_17 < 0) {
  return VAR_17;
 }

 if (VAR_17 & VAR_4)
  VAR_18 = FUNC_3(VAR_14->client, VAR_3,
      VAR_17 & ~VAR_4);

 return 0;
}
