
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_11, int VAR_12,
        int VAR_13, bool VAR_14, bool VAR_15)
{
 u16 VAR_16, VAR_17;
 int VAR_18;

 switch (VAR_13) {
 case 10:
  VAR_17 = VAR_6;
  break;
 case 100:
  VAR_17 = VAR_7;
  break;
 case 200:
  if (VAR_14)
   VAR_17 = VAR_7 |
    VAR_2;
  else
   VAR_17 = VAR_1;
  break;
 case 1000:
  VAR_17 = VAR_8;
  break;
 case 2500:
  if (VAR_14)
   VAR_17 = VAR_4 |
    VAR_2;
  else
   VAR_17 = VAR_4;
  break;
 case 10000:

 case 128:
  VAR_17 = VAR_10;
  break;
 default:
  return -VAR_0;
 }

 VAR_18 = FUNC_1(VAR_11, VAR_12, VAR_5, &VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_16 &= ~VAR_9;
 if (VAR_14)
  VAR_16 &= ~VAR_2;
 if (VAR_15) {
  VAR_16 &= ~VAR_3;
  if (VAR_13 != 128)
   VAR_17 |= VAR_3;
 }
 VAR_16 |= VAR_17;

 VAR_18 = FUNC_2(VAR_11, VAR_12, VAR_5, VAR_16);
 if (VAR_18)
  return VAR_18;

 if (VAR_13)
  FUNC_0(VAR_11->dev, "p%d: Speed set to %d Mbps\n", VAR_12, VAR_13);
 else
  FUNC_0(VAR_11->dev, "p%d: Speed unforced\n", VAR_12);

 return 0;
}
