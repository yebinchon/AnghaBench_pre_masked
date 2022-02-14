
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int height; int width; } ;
typedef enum selection_rect { ____Placeholder_selection_rect } selection_rect ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_rect*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct v4l2_rect **VAR_1,
     enum selection_rect VAR_2,
     struct v4l2_rect *VAR_3)
{
 struct v4l2_rect *VAR_4, *VAR_5;
 enum selection_rect VAR_6 = VAR_2;

 *VAR_1[VAR_2] = *VAR_3;
 do {
  VAR_4 = VAR_1[VAR_6];
  VAR_5 = VAR_1[VAR_6 - 1];
  FUNC_0(VAR_4, VAR_5->width, VAR_5->height);
 } while (++VAR_6 != VAR_0);
 *VAR_3 = *VAR_1[VAR_2];
}
