
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int top; int left; int height; int width; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_8,
        const struct v4l2_rect *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_5, VAR_9->width);
 if (!VAR_10)
  VAR_10 = FUNC_0(VAR_8, VAR_4, VAR_9->height);
 if (!VAR_10)
  VAR_10 = FUNC_0(VAR_8, VAR_6, VAR_9->left);
 if (!VAR_10)
  VAR_10 = FUNC_0(VAR_8, VAR_7, VAR_9->top);
 if (!VAR_10)
  VAR_10 = FUNC_0(VAR_8, VAR_1, VAR_9->width);
 if (!VAR_10)
  VAR_10 = FUNC_0(VAR_8, VAR_0, VAR_9->height);
 if (!VAR_10)
  VAR_10 = FUNC_0(VAR_8, VAR_2, VAR_9->left);
 if (!VAR_10)
  VAR_10 = FUNC_0(VAR_8, VAR_3, VAR_9->top);

 return VAR_10;
}
