
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sam9_rtc {int events; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sam9_rtc*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(struct sam9_rtc *VAR_11)
{
 u32 VAR_12, VAR_13;




 VAR_13 = FUNC_0(VAR_11, VAR_6) & (VAR_0 | VAR_3);
 VAR_12 = FUNC_0(VAR_11, VAR_10) & (VAR_13 >> 16);
 if (!VAR_12)
  return VAR_5;


 if (VAR_12 & VAR_1)
  VAR_11->events |= (VAR_7 | VAR_8);


 if (VAR_12 & VAR_2)
  VAR_11->events |= (VAR_9 | VAR_8);

 return VAR_4;
}
