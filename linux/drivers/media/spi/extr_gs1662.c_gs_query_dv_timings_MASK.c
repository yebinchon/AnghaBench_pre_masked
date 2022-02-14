
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct gs {int pdev; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (int,struct v4l2_dv_timings*) ;
 struct gs* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_9,
   struct v4l2_dv_timings *VAR_10)
{
 struct gs *VAR_11 = FUNC_2(VAR_9);
 struct v4l2_dv_timings VAR_12;
 u16 VAR_13, VAR_14;
 int VAR_15;

 if (VAR_11->enabled)
  return -VAR_0;





 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  FUNC_0(VAR_11->pdev, VAR_7 + VAR_14, &VAR_13);
  if (VAR_13)
   break;
 }


 if (VAR_14 >= 4)
  return -VAR_2;

 FUNC_0(VAR_11->pdev, VAR_8, &VAR_13);
 if (!(VAR_13 & VAR_4) || !(VAR_13 & VAR_6))
  return -VAR_1;
 if (!(VAR_13 & VAR_5))
  return -VAR_3;

 VAR_15 = FUNC_1(VAR_13, &VAR_12);

 if (VAR_15 < 0)
  return VAR_15;

 *VAR_10 = VAR_12;
 return 0;
}
