
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_1, u16 VAR_2,
      u16 VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3 & VAR_2;

 return FUNC_1(VAR_1, VAR_0, VAR_4);
}
