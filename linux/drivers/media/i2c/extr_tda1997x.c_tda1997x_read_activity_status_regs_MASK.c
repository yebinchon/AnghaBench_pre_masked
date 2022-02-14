
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static u8
FUNC_1(struct v4l2_subdev *VAR_8)
{
 u8 VAR_9, VAR_10 = 0;


 VAR_9 = FUNC_0(VAR_8, VAR_5);

 if ((VAR_9 & VAR_2) && !(VAR_9 & VAR_1))
  VAR_9 &= ~VAR_2;
 VAR_10 |= ((VAR_9 & VAR_2) >> 2);


 VAR_9 = FUNC_0(VAR_8, VAR_6);

 if ((VAR_9 & VAR_2) && !(VAR_9 & VAR_1))
  VAR_9 &= ~VAR_2;
 VAR_10 |= ((VAR_9 & VAR_2) >> 1);


 VAR_9 = FUNC_0(VAR_8, VAR_7);


 if ((VAR_9 & VAR_4) == VAR_0)
  VAR_10 |= VAR_3;
 else
  VAR_10 &= ~VAR_3;

 return VAR_10;
}
