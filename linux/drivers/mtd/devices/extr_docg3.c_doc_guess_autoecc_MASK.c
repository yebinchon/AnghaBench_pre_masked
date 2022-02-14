
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_ops {int mode; } ;


 int VAR_0 ;




__attribute__((used)) static int FUNC_0(struct mtd_oob_ops *VAR_1)
{
 int VAR_2;

 switch (VAR_1->mode) {
 case 129:
 case 130:
  VAR_2 = 1;
  break;
 case 128:
  VAR_2 = 0;
  break;
 default:
  VAR_2 = -VAR_0;
 }
 return VAR_2;
}
