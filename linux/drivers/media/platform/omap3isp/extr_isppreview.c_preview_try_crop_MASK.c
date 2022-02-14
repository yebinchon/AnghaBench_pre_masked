
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int left; int top; int width; int height; } ;
struct v4l2_mbus_framefmt {unsigned int width; unsigned int height; scalar_t__ code; } ;
struct isp_prev_device {scalar_t__ input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 void* FUNC_0 (int ,int,unsigned int,unsigned int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_1(struct isp_prev_device *VAR_10,
        const struct v4l2_mbus_framefmt *VAR_11,
        struct v4l2_rect *VAR_12)
{
 unsigned int VAR_13 = VAR_4;
 unsigned int VAR_14 = VAR_11->width - VAR_5;
 unsigned int VAR_15 = VAR_6;
 unsigned int VAR_16 = VAR_11->height - VAR_3;






 if (VAR_10->input == VAR_2) {
  VAR_13 += 2;
  VAR_14 -= 2;
 }





 if (VAR_11->code != VAR_1 &&
     VAR_11->code != VAR_0) {
  VAR_13 += 2;
  VAR_14 -= 2;
  VAR_15 += 2;
  VAR_16 -= 2;
 }


 VAR_12->left &= ~1;
 VAR_12->top &= ~1;

 VAR_12->left = FUNC_0(VAR_9, VAR_12->left, VAR_13, VAR_14 - VAR_8);
 VAR_12->top = FUNC_0(VAR_9, VAR_12->top, VAR_15, VAR_16 - VAR_7);
 VAR_12->width = FUNC_0(VAR_9, VAR_12->width, VAR_8,
         VAR_14 - VAR_12->left);
 VAR_12->height = FUNC_0(VAR_9, VAR_12->height, VAR_7,
          VAR_16 - VAR_12->top);
}
