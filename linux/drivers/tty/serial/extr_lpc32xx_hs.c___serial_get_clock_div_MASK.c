
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned long VAR_0,
        unsigned long VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7;


 VAR_2 = VAR_0 / VAR_1;
 VAR_3 = VAR_4 = (VAR_2 / 14) - 1;
 if (VAR_4 != 0)
  VAR_4--;


 VAR_5 = VAR_4 + 3;
 VAR_7 = 0xFFFFFFFF;

 while (VAR_4 < VAR_5) {
  VAR_6 = VAR_0 / ((VAR_4 + 1) * 14);
  if (abs(VAR_6 - VAR_1) < VAR_7) {
   VAR_3 = VAR_4;
   VAR_7 = abs(VAR_6 - VAR_1);
  }

  VAR_4++;
 }
 if (VAR_4 > 0xFF)
  VAR_4 = 0xFF;

 return VAR_3;
}
