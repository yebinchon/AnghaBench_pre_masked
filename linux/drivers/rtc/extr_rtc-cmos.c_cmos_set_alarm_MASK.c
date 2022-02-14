
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_mon; unsigned char tm_mday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;
struct rtc_wkalrm {TYPE_1__ time; scalar_t__ enabled; } ;
struct device {int dummy; } ;
struct cmos_rtc {int alarm_expires; scalar_t__ mon_alrm; scalar_t__ day_alrm; int irq; } ;


 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (struct cmos_rtc*,int ) ;
 int FUNC_4 (struct cmos_rtc*,int ) ;
 int FUNC_5 (struct device*,struct rtc_wkalrm*) ;
 struct cmos_rtc* FUNC_6 (struct device*) ;
 int FUNC_7 (unsigned char,unsigned char,unsigned char) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct device *VAR_9, struct rtc_wkalrm *VAR_10)
{
 struct cmos_rtc *VAR_11 = FUNC_6(VAR_9);
 unsigned char VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;


 if (!FUNC_8(VAR_11->irq))
  return -VAR_0;

 VAR_18 = FUNC_5(VAR_9, VAR_10);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_12 = VAR_10->time.tm_mon + 1;
 VAR_13 = VAR_10->time.tm_mday;
 VAR_14 = VAR_10->time.tm_hour;
 VAR_15 = VAR_10->time.tm_min;
 VAR_16 = VAR_10->time.tm_sec;

 VAR_17 = FUNC_0(VAR_3);
 if (!(VAR_17 & VAR_4) || VAR_2) {

  VAR_12 = (VAR_12 <= 12) ? FUNC_2(VAR_12) : 0xff;
  VAR_13 = (VAR_13 >= 1 && VAR_13 <= 31) ? FUNC_2(VAR_13) : 0xff;
  VAR_14 = (VAR_14 < 24) ? FUNC_2(VAR_14) : 0xff;
  VAR_15 = (VAR_15 < 60) ? FUNC_2(VAR_15) : 0xff;
  VAR_16 = (VAR_16 < 60) ? FUNC_2(VAR_16) : 0xff;
 }

 FUNC_10(&VAR_8);


 FUNC_3(VAR_11, VAR_1);


 FUNC_1(VAR_14, VAR_5);
 FUNC_1(VAR_15, VAR_6);
 FUNC_1(VAR_16, VAR_7);


 if (VAR_11->day_alrm) {
  FUNC_1(VAR_13, VAR_11->day_alrm);
  if (VAR_11->mon_alrm)
   FUNC_1(VAR_12, VAR_11->mon_alrm);
 }

 if (FUNC_12()) {




  FUNC_7(VAR_10->time.tm_hour, VAR_10->time.tm_min,
        VAR_10->time.tm_sec);
 }

 if (VAR_10->enabled)
  FUNC_4(VAR_11, VAR_1);

 FUNC_11(&VAR_8);

 VAR_11->alarm_expires = FUNC_9(&VAR_10->time);

 return 0;
}
