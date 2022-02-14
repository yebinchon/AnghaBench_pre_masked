
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ,int*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,int ,int) ;

int FUNC_4(struct mv88e6xxx_chip *VAR_3, int VAR_4, u16 VAR_5)
{
 const u16 VAR_6 = (FUNC_1(VAR_3) - 1) >> 4;
 u16 VAR_7;
 int VAR_8;

 if (VAR_5 >= FUNC_1(VAR_3))
  return -VAR_0;


 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_1, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7 &= 0x0fff;
 VAR_7 |= (VAR_5 & 0x000f) << 12;

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_1, VAR_7);
 if (VAR_8)
  return VAR_8;


 if (VAR_6) {
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_2,
       &VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_7 &= ~VAR_6;
  VAR_7 |= (VAR_5 >> 4) & VAR_6;

  VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_2,
        VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_0(VAR_3->dev, "p%d: FID set to %u\n", VAR_4, VAR_5);

 return 0;
}
