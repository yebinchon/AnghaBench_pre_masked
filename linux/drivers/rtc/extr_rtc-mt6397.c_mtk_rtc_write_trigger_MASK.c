
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt6397_rtc {scalar_t__ addr_base; int regmap; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 unsigned long VAR_5 ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mt6397_rtc *VAR_6)
{
 unsigned long VAR_7 = VAR_5 + VAR_1;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_2(VAR_6->regmap, VAR_6->addr_base + VAR_4, 1);
 if (VAR_8 < 0)
  return VAR_8;

 while (1) {
  VAR_8 = FUNC_1(VAR_6->regmap, VAR_6->addr_base + VAR_2,
      &VAR_9);
  if (VAR_8 < 0)
   break;
  if (!(VAR_9 & VAR_3))
   break;
  if (FUNC_3(VAR_5, VAR_7)) {
   VAR_8 = -VAR_0;
   break;
  }
  FUNC_0();
 }

 return VAR_8;
}
