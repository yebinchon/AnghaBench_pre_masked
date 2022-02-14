
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {void* tm_hour; void* tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {int pending; int enabled; TYPE_1__ time; } ;
struct device {int dummy; } ;
struct davinci_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_2 (struct davinci_rtc*) ;
 struct davinci_rtc* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct davinci_rtc*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct davinci_rtc *VAR_10 = FUNC_3(VAR_8);
 u16 VAR_11 = 0;
 u8 VAR_12, VAR_13;
 unsigned long VAR_14;

 VAR_9->time.tm_sec = 0;

 FUNC_6(&VAR_7, VAR_14);

 FUNC_2(VAR_10);
 VAR_9->time.tm_min = FUNC_0(FUNC_5(VAR_10, VAR_4));

 FUNC_2(VAR_10);
 VAR_9->time.tm_hour = FUNC_0(FUNC_5(VAR_10, VAR_3));

 FUNC_2(VAR_10);
 VAR_12 = FUNC_5(VAR_10, VAR_1);

 FUNC_2(VAR_10);
 VAR_13 = FUNC_5(VAR_10, VAR_2);

 FUNC_7(&VAR_7, VAR_14);
 VAR_11 |= VAR_13;
 VAR_11 <<= 8;
 VAR_11 |= VAR_12;

 if (FUNC_1(VAR_11, &VAR_9->time) < 0)
  return -VAR_0;

 VAR_9->pending = !!(FUNC_5(VAR_10,
     VAR_5) &
   VAR_6);
 VAR_9->enabled = VAR_9->pending && FUNC_4(VAR_8);

 return 0;
}
