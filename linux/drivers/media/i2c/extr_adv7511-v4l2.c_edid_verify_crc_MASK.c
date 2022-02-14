
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int blocks; int * data; } ;
struct adv7511_state {TYPE_1__ edid; } ;


 int FUNC_0 (int *) ;
 struct adv7511_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static bool FUNC_2(struct v4l2_subdev *VAR_0, u32 VAR_1)
{
 struct adv7511_state *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3 = VAR_2->edid.blocks;
 u8 *VAR_4 = VAR_2->edid.data;

 if (!FUNC_0(&VAR_4[VAR_1 * 256]))
  return 0;
 if ((VAR_1 + 1) * 2 <= VAR_3)
  return FUNC_0(&VAR_4[VAR_1 * 256 + 128]);
 return 1;
}
