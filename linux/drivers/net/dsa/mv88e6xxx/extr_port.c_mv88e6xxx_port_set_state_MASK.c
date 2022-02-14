
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dev; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int*) ;
 int * VAR_7 ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ,int) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_8, int VAR_9, u8 VAR_10)
{
 u16 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_1, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_11 &= ~VAR_6;

 switch (VAR_10) {
 case 131:
  VAR_10 = VAR_3;
  break;
 case 132:
 case 128:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_5;
  break;
 case 130:
  VAR_10 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_11 |= VAR_10;

 VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_1, VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_0(VAR_8->dev, "p%d: PortState set to %s\n", VAR_9,
  VAR_7[VAR_10]);

 return 0;
}
