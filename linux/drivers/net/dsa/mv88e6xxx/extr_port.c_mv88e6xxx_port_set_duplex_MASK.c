
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,char*,char*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ,int) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_4, int VAR_5, int VAR_6)
{
 u16 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_1, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7 &= ~(VAR_3 |
   VAR_2);

 switch (VAR_6) {
 case 129:
  VAR_7 |= VAR_3;
  break;
 case 130:
  VAR_7 |= VAR_3 |
   VAR_2;
  break;
 case 128:

  break;
 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_1, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_0(VAR_4->dev, "p%d: %s %s duplex\n", VAR_5,
  VAR_7 & VAR_3 ? "Force" : "Unforce",
  VAR_7 & VAR_2 ? "full" : "half");

 return 0;
}
