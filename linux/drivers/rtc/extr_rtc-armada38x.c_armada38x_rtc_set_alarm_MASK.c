
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct device {int dummy; } ;
struct armada38x_rtc {int lock; TYPE_1__* data; } ;
struct TYPE_2__ {int (* unmask_interrupt ) (struct armada38x_rtc*) ;int alarm; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct armada38x_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long,struct armada38x_rtc*,int ) ;
 unsigned long FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct armada38x_rtc*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct armada38x_rtc *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = FUNC_0(VAR_0, VAR_5->data->alarm);
 u32 VAR_7 = FUNC_0(VAR_1, VAR_5->data->alarm);
 unsigned long VAR_8, VAR_9;

 VAR_8 = FUNC_3(&VAR_4->time);

 FUNC_4(&VAR_5->lock, VAR_9);

 FUNC_2(VAR_8, VAR_5, VAR_6);

 if (VAR_4->enabled) {
  FUNC_2(VAR_2, VAR_5, VAR_7);
  VAR_5->data->unmask_interrupt(VAR_5);
 }

 FUNC_5(&VAR_5->lock, VAR_9);

 return 0;
}
