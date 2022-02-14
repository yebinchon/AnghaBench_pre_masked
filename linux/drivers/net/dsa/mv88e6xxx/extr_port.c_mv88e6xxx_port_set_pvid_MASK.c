
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ,int) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_2, int VAR_3, u16 VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0,
      &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_4 & VAR_1;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_0,
       VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_2->dev, "p%d: DefaultVID set to %u\n", VAR_3, VAR_4);

 return 0;
}
