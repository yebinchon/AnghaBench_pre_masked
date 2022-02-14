
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct mv88e6xxx_chip*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_2, int VAR_3,
        phy_interface_t VAR_4)
{
 int VAR_5;

 if (VAR_3 != 5)
  return -VAR_1;

 switch (VAR_4) {
 case 131:
  return 0;
 case 128:
 case 129:
 case 130:
  return -VAR_0;
 default:
  break;
 }

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
