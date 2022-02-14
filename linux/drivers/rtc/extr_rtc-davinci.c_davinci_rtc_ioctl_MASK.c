
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct davinci_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 struct davinci_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct davinci_rtc*,int ) ;
 int FUNC_2 (struct davinci_rtc*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct device *VAR_5, unsigned int VAR_6, unsigned long VAR_7)
{
 struct davinci_rtc *VAR_8 = FUNC_0(VAR_5);
 u8 VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;

 FUNC_3(&VAR_4, VAR_10);

 VAR_9 = FUNC_1(VAR_8, VAR_1);

 switch (VAR_6) {
 case 128:
  VAR_9 |= VAR_3 | VAR_2;
  break;
 case 129:
  VAR_9 &= ~VAR_3;
  break;
 default:
  VAR_11 = -VAR_0;
 }

 FUNC_2(VAR_8, VAR_9, VAR_1);

 FUNC_4(&VAR_4, VAR_10);

 return VAR_11;
}
