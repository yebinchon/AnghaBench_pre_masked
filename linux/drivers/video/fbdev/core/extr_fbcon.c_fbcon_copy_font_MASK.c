
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console_font {scalar_t__ data; int height; int width; } ;
struct vc_data {struct console_font vc_font; } ;
struct fbcon_display {scalar_t__ fontdata; int userfont; } ;


 struct fbcon_display* VAR_0 ;
 int FUNC_0 (struct vc_data*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct vc_data *VAR_1, int VAR_2)
{
 struct fbcon_display *VAR_3 = &VAR_0[VAR_2];
 struct console_font *VAR_4 = &VAR_1->vc_font;

 if (VAR_3->fontdata == VAR_4->data)
  return 0;
 return FUNC_0(VAR_1, VAR_4->width, VAR_4->height, VAR_3->fontdata, VAR_3->userfont);
}
