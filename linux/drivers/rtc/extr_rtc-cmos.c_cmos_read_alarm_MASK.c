
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; } ;
struct rtc_wkalrm {int enabled; scalar_t__ pending; TYPE_1__ time; } ;
struct device {int dummy; } ;
struct cmos_rtc {scalar_t__ mon_alrm; scalar_t__ day_alrm; int irq; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 struct cmos_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_9, struct rtc_wkalrm *VAR_10)
{
 struct cmos_rtc *VAR_11 = FUNC_2(VAR_9);
 unsigned char VAR_12;


 if (!FUNC_3(VAR_11->irq))
  return -VAR_0;






 FUNC_4(&VAR_8);
 VAR_10->time.tm_sec = FUNC_0(VAR_7);
 VAR_10->time.tm_min = FUNC_0(VAR_6);
 VAR_10->time.tm_hour = FUNC_0(VAR_5);

 if (VAR_11->day_alrm) {

  VAR_10->time.tm_mday = FUNC_0(VAR_11->day_alrm) & 0x3f;
  if (!VAR_10->time.tm_mday)
   VAR_10->time.tm_mday = -1;

  if (VAR_11->mon_alrm) {
   VAR_10->time.tm_mon = FUNC_0(VAR_11->mon_alrm);
   if (!VAR_10->time.tm_mon)
    VAR_10->time.tm_mon = -1;
  }
 }

 VAR_12 = FUNC_0(VAR_3);
 FUNC_5(&VAR_8);

 if (!(VAR_12 & VAR_4) || VAR_2) {
  if (((unsigned)VAR_10->time.tm_sec) < 0x60)
   VAR_10->time.tm_sec = FUNC_1(VAR_10->time.tm_sec);
  else
   VAR_10->time.tm_sec = -1;
  if (((unsigned)VAR_10->time.tm_min) < 0x60)
   VAR_10->time.tm_min = FUNC_1(VAR_10->time.tm_min);
  else
   VAR_10->time.tm_min = -1;
  if (((unsigned)VAR_10->time.tm_hour) < 0x24)
   VAR_10->time.tm_hour = FUNC_1(VAR_10->time.tm_hour);
  else
   VAR_10->time.tm_hour = -1;

  if (VAR_11->day_alrm) {
   if (((unsigned)VAR_10->time.tm_mday) <= 0x31)
    VAR_10->time.tm_mday = FUNC_1(VAR_10->time.tm_mday);
   else
    VAR_10->time.tm_mday = -1;

   if (VAR_11->mon_alrm) {
    if (((unsigned)VAR_10->time.tm_mon) <= 0x12)
     VAR_10->time.tm_mon = FUNC_1(VAR_10->time.tm_mon)-1;
    else
     VAR_10->time.tm_mon = -1;
   }
  }
 }

 VAR_10->enabled = !!(VAR_12 & VAR_1);
 VAR_10->pending = 0;

 return 0;
}
