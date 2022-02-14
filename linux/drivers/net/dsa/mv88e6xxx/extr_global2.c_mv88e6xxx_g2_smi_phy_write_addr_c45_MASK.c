
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_2,
            bool VAR_3, int VAR_4, int VAR_5,
            int VAR_6)
{
 u16 VAR_7 = VAR_0;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_1, VAR_6);
 if (VAR_8)
  return VAR_8;

 return FUNC_0(VAR_2, VAR_3, VAR_7, VAR_4, VAR_5);
}
