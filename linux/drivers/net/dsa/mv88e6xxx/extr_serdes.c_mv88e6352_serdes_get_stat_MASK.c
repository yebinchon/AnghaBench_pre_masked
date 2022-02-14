
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dev; } ;
struct mv88e6352_serdes_hw_stat {int sizeof_stat; scalar_t__ reg; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,scalar_t__,int*) ;

__attribute__((used)) static uint64_t FUNC_2(struct mv88e6xxx_chip *VAR_0,
       struct mv88e6352_serdes_hw_stat *VAR_1)
{
 u64 VAR_2 = 0;
 u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1->reg, &VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_0->dev, "failed to read statistic\n");
  return 0;
 }

 VAR_2 = VAR_3;

 if (VAR_1->sizeof_stat == 32) {
  VAR_4 = FUNC_1(VAR_0, VAR_1->reg + 1, &VAR_3);
  if (VAR_4) {
   FUNC_0(VAR_0->dev, "failed to read statistic\n");
   return 0;
  }
  VAR_2 = VAR_2 << 16 | VAR_3;
 }

 return VAR_2;
}
