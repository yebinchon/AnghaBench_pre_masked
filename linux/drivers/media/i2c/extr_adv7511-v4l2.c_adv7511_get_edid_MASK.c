
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_edid {scalar_t__ pad; int start_block; int blocks; int edid; int reserved; } ;
struct TYPE_2__ {int segments; int * data; } ;
struct adv7511_state {TYPE_1__ edid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct adv7511_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, struct v4l2_edid *VAR_3)
{
 struct adv7511_state *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_3->reserved, 0, sizeof(VAR_3->reserved));

 if (VAR_3->pad != 0)
  return -VAR_0;

 if (VAR_3->start_block == 0 && VAR_3->blocks == 0) {
  VAR_3->blocks = VAR_4->edid.segments * 2;
  return 0;
 }

 if (VAR_4->edid.segments == 0)
  return -VAR_1;

 if (VAR_3->start_block >= VAR_4->edid.segments * 2)
  return -VAR_0;

 if (VAR_3->start_block + VAR_3->blocks > VAR_4->edid.segments * 2)
  VAR_3->blocks = VAR_4->edid.segments * 2 - VAR_3->start_block;

 FUNC_1(VAR_3->edid, &VAR_4->edid.data[VAR_3->start_block * 128],
   128 * VAR_3->blocks);

 return 0;
}
