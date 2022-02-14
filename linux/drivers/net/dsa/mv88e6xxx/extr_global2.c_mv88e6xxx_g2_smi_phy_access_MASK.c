
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_6,
           bool VAR_7, bool VAR_8, u16 VAR_9, int VAR_10,
           int VAR_11)
{
 u16 VAR_12 = VAR_9;

 if (VAR_7)
  VAR_12 |= VAR_0;
 else
  VAR_12 |= VAR_1;

 if (VAR_8)
  VAR_12 |= VAR_4;
 else
  VAR_12 |= VAR_3;

 VAR_10 <<= FUNC_0(VAR_2);
 VAR_12 |= VAR_10 & VAR_2;
 VAR_12 |= VAR_11 & VAR_5;

 return FUNC_1(VAR_6, VAR_12);
}
