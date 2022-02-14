
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {unsigned int width; unsigned int height; unsigned int left; unsigned int top; } ;
struct v4l2_mbus_framefmt {int width; int height; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (int ,unsigned int,unsigned int,unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(const struct v4l2_mbus_framefmt *VAR_4,
        const struct v4l2_mbus_framefmt *VAR_5,
        struct v4l2_rect *VAR_6)
{
 const unsigned int VAR_7 = VAR_0;
 const unsigned int VAR_8 = VAR_0;




 unsigned int VAR_9 =
  ((32 * VAR_8 + (VAR_5->width - 1) * 64 + 16) >> 8) + 7;
 unsigned int VAR_10 =
  ((32 * VAR_7 + (VAR_5->height - 1) * 64 + 16) >> 8) + 4;
 unsigned int VAR_11 =
  ((64 * VAR_8 + (VAR_5->width - 1) * 1024 + 32) >> 8) + 7;
 unsigned int VAR_12 =
  ((64 * VAR_7 + (VAR_5->height - 1) * 1024 + 32) >> 8) + 7;

 VAR_6->width = FUNC_0(VAR_3, VAR_6->width, VAR_9, VAR_11);
 VAR_6->height = FUNC_0(VAR_3, VAR_6->height, VAR_10, VAR_12);


 VAR_6->left = FUNC_0(VAR_3, VAR_6->left, 0, VAR_4->width - VAR_2);
 VAR_6->width = FUNC_0(VAR_3, VAR_6->width, VAR_2,
         VAR_4->width - VAR_6->left);
 VAR_6->top = FUNC_0(VAR_3, VAR_6->top, 0, VAR_4->height - VAR_1);
 VAR_6->height = FUNC_0(VAR_3, VAR_6->height, VAR_1,
          VAR_4->height - VAR_6->top);
}
