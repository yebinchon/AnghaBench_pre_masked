
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct sr030pc30_info {scalar_t__ vflip; scalar_t__ hflip; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct sr030pc30_info* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1)
{
 struct sr030pc30_info *VAR_2 = FUNC_2(VAR_1);

 s32 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 &= 0x7C;
 if (VAR_2->hflip)
  VAR_3 |= 0x01;
 if (VAR_2->vflip)
  VAR_3 |= 0x02;
 return FUNC_1(VAR_1, VAR_0, VAR_3 | 0x80);
}
