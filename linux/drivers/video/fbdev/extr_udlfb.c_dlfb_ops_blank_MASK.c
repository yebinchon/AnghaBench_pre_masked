
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ transfer_buffer; } ;
struct fb_info {int var; int dev; struct dlfb_data* par; } ;
struct dlfb_data {int blank_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*) ;
 struct urb* FUNC_3 (struct dlfb_data*) ;
 int FUNC_4 (struct dlfb_data*,int *) ;
 int FUNC_5 (struct dlfb_data*,struct urb*,int) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(int VAR_1, struct fb_info *VAR_2)
{
 struct dlfb_data *VAR_3 = VAR_2->par;
 char *VAR_4;
 struct urb *VAR_5;

 FUNC_0(VAR_2->dev, "blank, mode %d --> %d\n",
  VAR_3->blank_mode, VAR_1);

 if ((VAR_3->blank_mode == VAR_0) &&
     (VAR_1 != VAR_0)) {


  FUNC_4(VAR_3, &VAR_2->var);
 }

 VAR_5 = FUNC_3(VAR_3);
 if (!VAR_5)
  return 0;

 VAR_4 = (char *) VAR_5->transfer_buffer;
 VAR_4 = FUNC_6(VAR_4);
 VAR_4 = FUNC_1(VAR_4, VAR_1);
 VAR_4 = FUNC_7(VAR_4);


 VAR_4 = FUNC_2(VAR_4);

 FUNC_5(VAR_3, VAR_5, VAR_4 -
   (char *) VAR_5->transfer_buffer);

 VAR_3->blank_mode = VAR_1;

 return 0;
}
