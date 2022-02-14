
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int lock; struct v4l2_subdev sd; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tda1997x_state*,int*) ;
 int FUNC_4 (struct tda1997x_state*,int*) ;
 int FUNC_5 (struct tda1997x_state*,int*) ;
 int FUNC_6 (struct tda1997x_state*,int*) ;
 int FUNC_7 (struct tda1997x_state*,int*) ;
 int FUNC_8 (struct tda1997x_state*,int*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 struct tda1997x_state *VAR_10 = VAR_9;
 struct v4l2_subdev *VAR_11 = &VAR_10->sd;
 u8 VAR_12;

 FUNC_1(&VAR_10->lock);
 do {

  VAR_12 = FUNC_0(VAR_11, VAR_7);
  if (VAR_12 == 0)
   break;


  if (VAR_12 & VAR_5)
   FUNC_8(VAR_10, &VAR_12);

  else if (VAR_12 & VAR_1)
   FUNC_4(VAR_10, &VAR_12);

  else if (VAR_12 & VAR_4)
   FUNC_7(VAR_10, &VAR_12);

  else if (VAR_12 & VAR_3)
   FUNC_6(VAR_10, &VAR_12);



  else if (VAR_12 & VAR_0)
   FUNC_3(VAR_10, &VAR_12);

  if (VAR_12 & VAR_2)
   FUNC_5(VAR_10, &VAR_12);
 } while (VAR_12 != 0);
 FUNC_2(&VAR_10->lock);

 return VAR_6;
}
