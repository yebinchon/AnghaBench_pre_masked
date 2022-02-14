
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;
struct armada38x_rtc {int lock; TYPE_1__* data; } ;
struct TYPE_2__ {unsigned long (* read_rtc_reg ) (struct armada38x_rtc*,int) ;int alarm; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct armada38x_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned long FUNC_5 (struct armada38x_rtc*,int) ;
 int FUNC_6 (struct armada38x_rtc*,int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct armada38x_rtc *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6, VAR_7;
 u32 VAR_8 = FUNC_0(VAR_0, VAR_5->data->alarm);
 u32 VAR_9 = FUNC_0(VAR_1, VAR_5->data->alarm);
 u32 VAR_10;

 FUNC_3(&VAR_5->lock, VAR_7);

 VAR_6 = VAR_5->data->read_rtc_reg(VAR_5, VAR_8);
 VAR_10 = VAR_5->data->read_rtc_reg(VAR_5, VAR_9) & VAR_2;

 FUNC_4(&VAR_5->lock, VAR_7);

 VAR_4->enabled = VAR_10 ? 1 : 0;
 FUNC_2(VAR_6, &VAR_4->time);

 return 0;
}
