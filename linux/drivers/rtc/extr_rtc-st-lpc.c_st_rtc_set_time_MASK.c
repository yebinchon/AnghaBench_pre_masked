
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rtc {unsigned long long clkrate; int lock; scalar_t__ ioaddr; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct st_rtc* FUNC_0 (struct device*) ;
 unsigned long long FUNC_1 (struct rtc_time*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct st_rtc *VAR_5 = FUNC_0(VAR_3);
 unsigned long long VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_1(VAR_4);

 VAR_6 = (unsigned long long)VAR_7 * VAR_5->clkrate;

 FUNC_2(&VAR_5->lock, VAR_8);

 FUNC_4(VAR_6 >> 32, VAR_5->ioaddr + VAR_1);
 FUNC_4(VAR_6, VAR_5->ioaddr + VAR_0);
 FUNC_4(1, VAR_5->ioaddr + VAR_2);

 FUNC_3(&VAR_5->lock, VAR_8);

 return 0;
}
