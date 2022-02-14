
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,scalar_t__,unsigned char*) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*,scalar_t__,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3,
  int VAR_4[VAR_0])
{
 int VAR_5, VAR_6;
 unsigned char VAR_7 = 0;





 VAR_6 = FUNC_0(VAR_3, VAR_2, &VAR_7);
 VAR_7 &= 0xc0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  unsigned char VAR_8;

  if (VAR_4[VAR_5] < 0) {
   VAR_7 |= (1 << VAR_5);
   if (VAR_4[VAR_5] < -255)
    VAR_8 = 0xff;
   else
    VAR_8 = (-1 * VAR_4[VAR_5]) & 0xff;
  }
  else {
   if (VAR_4[VAR_5] > 255)
    VAR_8 = 0xff;
   else
    VAR_8 = VAR_4[VAR_5] & 0xff;
  }
  VAR_6 += FUNC_1(VAR_3, VAR_1 + VAR_5, VAR_8);
 }
 VAR_6 += FUNC_1(VAR_3, VAR_2, VAR_7);
 return VAR_6;
}
