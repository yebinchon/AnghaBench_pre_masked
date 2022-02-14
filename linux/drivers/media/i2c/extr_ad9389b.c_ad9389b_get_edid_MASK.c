
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_edid {scalar_t__ pad; int blocks; int start_block; int edid; } ;
struct TYPE_2__ {int segments; int * data; } ;
struct ad9389b_state {TYPE_1__ edid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ad9389b_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4, struct v4l2_edid *VAR_5)
{
 struct ad9389b_state *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->pad != 0)
  return -VAR_1;
 if (VAR_5->blocks == 0 || VAR_5->blocks > 256)
  return -VAR_1;
 if (!VAR_6->edid.segments) {
  FUNC_2(1, VAR_3, VAR_4, "EDID segment 0 not found\n");
  return -VAR_2;
 }
 if (VAR_5->start_block >= VAR_6->edid.segments * 2)
  return -VAR_0;
 if (VAR_5->blocks + VAR_5->start_block >= VAR_6->edid.segments * 2)
  VAR_5->blocks = VAR_6->edid.segments * 2 - VAR_5->start_block;
 FUNC_1(VAR_5->edid, &VAR_6->edid.data[VAR_5->start_block * 128],
        128 * VAR_5->blocks);
 return 0;
}
