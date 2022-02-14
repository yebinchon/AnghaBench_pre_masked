
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_vp8_frame_header {int version; } ;
struct hantro_dev {int dummy; } ;
struct hantro_ctx {struct hantro_dev* dev; } ;
struct TYPE_3__ {scalar_t__ base; } ;


 int FUNC_0 (struct hantro_dev*,TYPE_1__*,int ) ;
 int ** VAR_0 ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void FUNC_1(struct hantro_ctx *VAR_2,
      const struct v4l2_ctrl_vp8_frame_header *VAR_3)
{
 struct hantro_dev *VAR_4 = VAR_2->dev;
 int VAR_5, VAR_6;

 if ((VAR_3->version & 0x03) != 0)
  return;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
   if (VAR_1[VAR_5][VAR_6].base != 0)
    FUNC_0(VAR_4,
       &VAR_1[VAR_5][VAR_6],
       VAR_0[VAR_5][VAR_6]);
  }
 }
}
