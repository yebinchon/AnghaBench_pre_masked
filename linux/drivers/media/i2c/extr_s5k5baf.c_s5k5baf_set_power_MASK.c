
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int handler; } ;
struct s5k5baf {int power; TYPE_1__ ctrls; int lock; int * fw; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct s5k5baf*) ;
 int FUNC_3 (struct s5k5baf*) ;
 int FUNC_4 (struct s5k5baf*) ;
 int FUNC_5 (struct s5k5baf*) ;
 int FUNC_6 (struct s5k5baf*) ;
 int FUNC_7 (struct s5k5baf*) ;
 int FUNC_8 (struct s5k5baf*) ;
 int FUNC_9 (struct s5k5baf*,int ,int) ;
 int FUNC_10 (struct s5k5baf*) ;
 int FUNC_11 (struct s5k5baf*) ;
 int FUNC_12 (struct s5k5baf*) ;
 int FUNC_13 (struct s5k5baf*) ;
 struct s5k5baf* FUNC_14 (struct v4l2_subdev*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct s5k5baf *VAR_3 = FUNC_14(VAR_1);
 int VAR_4 = 0;

 FUNC_0(&VAR_3->lock);

 if (VAR_3->power != !VAR_2)
  goto out;

 if (VAR_2) {
  if (VAR_3->fw == ((void*)0))
   FUNC_11(VAR_3);

  FUNC_10(VAR_3);
  VAR_4 = FUNC_13(VAR_3);
  if (VAR_4 < 0)
   goto out;

  FUNC_3(VAR_3);
  FUNC_4(VAR_3);
  FUNC_9(VAR_3, VAR_0, 1);
  FUNC_7(VAR_3);

  VAR_4 = FUNC_8(VAR_3);
  if (VAR_4 < 0)
   goto out;

  FUNC_6(VAR_3);
  FUNC_5(VAR_3);

  VAR_4 = FUNC_2(VAR_3);
  if (!VAR_4)
   VAR_3->power++;
 } else {
  FUNC_12(VAR_3);
  VAR_3->power--;
 }

out:
 FUNC_1(&VAR_3->lock);

 if (!VAR_4 && VAR_2)
  VAR_4 = FUNC_15(&VAR_3->ctrls.handler);

 return VAR_4;
}
