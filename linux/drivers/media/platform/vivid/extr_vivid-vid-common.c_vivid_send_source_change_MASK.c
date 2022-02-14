
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vivid_dev {unsigned int num_inputs; unsigned int* input_type; int vbi_cap_dev; scalar_t__ has_vbi_cap; int vid_cap_dev; scalar_t__ has_vid_cap; } ;
struct TYPE_3__ {int changes; } ;
struct TYPE_4__ {TYPE_1__ src_change; } ;
struct v4l2_event {unsigned int id; TYPE_2__ u; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct v4l2_event*) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct vivid_dev *VAR_2, unsigned VAR_3)
{
 struct v4l2_event VAR_4 = {
  .type = VAR_0,
  .u.src_change.changes = VAR_1,
 };
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_inputs; VAR_5++) {
  VAR_4.id = VAR_5;
  if (VAR_2->input_type[VAR_5] == VAR_3) {
   if (FUNC_1(&VAR_2->vid_cap_dev) && VAR_2->has_vid_cap)
    FUNC_0(&VAR_2->vid_cap_dev, &VAR_4);
   if (FUNC_1(&VAR_2->vbi_cap_dev) && VAR_2->has_vbi_cap)
    FUNC_0(&VAR_2->vbi_cap_dev, &VAR_4);
  }
 }
}
