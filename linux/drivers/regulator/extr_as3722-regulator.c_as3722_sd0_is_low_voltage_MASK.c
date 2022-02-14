
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as3722_regulators {int dev; int as3722; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct as3722_regulators *VAR_2)
{
 int VAR_3;
 unsigned VAR_4;

 VAR_3 = FUNC_0(VAR_2->as3722, VAR_0, &VAR_4);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->dev, "Reg 0x%02x read failed: %d\n",
   VAR_0, VAR_3);
  return 0;
 }
 if (VAR_4 & VAR_1)
  return 1;
 return 0;
}
