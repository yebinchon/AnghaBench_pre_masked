
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_bci {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(struct twl4030_bci *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_2) {
  FUNC_1(VAR_1->dev, "error reading BCIMSTATEC\n");
  return VAR_2;
 }

 FUNC_0(VAR_1->dev, "state: %02x\n", VAR_3);

 return VAR_3;
}
