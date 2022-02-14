
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsaf_device {int dsaf_mode; int dev; } ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct dsaf_device *VAR_0)
{
 switch (VAR_0->dsaf_mode) {
 case 128:
 case 134:
  return 1;

 case 135:
  return 6;

 case 133:
  return 32;

 case 139:
 case 131:
 case 137:
 case 138:
 case 136:
 case 129:
  return 96;

 case 142:
 case 140:
 case 130:
 case 141:
 case 132:
  return 128;

 default:
  FUNC_0(VAR_0->dev,
    "get ring num fail,use default!dsaf_mode=%d\n",
    VAR_0->dsaf_mode);
  return 128;
 }
}
