
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5k4ecgx {int streaming; int lock; } ;


 int FUNC_0 (struct s5k4ecgx*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s5k4ecgx* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct s5k4ecgx *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;

 FUNC_4(1, VAR_0, VAR_1, "Turn streaming %s\n", VAR_2 ? "on" : "off");

 FUNC_1(&VAR_3->lock);

 if (VAR_3->streaming == !VAR_2) {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  if (!VAR_4)
   VAR_3->streaming = VAR_2 & 1;
 }

 FUNC_2(&VAR_3->lock);
 return VAR_4;
}
