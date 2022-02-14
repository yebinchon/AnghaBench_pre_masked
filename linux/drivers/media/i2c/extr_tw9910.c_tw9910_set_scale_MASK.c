
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw9910_scale_ctrl {int vscale; int hscale; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3,
       const struct tw9910_scale_ctrl *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1,
     (VAR_4->vscale & 0x0F00) >> 4 |
     (VAR_4->hscale & 0x0F00) >> 8);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0,
     VAR_4->hscale & 0x00FF);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2,
     VAR_4->vscale & 0x00FF);

 return VAR_5;
}
