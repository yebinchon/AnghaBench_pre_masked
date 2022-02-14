
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int,int*) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_1, int VAR_2, int VAR_3,
   u16 VAR_4, u16 VAR_5)
{
 u16 VAR_6;
 int VAR_7;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_6);
  if (VAR_7)
   return VAR_7;

  if ((VAR_6 & VAR_4) == VAR_5)
   return 0;

  FUNC_2(1000, 2000);
 }

 FUNC_0(VAR_1->dev, "Timeout while waiting for switch\n");
 return -VAR_0;
}
