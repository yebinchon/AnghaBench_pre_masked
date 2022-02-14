
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct armada38x_rtc {int lock; TYPE_1__* data; } ;
struct TYPE_2__ {unsigned long (* read_rtc_reg ) (struct armada38x_rtc*,int ) ;} ;


 int VAR_0 ;
 struct armada38x_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned long,struct rtc_time*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (struct armada38x_rtc*,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct armada38x_rtc *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4, VAR_5;

 FUNC_2(&VAR_3->lock, VAR_5);
 VAR_4 = VAR_3->data->read_rtc_reg(VAR_3, VAR_0);
 FUNC_3(&VAR_3->lock, VAR_5);

 FUNC_1(VAR_4, VAR_2);

 return 0;
}
