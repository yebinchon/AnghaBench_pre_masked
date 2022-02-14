
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int width; int height; int left; int top; } ;
struct s5k6aa {scalar_t__ apply_crop; struct v4l2_rect ccd_rect; int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct s5k6aa *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_1(&VAR_5->sd);
 struct v4l2_rect *VAR_7 = &VAR_5->ccd_rect;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_2, VAR_7->width);
 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_7->height);
 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_6, VAR_3, VAR_7->left);
 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_6, VAR_4, VAR_7->top);
 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_6, VAR_0, 1);
 if (!VAR_8)
  VAR_5->apply_crop = 0;

 return VAR_8;
}
