
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct noon010_info {int hflip; int vflip; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;
 struct noon010_info* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, int VAR_1, int VAR_2)
{
 struct noon010_info *VAR_3 = FUNC_3(VAR_0);
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0, FUNC_0(1));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 &= 0x7C;
 if (VAR_1)
  VAR_4 |= 0x01;
 if (VAR_2)
  VAR_4 |= 0x02;

 VAR_5 = FUNC_2(VAR_0, FUNC_0(1), VAR_4 | 0x80);
 if (!VAR_5) {
  VAR_3->hflip = VAR_1;
  VAR_3->vflip = VAR_2;
 }
 return VAR_5;
}
