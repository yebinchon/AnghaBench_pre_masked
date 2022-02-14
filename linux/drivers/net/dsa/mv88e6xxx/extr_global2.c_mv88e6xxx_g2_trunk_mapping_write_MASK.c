
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int const) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_2, int VAR_3,
         u16 VAR_4)
{
 const u16 VAR_5 = FUNC_0(FUNC_2(VAR_2)) - 1;
 u16 VAR_6 = (VAR_3 << 11) | (VAR_4 & VAR_5);

 return FUNC_1(VAR_2, VAR_0,
      VAR_1 | VAR_6);
}
