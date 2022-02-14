
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq24190_dev_info {int ss_reg; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bq24190_dev_info*,int ,int *) ;
 int FUNC_1 (struct bq24190_dev_info*,int ,int ,int ,int*) ;
 int FUNC_2 (struct bq24190_dev_info*) ;
 int FUNC_3 (struct bq24190_dev_info*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct bq24190_dev_info *VAR_5)
{
 u8 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_1(VAR_5, VAR_1,
   VAR_2,
   VAR_3,
   &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_6) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_4(VAR_5->dev, "Error unknown model: 0x%02x\n", VAR_6);
  return -VAR_4;
 }

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_0(VAR_5, VAR_0, &VAR_5->ss_reg);
}
