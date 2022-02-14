
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_clock {unsigned long mclk; unsigned long divider; unsigned long shift; } ;


 int FUNC_0 (unsigned long,struct sm501_clock*,int,unsigned long,long*) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_0,
     struct sm501_clock *VAR_1,
     int VAR_2)
{
 unsigned long VAR_3;
 long VAR_4 = 999999999;


 for (VAR_3 = 288000000; VAR_3 <= 336000000; VAR_3 += 48000000) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4);
 }


 return VAR_1->mclk / (VAR_1->divider << VAR_1->shift);
}
