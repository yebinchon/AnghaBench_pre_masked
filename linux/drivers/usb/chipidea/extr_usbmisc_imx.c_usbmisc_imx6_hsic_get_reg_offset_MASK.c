
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_usbmisc_data {int index; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct imx_usbmisc_data *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 if (VAR_1->index == 2 || VAR_1->index == 3) {
  VAR_2 = (VAR_1->index - 2) * 4;
 } else if (VAR_1->index == 0) {





  VAR_2 = 0;
 } else {
  FUNC_0(VAR_1->dev, "index is error for usbmisc\n");
  VAR_3 = -VAR_0;
 }

 return VAR_3 ? VAR_3 : VAR_2;
}
