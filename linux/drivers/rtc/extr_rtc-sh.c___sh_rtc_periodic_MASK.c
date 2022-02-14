
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int periodic_freq; int rtc_dev; scalar_t__ regbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sh_rtc *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_6->regbase + VAR_2);
 VAR_8 = VAR_7 & VAR_3;
 VAR_7 &= ~VAR_3;
 FUNC_2(VAR_7, VAR_6->regbase + VAR_2);

 if (!VAR_8)
  return 0;


 if ((VAR_6->periodic_freq & VAR_1) && (VAR_6->periodic_freq & VAR_0))
  VAR_6->periodic_freq &= ~VAR_0;
 else {
  if (VAR_6->periodic_freq & VAR_1)
   VAR_6->periodic_freq |= VAR_0;
  FUNC_1(VAR_6->rtc_dev, 1, VAR_5 | VAR_4);
 }

 return VAR_8;
}
