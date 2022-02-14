
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int left; int width; int top; int height; } ;



__attribute__((used)) static void FUNC_0(struct v4l2_rect *VAR_0, const struct v4l2_rect *VAR_1,
       const struct v4l2_rect *VAR_2,
       const struct v4l2_rect *VAR_3)
{
 VAR_0->left = VAR_1->left * VAR_2->width / VAR_3->width;
 VAR_0->top = VAR_1->top * VAR_2->height / VAR_3->height;
 VAR_0->width = VAR_1->width * VAR_2->width / VAR_3->width;
 VAR_0->height = VAR_1->height * VAR_2->height / VAR_3->height;
}
