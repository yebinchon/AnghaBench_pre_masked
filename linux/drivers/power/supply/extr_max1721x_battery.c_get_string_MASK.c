
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct max17211_device_info {int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct max17211_device_info *VAR_3,
   uint16_t VAR_4, uint8_t VAR_5, char *VAR_6)
{
 unsigned int VAR_7;

 if (!VAR_6 || !(VAR_4 == VAR_2 ||
   VAR_4 == VAR_1))
  return -VAR_0;

 while (VAR_5--) {
  if (FUNC_0(VAR_3->regmap, VAR_4++, &VAR_7))
   return -VAR_0;
  *VAR_6++ = VAR_7>>8 & 0x00FF;
  *VAR_6++ = VAR_7 & 0x00FF;
 }
 return 0;
}
