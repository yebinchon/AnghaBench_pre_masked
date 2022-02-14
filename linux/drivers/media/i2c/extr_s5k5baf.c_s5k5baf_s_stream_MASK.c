
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5k5baf {int streaming; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct s5k5baf*) ;
 int FUNC_3 (struct s5k5baf*) ;
 int FUNC_4 (struct s5k5baf*) ;
 int FUNC_5 (struct s5k5baf*,int) ;
 int FUNC_6 (struct s5k5baf*,int,int) ;
 struct s5k5baf* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct s5k5baf *VAR_2 = FUNC_7(VAR_0);
 int VAR_3;

 FUNC_0(&VAR_2->lock);

 if (VAR_2->streaming == !!VAR_1) {
  VAR_3 = 0;
  goto out;
 }

 if (VAR_1) {
  FUNC_3(VAR_2);
  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3 < 0)
   goto out;
  FUNC_5(VAR_2, 1);
  FUNC_6(VAR_2, 0xb0cc, 0x000b);
 } else {
  FUNC_5(VAR_2, 0);
 }
 VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3)
  VAR_2->streaming = !VAR_2->streaming;

out:
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
