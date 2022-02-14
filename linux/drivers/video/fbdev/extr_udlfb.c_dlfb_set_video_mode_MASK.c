
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {scalar_t__ transfer_buffer; } ;
struct fb_var_screeninfo {int dummy; } ;
struct dlfb_data {int blank_mode; TYPE_2__* info; int usb_active; } ;
struct TYPE_3__ {int smem_len; } ;
struct TYPE_4__ {TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int ) ;
 struct urb* FUNC_2 (struct dlfb_data*) ;
 char* FUNC_3 (char*,int ) ;
 char* FUNC_4 (char*,int ) ;
 char* FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,struct fb_var_screeninfo*) ;
 int FUNC_7 (struct dlfb_data*,struct urb*,int) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct dlfb_data *VAR_3,
    struct fb_var_screeninfo *VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 int VAR_7;
 int VAR_8;
 struct urb *VAR_9;

 if (!FUNC_0(&VAR_3->usb_active))
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_3);
 if (!VAR_9)
  return -VAR_0;

 VAR_5 = (char *) VAR_9->transfer_buffer;






 VAR_6 = FUNC_8(VAR_5);
 VAR_6 = FUNC_5(VAR_6, 0x00);

 VAR_6 = FUNC_3(VAR_6, 0);

 VAR_6 = FUNC_4(VAR_6, VAR_3->info->fix.smem_len);

 VAR_6 = FUNC_6(VAR_6, VAR_4);
 VAR_6 = FUNC_1(VAR_6, VAR_2);
 VAR_6 = FUNC_9(VAR_6);

 VAR_8 = VAR_6 - VAR_5;

 VAR_7 = FUNC_7(VAR_3, VAR_9, VAR_8);

 VAR_3->blank_mode = VAR_2;

 return VAR_7;
}
