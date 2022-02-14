
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {int cgcdiv; int audclk_freq; scalar_t__ apll; scalar_t__ ucgc; scalar_t__ double_asclk; scalar_t__ crystal_freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct saa711x_state *VAR_10 = FUNC_1(VAR_7);

 if (VAR_8 != VAR_2 && VAR_8 != VAR_1)
  return -VAR_0;
 VAR_10->crystal_freq = VAR_8;
 VAR_10->double_asclk = VAR_9 & VAR_5;
 VAR_10->cgcdiv = (VAR_9 & VAR_4) ? 3 : 4;
 VAR_10->ucgc = VAR_9 & VAR_6;
 VAR_10->apll = VAR_9 & VAR_3;
 FUNC_0(VAR_7, VAR_10->audclk_freq);
 return 0;
}
