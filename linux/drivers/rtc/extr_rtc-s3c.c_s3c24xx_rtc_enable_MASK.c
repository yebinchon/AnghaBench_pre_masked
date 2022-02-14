
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_rtc {scalar_t__ base; int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct s3c_rtc *VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4->base + VAR_0);

 if ((VAR_5 & VAR_3) == 0) {
  FUNC_0(VAR_4->dev, "rtc disabled, re-enabling\n");

  VAR_6 = FUNC_1(VAR_4->base + VAR_0);
  FUNC_2(VAR_6 | VAR_3, VAR_4->base + VAR_0);
 }

 if (VAR_5 & VAR_2) {
  FUNC_0(VAR_4->dev, "removing RTCCON_CNTSEL\n");

  VAR_6 = FUNC_1(VAR_4->base + VAR_0);
  FUNC_2(VAR_6 & ~VAR_2,
         VAR_4->base + VAR_0);
 }

 if (VAR_5 & VAR_1) {
  FUNC_0(VAR_4->dev, "removing RTCCON_CLKRST\n");

  VAR_6 = FUNC_1(VAR_4->base + VAR_0);
  FUNC_2(VAR_6 & ~VAR_1,
         VAR_4->base + VAR_0);
 }
}
