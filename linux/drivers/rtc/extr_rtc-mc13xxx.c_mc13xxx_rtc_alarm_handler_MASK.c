
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13xxx_rtc {int rtc; struct mc13xxx* mc13xxx; } ;
struct mc13xxx {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mc13xxx*,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct mc13xxx_rtc *VAR_5 = VAR_4;
 struct mc13xxx *VAR_6 = VAR_5->mc13xxx;

 FUNC_1(VAR_5->rtc, 1, VAR_2 | VAR_1);

 FUNC_0(VAR_6, VAR_3);

 return VAR_0;
}
