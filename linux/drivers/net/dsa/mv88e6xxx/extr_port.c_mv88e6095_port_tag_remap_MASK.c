
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_2, int VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_2, VAR_3,
       VAR_0,
       0x3210);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_3,
        VAR_1,
        0x7654);
}
