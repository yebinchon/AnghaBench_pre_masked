
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dev; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,char*,int,char*,char*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_3, int VAR_4,
       phy_interface_t VAR_5)
{
 u16 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6 &= ~(VAR_1 |
   VAR_2);

 switch (VAR_5) {
 case 129:
  VAR_6 |= VAR_1;
  break;
 case 128:
  VAR_6 |= VAR_2;
  break;
 case 130:
  VAR_6 |= VAR_1 |
   VAR_2;
  break;
 case 131:
  break;
 default:
  return 0;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_0, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_3->dev, "p%d: delay RXCLK %s, TXCLK %s\n", VAR_4,
  VAR_6 & VAR_1 ? "yes" : "no",
  VAR_6 & VAR_2 ? "yes" : "no");

 return 0;
}
