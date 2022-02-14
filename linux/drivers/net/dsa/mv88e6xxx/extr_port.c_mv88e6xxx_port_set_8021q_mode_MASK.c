
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct mv88e6xxx_chip {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int * VAR_2 ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,size_t*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ,size_t) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_3, int VAR_4,
      u16 VAR_5)
{
 u16 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6 &= ~VAR_1;
 VAR_6 |= VAR_5 & VAR_1;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_0, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_3->dev, "p%d: 802.1QMode set to %s\n", VAR_4,
  VAR_2[VAR_5]);

 return 0;
}
