
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_rtc_data {scalar_t__ io; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct stmp3xxx_rtc_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3)
{
 struct stmp3xxx_rtc_data *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4)
  return 0;

 FUNC_1(VAR_1,
  VAR_4->io + VAR_0 + VAR_2);

 return 0;
}
