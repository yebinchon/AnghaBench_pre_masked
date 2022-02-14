
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_0,
     int VAR_1, unsigned int VAR_2,
     int *VAR_3)
{
 int VAR_4 = VAR_1 + (VAR_2 / 8);
 u8 VAR_5 = (1 << (VAR_2 & 0x7));
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_3 = !!(VAR_5 & VAR_6);

 return 0;
}
