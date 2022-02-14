
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9v011 {scalar_t__ vflip; scalar_t__ hflip; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned int) ;
 struct mt9v011* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_1)
{
 struct mt9v011 *VAR_2 = FUNC_1(VAR_1);
 unsigned VAR_3 = 0x1000;

 if (VAR_2->hflip)
  VAR_3 |= 0x4000;

 if (VAR_2->vflip)
  VAR_3 |= 0x8000;

 FUNC_0(VAR_1, VAR_0, VAR_3);
}
