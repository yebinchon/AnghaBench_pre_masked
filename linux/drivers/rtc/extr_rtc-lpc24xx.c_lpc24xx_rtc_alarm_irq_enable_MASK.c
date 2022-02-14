
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc24xx_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lpc24xx_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpc24xx_rtc*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, unsigned int VAR_3)
{
 struct lpc24xx_rtc *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3)
  FUNC_1(VAR_4, VAR_1, 0);
 else
  FUNC_1(VAR_4, VAR_1, VAR_0);

 return 0;
}
