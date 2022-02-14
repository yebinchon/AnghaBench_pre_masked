
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dev; } ;


 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int,int *) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_0, int VAR_1, int VAR_2, u16 *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0);

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_0->dev, "<- addr: 0x%.2x reg: 0x%.2x val: 0x%.4x\n",
  VAR_1, VAR_2, *VAR_3);

 return 0;
}
