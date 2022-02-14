
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct mt9v011 {int global_gain; int blue_bal; int red_bal; int exposure; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;
 struct mt9v011* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_5)
{
 struct mt9v011 *VAR_6 = FUNC_2(VAR_5);
 u16 VAR_7, VAR_8, VAR_9;
 u16 VAR_10;
 s16 VAR_11;

 VAR_10 = VAR_6->exposure;

 VAR_7 = FUNC_0(VAR_6->global_gain);

 VAR_11 = VAR_6->global_gain;
 VAR_11 += (VAR_6->blue_bal * VAR_6->global_gain / (1 << 7));
 VAR_8 = FUNC_0(VAR_11);

 VAR_11 = VAR_6->global_gain;
 VAR_11 += (VAR_6->red_bal * VAR_6->global_gain / (1 << 7));
 VAR_9 = FUNC_0(VAR_11);

 FUNC_1(VAR_5, VAR_1, VAR_7);
 FUNC_1(VAR_5, VAR_4, VAR_7);
 FUNC_1(VAR_5, VAR_2, VAR_8);
 FUNC_1(VAR_5, VAR_3, VAR_9);
 FUNC_1(VAR_5, VAR_0, VAR_10);
}
