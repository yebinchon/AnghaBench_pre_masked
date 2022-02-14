
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mv88e6xxx_hw_stat {int type; int reg; int size; } ;
struct mv88e6xxx_chip {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int,int*) ;

__attribute__((used)) static uint64_t FUNC_2(struct mv88e6xxx_chip *VAR_1,
         struct mv88e6xxx_hw_stat *VAR_2,
         int VAR_3, u16 VAR_4,
         u16 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = 0;
 u16 VAR_8 = 0;
 int VAR_9;
 u64 VAR_10;

 switch (VAR_2->type) {
 case 128:
  VAR_9 = FUNC_1(VAR_1, VAR_3, VAR_2->reg, &VAR_8);
  if (VAR_9)
   return VAR_0;

  VAR_6 = VAR_8;
  if (VAR_2->size == 4) {
   VAR_9 = FUNC_1(VAR_1, VAR_3, VAR_2->reg + 1, &VAR_8);
   if (VAR_9)
    return VAR_0;
   VAR_6 |= ((u32)VAR_8) << 16;
  }
  break;
 case 129:
  VAR_8 = VAR_4;

 case 130:
  VAR_8 |= VAR_2->reg | VAR_5;
  FUNC_0(VAR_1, VAR_8, &VAR_6);
  if (VAR_2->size == 8)
   FUNC_0(VAR_1, VAR_8 + 1, &VAR_7);
  break;
 default:
  return VAR_0;
 }
 VAR_10 = (((u64)VAR_7) << 32) | VAR_6;
 return VAR_10;
}
