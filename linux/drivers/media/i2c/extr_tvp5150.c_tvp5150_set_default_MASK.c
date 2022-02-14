
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_rect {int height; int width; scalar_t__ left; scalar_t__ top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(v4l2_std_id VAR_4, struct v4l2_rect *VAR_5)
{

 VAR_5->top = 0;
 VAR_5->left = 0;
 VAR_5->width = VAR_0;
 if (VAR_4 & VAR_3)
  VAR_5->height = VAR_1;
 else
  VAR_5->height = VAR_2;
}
