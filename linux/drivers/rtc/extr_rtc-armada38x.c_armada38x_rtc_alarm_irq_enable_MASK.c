
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct armada38x_rtc {int lock; TYPE_1__* data; } ;
struct TYPE_2__ {int alarm; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct armada38x_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct armada38x_rtc*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2,
      unsigned int VAR_3)
{
 struct armada38x_rtc *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5 = FUNC_0(VAR_0, VAR_4->data->alarm);
 unsigned long VAR_6;

 FUNC_3(&VAR_4->lock, VAR_6);

 if (VAR_3)
  FUNC_2(VAR_1, VAR_4, VAR_5);
 else
  FUNC_2(0, VAR_4, VAR_5);

 FUNC_4(&VAR_4->lock, VAR_6);

 return 0;
}
