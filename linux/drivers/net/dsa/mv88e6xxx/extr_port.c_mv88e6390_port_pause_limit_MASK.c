
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_4, int VAR_5, u8 VAR_6,
          u8 VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_0,
       VAR_3 |
       VAR_1 | VAR_6);
 if (VAR_8)
  return VAR_8;

 return FUNC_0(VAR_4, VAR_5, VAR_0,
        VAR_3 |
        VAR_2 | VAR_7);
}
