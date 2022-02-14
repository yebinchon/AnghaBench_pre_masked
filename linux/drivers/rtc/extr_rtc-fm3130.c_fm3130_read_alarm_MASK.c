
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {scalar_t__ tm_mon; int tm_wday; int tm_year; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct fm3130 {int* regs; TYPE_1__* client; int * msg; int alarm_valid; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int adapter; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,char*,int) ;
 struct fm3130* FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_9, struct rtc_wkalrm *VAR_10)
{
 struct fm3130 *VAR_11 = FUNC_3(VAR_9);
 int VAR_12;
 struct rtc_time *VAR_13 = &VAR_10->time;

 if (!VAR_11->alarm_valid) {






  return -VAR_0;
 }


 VAR_12 = FUNC_5(VAR_11->client->adapter, &VAR_11->msg[2], 2);
 if (VAR_12 != 2) {
  FUNC_2(VAR_9, "%s error %d\n", "read", VAR_12);
  return -VAR_0;
 }
 FUNC_1(VAR_9, "alarm read %02x %02x %02x %02x %02x\n",
   VAR_11->regs[VAR_5],
   VAR_11->regs[VAR_3],
   VAR_11->regs[VAR_2],
   VAR_11->regs[VAR_1],
   VAR_11->regs[VAR_4]);

 VAR_13->tm_sec = FUNC_0(VAR_11->regs[VAR_5] & 0x7F);
 VAR_13->tm_min = FUNC_0(VAR_11->regs[VAR_3] & 0x7F);
 VAR_13->tm_hour = FUNC_0(VAR_11->regs[VAR_2] & 0x3F);
 VAR_13->tm_mday = FUNC_0(VAR_11->regs[VAR_1] & 0x3F);
 VAR_13->tm_mon = FUNC_0(VAR_11->regs[VAR_4] & 0x1F);

 if (VAR_13->tm_mon > 0)
  VAR_13->tm_mon -= 1;

 FUNC_1(VAR_9, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "read alarm", VAR_13->tm_sec, VAR_13->tm_min,
  VAR_13->tm_hour, VAR_13->tm_mday,
  VAR_13->tm_mon, VAR_13->tm_year, VAR_13->tm_wday);


 VAR_11->regs[VAR_6] =
  FUNC_4(VAR_11->client, VAR_6);

 if ((VAR_11->regs[VAR_6] & VAR_7) &&
  (~VAR_11->regs[VAR_6] &
   VAR_8)) {
  VAR_10->enabled = 1;
 }

 return 0;
}
