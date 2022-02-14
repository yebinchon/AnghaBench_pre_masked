
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_dev {int topo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





int FUNC_0(struct ntb_dev *VAR_3)
{
 switch (VAR_3->topo) {
 case 129:
 case 130:
  return VAR_1;
 case 128:
 case 131:
  return VAR_2;
 default:
  break;
 }

 return -VAR_0;
}
