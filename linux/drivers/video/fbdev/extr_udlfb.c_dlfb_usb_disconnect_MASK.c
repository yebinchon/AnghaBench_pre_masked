
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct fb_info {int dev; } ;
struct dlfb_data {int virtualized; int usb_active; struct fb_info* info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct dlfb_data*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_6 (struct fb_info*) ;
 struct dlfb_data* FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_2)
{
 struct dlfb_data *VAR_3;
 struct fb_info *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_7(VAR_2);
 VAR_4 = VAR_3->info;

 FUNC_2(&VAR_2->dev, "USB disconnect starting\n");


 VAR_3->virtualized = 1;


 FUNC_1(&VAR_3->usb_active, 0);


 FUNC_5(VAR_3);


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  FUNC_4(VAR_4->dev, &VAR_1[VAR_5]);
 FUNC_3(VAR_4->dev, &VAR_0);

 FUNC_6(VAR_4);
}
