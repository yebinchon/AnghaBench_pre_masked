
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab8500_gpadc {int dev; } ;


 int FUNC_0 (struct ab8500_gpadc*,int ,int) ;
 int FUNC_1 (struct ab8500_gpadc*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,...) ;

int FUNC_3(struct ab8500_gpadc *VAR_0, u8 VAR_1,
  u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_5);


 if (VAR_6 < 0)
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0) {
  FUNC_2(VAR_0->dev, "GPADC raw value failed ch: %d\n",
    VAR_1);
  return VAR_6;
 }

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_6);
 if (VAR_7 < 0)
  FUNC_2(VAR_0->dev,
   "GPADC to voltage conversion failed ch: %d AD: 0x%x\n",
   VAR_1, VAR_6);

 return VAR_7;
}
