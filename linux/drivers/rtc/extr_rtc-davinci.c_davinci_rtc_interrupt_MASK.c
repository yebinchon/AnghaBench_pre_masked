
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct davinci_rtc {int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_0 (int ,int,unsigned long) ;
 int FUNC_1 (struct davinci_rtc*,int ) ;
 int FUNC_2 (struct davinci_rtc*,int,int ) ;
 int FUNC_3 (struct davinci_rtc*,int ) ;
 int FUNC_4 (struct davinci_rtc*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_11, void *VAR_12)
{
 struct davinci_rtc *VAR_13 = VAR_12;
 unsigned long VAR_14 = 0;
 u32 VAR_15;
 u8 VAR_16, VAR_17;
 u8 VAR_18, VAR_19;
 int VAR_20 = VAR_1;

 VAR_15 = FUNC_1(VAR_13, VAR_2) &
    VAR_3;

 VAR_16 = FUNC_3(VAR_13, VAR_4) &
    VAR_5;

 VAR_17 = FUNC_3(VAR_13, VAR_6) &
    VAR_7;

 if (VAR_15) {
  if (VAR_16) {
   VAR_14 |= VAR_9 | VAR_8;
   VAR_19 = FUNC_3(VAR_13, VAR_4);
   VAR_19 |= VAR_5;
   FUNC_4(VAR_13, VAR_19, VAR_4);
  } else if (VAR_17) {
   VAR_14 |= VAR_9 | VAR_10;
   VAR_18 = FUNC_3(VAR_13, VAR_6);
   VAR_18 |= VAR_7;
   FUNC_4(VAR_13, VAR_18, VAR_6);
  }

  FUNC_2(VAR_13, VAR_3,
        VAR_2);
  FUNC_0(VAR_13->rtc, 1, VAR_14);

  VAR_20 = VAR_0;
 }

 return VAR_20;
}
