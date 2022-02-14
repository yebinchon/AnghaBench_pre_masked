
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_dev {int topo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





int FUNC_0(struct ntb_dev *VAR_4, int VAR_5)
{
 if (VAR_5 != VAR_1)
  return -VAR_0;

 switch (VAR_4->topo) {
 case 129:
 case 130:
  return VAR_3;
 case 128:
 case 131:
  return VAR_2;
 default:
  break;
 }

 return -VAR_0;
}
