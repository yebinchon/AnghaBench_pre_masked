
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct adv76xx_state {int * regmap; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct adv76xx_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static inline int FUNC_2(struct v4l2_subdev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct adv76xx_state *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_4->regmap[VAR_0], VAR_2, VAR_3);
}
