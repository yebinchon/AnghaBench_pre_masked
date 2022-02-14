
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_2, int VAR_3, u8 VAR_4,
      bool VAR_5)
{
 u16 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_1, &VAR_6);
 if (VAR_8)
  return VAR_8;

 if (VAR_5)
  VAR_7 = VAR_6 & ~VAR_0;
 else
  VAR_7 = VAR_6 | VAR_0;

 if (VAR_6 != VAR_7)
  VAR_8 = FUNC_1(VAR_2, VAR_1, VAR_7);

 return VAR_8;
}
