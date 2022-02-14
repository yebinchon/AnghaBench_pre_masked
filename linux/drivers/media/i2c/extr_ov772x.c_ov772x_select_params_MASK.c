
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; } ;
struct ov772x_win_size {int dummy; } ;
struct ov772x_color_format {scalar_t__ code; } ;


 unsigned int FUNC_0 (struct ov772x_color_format*) ;
 struct ov772x_color_format* VAR_0 ;
 struct ov772x_win_size* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct v4l2_mbus_framefmt *VAR_1,
     const struct ov772x_color_format **VAR_2,
     const struct ov772x_win_size **VAR_3)
{
 unsigned int VAR_4;


 *VAR_2 = &VAR_0[0];

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_1->code == VAR_0[VAR_4].code) {
   *VAR_2 = &VAR_0[VAR_4];
   break;
  }
 }


 *VAR_3 = FUNC_1(VAR_1->width, VAR_1->height);
}
