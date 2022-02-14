
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct adv76xx_state {int * regmap; TYPE_1__* info; } ;
struct TYPE_2__ {int page_mask; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int,int ) ;
 struct adv76xx_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, unsigned int VAR_3, u8 VAR_4)
{
 struct adv76xx_state *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6 = VAR_3 >> 8;

 if (VAR_6 >= VAR_0 || !(FUNC_0(VAR_6) & VAR_5->info->page_mask))
  return -VAR_1;

 VAR_3 &= 0xff;

 return FUNC_1(VAR_5->regmap[VAR_6], VAR_3, VAR_4);
}
