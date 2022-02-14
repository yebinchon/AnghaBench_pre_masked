
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct armada38x_rtc {int lock; TYPE_1__* data; } ;
typedef int s8 ;
struct TYPE_2__ {unsigned long (* read_rtc_reg ) (struct armada38x_rtc*,int ) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 long FUNC_0 (long) ;
 struct armada38x_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (struct armada38x_rtc*,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, long *VAR_3)
{
 struct armada38x_rtc *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5, VAR_6;
 long VAR_7;

 FUNC_2(&VAR_4->lock, VAR_6);
 VAR_5 = VAR_4->data->read_rtc_reg(VAR_4, VAR_0);
 FUNC_3(&VAR_4->lock, VAR_6);

 VAR_7 = (VAR_5 & VAR_1 ? 3815 : 954) * (s8)VAR_5;

 *VAR_3 = FUNC_0(VAR_7);

 return 0;
}
