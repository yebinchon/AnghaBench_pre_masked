
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmp3xxx_rtc_data {int rtc; scalar_t__ io; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct stmp3xxx_rtc_data* FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct stmp3xxx_rtc_data *VAR_9 = FUNC_0(VAR_8);
 u32 VAR_10 = FUNC_1(VAR_9->io + VAR_4);

 if (VAR_10 & VAR_5) {
  FUNC_3(VAR_5,
   VAR_9->io + VAR_4 + VAR_6);
  FUNC_2(VAR_9->rtc, 1, VAR_2 | VAR_3);
  return VAR_0;
 }

 return VAR_1;
}
