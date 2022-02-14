
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int periodic_freq; int rtc_dev; scalar_t__ regbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sh_rtc *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5->regbase + VAR_1);
 VAR_7 = VAR_6 & VAR_2;
 VAR_6 &= ~VAR_2;
 FUNC_2(VAR_6, VAR_5->regbase + VAR_1);


 if (VAR_7 && VAR_5->periodic_freq & VAR_0)
  FUNC_1(VAR_5->rtc_dev, 1, VAR_4 | VAR_3);

 return VAR_7;
}
