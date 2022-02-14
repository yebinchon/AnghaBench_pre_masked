
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spinand_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;



__attribute__((used)) static int FUNC_0(struct spinand_device *VAR_3,
      u8 VAR_4)
{
 switch (VAR_4 & VAR_2) {
 case 129:
  return 0;

 case 128:
  return -VAR_0;

 case 132:
  return 3;

 case 131:
  return 6;

 case 130:
  return 8;

 default:
  break;
 }

 return -VAR_1;
}
