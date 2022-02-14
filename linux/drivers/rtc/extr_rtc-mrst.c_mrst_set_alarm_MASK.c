
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct mrst_rtc {int irq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mrst_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mrst_rtc*,int ) ;
 int FUNC_3 (struct mrst_rtc*,int ) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned char,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct mrst_rtc *VAR_10 = FUNC_0(VAR_8);
 unsigned char VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;

 if (!VAR_10->irq)
  return -VAR_0;

 VAR_11 = VAR_9->time.tm_hour;
 VAR_12 = VAR_9->time.tm_min;
 VAR_13 = VAR_9->time.tm_sec;

 FUNC_4(&VAR_7);

 FUNC_2(VAR_10, VAR_3);


 FUNC_6(VAR_11, VAR_4);
 FUNC_6(VAR_12, VAR_5);
 FUNC_6(VAR_13, VAR_6);

 FUNC_5(&VAR_7);

 VAR_14 = FUNC_1(VAR_1, VAR_2);
 if (VAR_14)
  return VAR_14;

 FUNC_4(&VAR_7);
 if (VAR_9->enabled)
  FUNC_3(VAR_10, VAR_3);

 FUNC_5(&VAR_7);

 return 0;
}
