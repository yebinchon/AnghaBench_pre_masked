
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct max77620_chip {int dev; int rmap; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,unsigned int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,unsigned int,int ) ;
 int FUNC_4 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct max77620_chip *VAR_2)
{
 unsigned int VAR_3;
 u8 VAR_4[6];
 int VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5++) {
  VAR_6 = FUNC_4(VAR_2->rmap, VAR_5, &VAR_3);
  if (VAR_6 < 0) {
   FUNC_2(VAR_2->dev, "Failed to read CID: %d\n", VAR_6);
   return VAR_6;
  }
  FUNC_1(VAR_2->dev, "CID%d: 0x%02x\n",
   VAR_5 - VAR_0, VAR_3);
  VAR_4[VAR_5 - VAR_0] = VAR_3;
 }


 FUNC_3(VAR_2->dev, "PMIC Version OTP:0x%02X and ES:0x%X\n",
   VAR_4[4], FUNC_0(VAR_4[5]));

 return VAR_6;
}
