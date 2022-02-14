
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct bcm7xxx_regs TYPE_1__ ;


typedef int u16 ;
struct phy_device {int dummy; } ;
struct bcm7xxx_regs {int reg; int value; } ;


 unsigned int FUNC_0 (TYPE_1__ const*) ;



 int FUNC_1 (struct phy_device*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_0)
{
 int VAR_1;
 static const struct bcm7xxx_regs {
  int reg;
  u16 value;
 } VAR_2[] = {
  { 128, 0x008b },
  { 130, 0x01c0 },
  { 129, 0x7000 },
  { 128, 0x000f },
  { 130, 0x20d0 },
  { 128, 0x000b },
 };
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  VAR_1 = FUNC_1(VAR_0,
    VAR_2[VAR_3].reg,
    VAR_2[VAR_3].value);
  if (VAR_1)
   return VAR_1;
 }

 return 0;
}
