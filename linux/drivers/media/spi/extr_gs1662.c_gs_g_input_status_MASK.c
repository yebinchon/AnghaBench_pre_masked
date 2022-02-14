
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct gs {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 struct gs* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_10, u32 *VAR_11)
{
 struct gs *VAR_12 = FUNC_1(VAR_10);
 u16 VAR_13, VAR_14;
 int VAR_15;





 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  VAR_15 = FUNC_0(VAR_12->pdev,
           VAR_3 + VAR_14, &VAR_13);
  if (VAR_13)
   break;
  if (VAR_15) {
   *VAR_11 = VAR_6;
   return VAR_15;
  }
 }


 if (VAR_14 >= 4)
  *VAR_11 |= VAR_7;

 VAR_15 = FUNC_0(VAR_12->pdev, VAR_4, &VAR_13);
 if (!(VAR_13 & VAR_0))
  *VAR_11 |= VAR_5;
 if (!(VAR_13 & VAR_2))
  *VAR_11 |= VAR_9;
 if (!(VAR_13 & VAR_1))
  *VAR_11 |= VAR_8;

 return VAR_15;
}
