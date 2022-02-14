
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_endpoint {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



int FUNC_0(struct cdns3_endpoint *VAR_3)
{
 switch (VAR_3->type) {
 case 128:
  return VAR_1;
 case 129:
  return VAR_0;
 default:
  return VAR_2;
 }
}
