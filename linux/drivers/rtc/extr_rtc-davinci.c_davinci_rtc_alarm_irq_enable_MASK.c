
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct davinci_rtc*) ;
 struct davinci_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct davinci_rtc*,int ) ;
 int FUNC_3 (struct davinci_rtc*,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_7,
     unsigned int VAR_8)
{
 struct davinci_rtc *VAR_9 = FUNC_1(VAR_7);
 unsigned long VAR_10;
 u8 VAR_11 = FUNC_2(VAR_9, VAR_0);

 FUNC_4(&VAR_6, VAR_10);

 if (VAR_8)
  VAR_11 |= VAR_3 |
        VAR_4 |
        VAR_5 |
        VAR_2 |
        VAR_1;
 else
  VAR_11 &= ~VAR_1;

 FUNC_0(VAR_9);
 FUNC_3(VAR_9, VAR_11, VAR_0);

 FUNC_5(&VAR_6, VAR_10);

 return 0;
}
