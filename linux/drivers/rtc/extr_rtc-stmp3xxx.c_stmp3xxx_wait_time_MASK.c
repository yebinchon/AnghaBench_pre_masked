
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_rtc_data {scalar_t__ io; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct stmp3xxx_rtc_data *VAR_3)
{
 int VAR_4 = 5000;
 do {
  if (!(FUNC_0(VAR_3->io + VAR_1) &
    (0x80 << VAR_2)))
   return 0;
  FUNC_1(1);
 } while (--VAR_4 > 0);
 return (FUNC_0(VAR_3->io + VAR_1) &
  (0x80 << VAR_2)) ? -VAR_0 : 0;
}
