
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,scalar_t__) ;

__attribute__((used)) static inline long FUNC_1(struct v4l2_subdev *VAR_0, u16 VAR_1)
{
 int VAR_2;
 long VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_3 |= (VAR_2 << 8);
 VAR_2 = FUNC_0(VAR_0, VAR_1 + 1);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_3 |= VAR_2;

 return VAR_3;
}
