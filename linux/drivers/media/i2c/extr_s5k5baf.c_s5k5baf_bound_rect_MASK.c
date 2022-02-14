
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_rect {int height; int top; int width; int left; } ;


 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct v4l2_rect *VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(&VAR_0->left, &VAR_0->width, VAR_1);
 FUNC_0(&VAR_0->top, &VAR_0->height, VAR_2);
}
