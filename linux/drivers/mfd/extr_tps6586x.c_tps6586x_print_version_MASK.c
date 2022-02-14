
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
 int FUNC_0 (int *,char*,char const*,int) ;

__attribute__((used)) static void FUNC_1(struct i2c_client *VAR_0, int VAR_1)
{
 const char *VAR_2;

 switch (VAR_1) {
 case 133:
  VAR_2 = "TPS658621A";
  break;
 case 132:
  VAR_2 = "TPS658621C/D";
  break;
 case 131:
  VAR_2 = "TPS658623";
  break;
 case 130:
 case 129:
  VAR_2 = "TPS658640";
  break;
 case 128:
  VAR_2 = "TPS658643";
  break;
 default:
  VAR_2 = "TPS6586X";
  break;
 }

 FUNC_0(&VAR_0->dev, "Found %s, VERSIONCRC is %02x\n", VAR_2, VAR_1);
}
