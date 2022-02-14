
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rtc {int clkrate; int lock; scalar_t__ ioaddr; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct st_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned long long,int ) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long long,struct rtc_time*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct st_rtc *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5, VAR_6;
 unsigned long long VAR_7;
 unsigned long VAR_8;

 FUNC_4(&VAR_4->lock, VAR_8);

 do {
  VAR_6 = FUNC_2(VAR_4->ioaddr + VAR_1);
  VAR_5 = FUNC_2(VAR_4->ioaddr + VAR_0);
 } while (FUNC_2(VAR_4->ioaddr + VAR_1) != VAR_6);

 FUNC_5(&VAR_4->lock, VAR_8);

 VAR_7 = ((unsigned long long)VAR_6 << 32) | VAR_5;
 FUNC_1(VAR_7, VAR_4->clkrate);
 FUNC_3(VAR_7, VAR_3);

 return 0;
}
