
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4740_rtc {int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct jz4740_rtc*,int,int) ;
 int FUNC_1 (struct jz4740_rtc*,int ) ;
 int FUNC_2 (int ,int,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct jz4740_rtc *VAR_9 = VAR_8;
 uint32_t VAR_10;
 unsigned long VAR_11 = 0;

 VAR_10 = FUNC_1(VAR_9, VAR_1);

 if (VAR_10 & VAR_2)
  VAR_11 |= (VAR_6 | VAR_5);

 if (VAR_10 & VAR_3)
  VAR_11 |= (VAR_4 | VAR_5);

 FUNC_2(VAR_9->rtc, 1, VAR_11);

 FUNC_0(VAR_9, VAR_2 | VAR_3, 0);

 return VAR_0;
}
