
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ tm_mon; scalar_t__ tm_mday; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct device {int dummy; } ;
struct cdns_rtc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct cdns_rtc* FUNC_4 (struct device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct cdns_rtc *VAR_10 = FUNC_4(VAR_8);
 int VAR_11 = -VAR_7;
 int VAR_12;
 u32 VAR_13, VAR_14, VAR_15;

 FUNC_2(VAR_8, 0);

 VAR_13 = FUNC_3(&VAR_9->time);
 VAR_14 = FUNC_0(VAR_1, FUNC_1(VAR_9->time.tm_mday))
       | FUNC_0(VAR_2, FUNC_1(VAR_9->time.tm_mon + 1));


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  FUNC_6(VAR_13, VAR_10->regs + VAR_6);
  FUNC_6(VAR_14, VAR_10->regs + VAR_0);
  VAR_15 = FUNC_5(VAR_10->regs + VAR_4);

  if ((VAR_15 & VAR_5) == VAR_5) {
   VAR_11 = 0;
   break;
  }
 }

 if (!VAR_11)
  FUNC_2(VAR_8, VAR_9->enabled);
 return VAR_11;
}
