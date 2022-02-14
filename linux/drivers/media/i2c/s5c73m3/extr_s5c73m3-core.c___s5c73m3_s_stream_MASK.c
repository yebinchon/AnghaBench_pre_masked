
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {scalar_t__ mbus_code; int streaming; scalar_t__ apply_fiv; scalar_t__ apply_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct s5c73m3*,int ) ;
 int FUNC_1 (struct s5c73m3*,int ,int) ;
 int FUNC_2 (struct s5c73m3*) ;
 int FUNC_3 (struct s5c73m3*) ;
 int FUNC_4 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct s5c73m3 *VAR_6, struct v4l2_subdev *VAR_7,
        int VAR_8)
{
 u16 VAR_9;
 int VAR_10;

 if (VAR_8 && VAR_6->apply_fmt) {
  if (VAR_6->mbus_code == VAR_5)
   VAR_9 = VAR_1;
  else
   VAR_9 = VAR_2;

  VAR_10 = FUNC_1(VAR_6, VAR_0, VAR_9);
  if (!VAR_10)
   VAR_10 = FUNC_3(VAR_6);
  if (VAR_10)
   return VAR_10;
  VAR_6->apply_fmt = 0;
 }

 VAR_10 = FUNC_1(VAR_6, VAR_3, !!VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_6->streaming = !!VAR_8;

 if (!VAR_8)
  return VAR_10;

 if (VAR_6->apply_fiv) {
  VAR_10 = FUNC_2(VAR_6);
  if (VAR_10 < 0)
   FUNC_4(VAR_7, "Error setting frame rate(%d)\n", VAR_10);
 }

 return FUNC_0(VAR_6, VAR_4);
}
