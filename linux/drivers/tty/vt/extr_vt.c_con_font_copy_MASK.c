
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_mode; int vc_num; TYPE_1__* vc_sw; } ;
struct console_font_op {int height; } ;
struct TYPE_2__ {int (* con_font_copy ) (struct vc_data*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct vc_data*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct vc_data *VAR_4, struct console_font_op *VAR_5)
{
 int VAR_6 = VAR_5->height;
 int VAR_7;


 FUNC_0();
 if (VAR_4->vc_mode != VAR_3)
  VAR_7 = -VAR_0;
 else if (!VAR_4->vc_sw->con_font_copy)
  VAR_7 = -VAR_1;
 else if (VAR_6 < 0 || !FUNC_3(VAR_6))
  VAR_7 = -VAR_2;
 else if (VAR_6 == VAR_4->vc_num)
  VAR_7 = 0;
 else
  VAR_7 = VAR_4->vc_sw->con_font_copy(VAR_4, VAR_6);
 FUNC_1();
 return VAR_7;
}
