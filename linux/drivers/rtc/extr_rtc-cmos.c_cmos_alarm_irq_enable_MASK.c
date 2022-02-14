
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cmos_rtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmos_rtc*,int ) ;
 int FUNC_1 (struct cmos_rtc*,int ) ;
 struct cmos_rtc* FUNC_2 (struct device*) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, unsigned int VAR_3)
{
 struct cmos_rtc *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;

 FUNC_3(&VAR_1, VAR_5);

 if (VAR_3)
  FUNC_1(VAR_4, VAR_0);
 else
  FUNC_0(VAR_4, VAR_0);

 FUNC_4(&VAR_1, VAR_5);
 return 0;
}
