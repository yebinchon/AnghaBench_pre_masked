
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa1100_rtc {int lock; int rtsr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct sa1100_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, unsigned int VAR_2)
{
 u32 VAR_3;
 struct sa1100_rtc *VAR_4 = FUNC_0(VAR_1);

 FUNC_2(&VAR_4->lock);
 VAR_3 = FUNC_1(VAR_4->rtsr);
 if (VAR_2)
  VAR_3 |= VAR_0;
 else
  VAR_3 &= ~VAR_0;
 FUNC_4(VAR_3, VAR_4->rtsr);
 FUNC_3(&VAR_4->lock);
 return 0;
}
