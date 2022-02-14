
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_1,
           unsigned int VAR_2, int *VAR_3)
{
 int VAR_4 = VAR_0 + (VAR_2 / 2);
 int VAR_5 = (VAR_2 & 0x1) ? 4 : 0;
 u8 VAR_6 = (0x7 << VAR_5);
 int VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_0(VAR_1, VAR_4, &VAR_8);
 if (VAR_7)
  return VAR_7;

 *VAR_3 = (VAR_8 & VAR_6) >> VAR_5;

 return 0;
}
