
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct fm3130 {int data_valid; int * regs; int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,char*,int,...) ;
 struct fm3130* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (int ,size_t,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct fm3130 *VAR_12 = FUNC_2(VAR_10);
 int VAR_13, VAR_14;
 u8 *VAR_15 = VAR_12->regs;

 FUNC_1(VAR_10, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "write", VAR_11->tm_sec, VAR_11->tm_min,
  VAR_11->tm_hour, VAR_11->tm_mday,
  VAR_11->tm_mon, VAR_11->tm_year, VAR_11->tm_wday);


 VAR_15[VAR_8] = FUNC_0(VAR_11->tm_sec);
 VAR_15[VAR_6] = FUNC_0(VAR_11->tm_min);
 VAR_15[VAR_5] = FUNC_0(VAR_11->tm_hour);
 VAR_15[VAR_4] = FUNC_0(VAR_11->tm_wday + 1);
 VAR_15[VAR_3] = FUNC_0(VAR_11->tm_mday);
 VAR_15[VAR_7] = FUNC_0(VAR_11->tm_mon + 1);


 VAR_13 = VAR_11->tm_year - 100;
 VAR_15[VAR_9] = FUNC_0(VAR_13);

 FUNC_1(VAR_10, "%s: %15ph\n", "write", *VAR_15);

 FUNC_3(VAR_10, VAR_2);


 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  FUNC_4(VAR_12->client,
     VAR_8 + VAR_14,
     VAR_12->regs[VAR_8 + VAR_14]);
 }

 FUNC_3(VAR_10, VAR_1);


 if (!VAR_12->data_valid)
  VAR_12->data_valid = 1;
 return 0;
}
