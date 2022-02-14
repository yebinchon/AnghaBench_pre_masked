
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrst_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mrst_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mrst_rtc*,int ) ;
 int FUNC_2 (struct mrst_rtc*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, unsigned int VAR_3)
{
 struct mrst_rtc *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;

 FUNC_3(&VAR_1, VAR_5);
 if (VAR_3)
  FUNC_2(VAR_4, VAR_0);
 else
  FUNC_1(VAR_4, VAR_0);
 FUNC_4(&VAR_1, VAR_5);
 return 0;
}
