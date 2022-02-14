
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ni_gpct {int clock_period_ps; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;







__attribute__((used)) static int FUNC_0(const struct ni_gpct *VAR_3,
      unsigned int VAR_4,
      u64 *VAR_5)
{
 u64 VAR_6;

 switch (VAR_4 & VAR_1) {
 case 130:
  VAR_6 = 50000;
  break;
 case 129:
  VAR_6 = 10000000;
  break;
 case 128:
  VAR_6 = 12500;
  break;
 case 131:
  VAR_6 = 100000;
  break;
 default:




  *VAR_5 = VAR_3->clock_period_ps;
  return 0;
 }

 switch (VAR_4 & VAR_2) {
 case 134:
  break;
 case 133:
  VAR_6 *= 2;
  break;
 case 132:
  VAR_6 *= 8;
  break;
 default:
  return -VAR_0;
 }
 *VAR_5 = VAR_6;
 return 0;
}
