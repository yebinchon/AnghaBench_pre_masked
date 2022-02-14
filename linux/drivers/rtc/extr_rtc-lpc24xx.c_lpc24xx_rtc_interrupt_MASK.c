
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc24xx_rtc {int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct lpc24xx_rtc*,int ) ;
 int FUNC_1 (int ,int,unsigned long) ;
 int FUNC_2 (struct lpc24xx_rtc*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 unsigned long VAR_9 = VAR_6;
 struct lpc24xx_rtc *VAR_10 = VAR_8;
 u32 VAR_11;


 VAR_11 = FUNC_0(VAR_10, VAR_3);
 if (VAR_11 & VAR_4) {
  VAR_9 |= VAR_5;
  FUNC_2(VAR_10, VAR_2, VAR_1);
 }


 FUNC_2(VAR_10, VAR_3, VAR_11);
 FUNC_1(VAR_10->rtc, 1, VAR_9);

 return VAR_0;
}
