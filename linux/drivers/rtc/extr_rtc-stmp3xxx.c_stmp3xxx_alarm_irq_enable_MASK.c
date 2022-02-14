
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_rtc_data {scalar_t__ io; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct stmp3xxx_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_7, unsigned int VAR_8)
{
 struct stmp3xxx_rtc_data *VAR_9 = FUNC_0(VAR_7);

 if (VAR_8) {
  FUNC_1(VAR_3 |
    VAR_4,
   VAR_9->io + VAR_2 +
    VAR_6);
  FUNC_1(VAR_1,
   VAR_9->io + VAR_0 + VAR_6);
 } else {
  FUNC_1(VAR_3 |
    VAR_4,
   VAR_9->io + VAR_2 +
    VAR_5);
  FUNC_1(VAR_1,
   VAR_9->io + VAR_0 + VAR_5);
 }
 return 0;
}
