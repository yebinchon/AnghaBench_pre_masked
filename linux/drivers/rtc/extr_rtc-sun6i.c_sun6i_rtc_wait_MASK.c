
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sun6i_rtc_dev {scalar_t__ base; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long const) ;

__attribute__((used)) static int FUNC_3(struct sun6i_rtc_dev *VAR_2, int VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 const unsigned long VAR_6 = VAR_1 + FUNC_0(VAR_5);
 u32 VAR_7;

 do {
  VAR_7 = FUNC_1(VAR_2->base + VAR_3);
  VAR_7 &= VAR_4;

  if (!VAR_7)
   return 0;

 } while (FUNC_2(VAR_1, VAR_6));

 return -VAR_0;
}
