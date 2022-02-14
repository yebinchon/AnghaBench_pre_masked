
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
 int VAR_6 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int ,int) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_7, int VAR_8,
    int VAR_9, int VAR_10, u16 VAR_11)
{
 u16 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_7, VAR_4,
       VAR_0, VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_12 = VAR_2 |
        VAR_6 |
        VAR_8 << VAR_1 |
        VAR_9 << VAR_5 |
        VAR_10;

 return FUNC_0(VAR_7, VAR_3,
        VAR_0, VAR_12);
}
