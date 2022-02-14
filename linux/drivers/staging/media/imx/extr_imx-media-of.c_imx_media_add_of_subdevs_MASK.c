
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_media_dev {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct imx_media_dev*,struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int) ;

int FUNC_3(struct imx_media_dev *VAR_2,
        struct device_node *VAR_3)
{
 struct device_node *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; ; VAR_5++) {
  VAR_4 = FUNC_2(VAR_3, "ports", VAR_5);
  if (!VAR_4)
   break;

  VAR_6 = FUNC_0(VAR_2, VAR_4);
  if (VAR_6) {

   if (VAR_6 == -VAR_1 || VAR_6 == -VAR_0) {
    FUNC_1(VAR_4);
    continue;
   }


   goto err_out;
  }
 }

 return 0;

err_out:
 FUNC_1(VAR_4);
 return VAR_6;
}
