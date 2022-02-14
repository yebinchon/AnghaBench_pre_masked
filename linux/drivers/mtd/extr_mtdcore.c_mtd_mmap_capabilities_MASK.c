
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

unsigned FUNC_0(struct mtd_info *VAR_5)
{
 switch (VAR_5->type) {
 case 129:
  return VAR_0 | VAR_1 | VAR_2 |
   VAR_3 | VAR_4;
 case 128:
  return VAR_0 | VAR_1 | VAR_2 |
   VAR_3;
 default:
  return VAR_0;
 }
}
