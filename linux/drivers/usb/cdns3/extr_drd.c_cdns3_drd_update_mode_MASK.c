
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3 {int dr_mode; int dev; } ;


 int VAR_0 ;



 int FUNC_0 (struct cdns3*) ;
 int FUNC_1 (struct cdns3*,int const) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct cdns3 *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->dr_mode) {
 case 128:
  VAR_2 = FUNC_1(VAR_1, 128);
  break;
 case 130:
  VAR_2 = FUNC_1(VAR_1, 130);
  break;
 case 129:
  VAR_2 = FUNC_0(VAR_1);
  break;
 default:
  FUNC_2(VAR_1->dev, "Unsupported mode of operation %d\n",
   VAR_1->dr_mode);
  return -VAR_0;
 }

 return VAR_2;
}
