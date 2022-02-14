
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct sr030pc30_info {int sleep; int i2c_reg_page; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct sr030pc30_info* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
         bool VAR_2, bool VAR_3)
{
 struct sr030pc30_info *VAR_4 = FUNC_1(VAR_1);
 u8 VAR_5 = VAR_3 ? 0xF1 : 0xF0;
 int VAR_6 = 0;

 if (VAR_2)
  VAR_6 = FUNC_0(VAR_1, VAR_0, VAR_5 | 0x02);
 if (!VAR_6) {
  VAR_6 = FUNC_0(VAR_1, VAR_0, VAR_5);
  if (!VAR_6) {
   VAR_4->sleep = VAR_3;
   if (VAR_2)
    VAR_4->i2c_reg_page = -1;
  }
 }
 return VAR_6;
}
