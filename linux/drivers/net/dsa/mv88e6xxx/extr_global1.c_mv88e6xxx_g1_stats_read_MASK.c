
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ,int) ;

void FUNC_3(struct mv88e6xxx_chip *VAR_5, int VAR_6, u32 *VAR_7)
{
 u32 VAR_8;
 u16 VAR_9;
 int VAR_10;

 *VAR_7 = 0;

 VAR_10 = FUNC_2(VAR_5, VAR_2,
     VAR_3 |
     VAR_4 | VAR_6);
 if (VAR_10)
  return;

 VAR_10 = FUNC_1(VAR_5);
 if (VAR_10)
  return;

 VAR_10 = FUNC_0(VAR_5, VAR_1, &VAR_9);
 if (VAR_10)
  return;

 VAR_8 = VAR_9 << 16;

 VAR_10 = FUNC_0(VAR_5, VAR_0, &VAR_9);
 if (VAR_10)
  return;

 *VAR_7 = VAR_8 | VAR_9;
}
