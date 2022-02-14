
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13xxx_rtc {scalar_t__ valid; struct mc13xxx* mc13xxx; } ;
struct mc13xxx {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct mc13xxx*,int) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct mc13xxx_rtc *VAR_3 = VAR_2;
 struct mc13xxx *VAR_4 = VAR_3->mc13xxx;

 VAR_3->valid = 0;

 FUNC_0(VAR_4, VAR_1);

 return VAR_0;
}
