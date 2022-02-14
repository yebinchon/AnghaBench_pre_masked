
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int dr_mode; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;



 struct ssusb_mtk* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ssusb_mtk*) ;
 int FUNC_4 (struct ssusb_mtk*) ;
 int FUNC_5 (struct ssusb_mtk*) ;
 int FUNC_6 (struct ssusb_mtk*) ;
 int FUNC_7 (struct ssusb_mtk*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct ssusb_mtk *VAR_2 = FUNC_0(VAR_1);

 switch (VAR_2->dr_mode) {
 case 128:
  FUNC_4(VAR_2);
  break;
 case 130:
  FUNC_5(VAR_2);
  break;
 case 129:
  FUNC_6(VAR_2);
  FUNC_4(VAR_2);
  FUNC_5(VAR_2);
  break;
 default:
  return -VAR_0;
 }

 FUNC_7(VAR_2);
 FUNC_2(&VAR_1->dev);
 FUNC_1(&VAR_1->dev);
 FUNC_3(VAR_2);

 return 0;
}
