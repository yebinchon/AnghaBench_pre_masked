
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_8__ {scalar_t__ width; scalar_t__ height; } ;
struct vivid_dev {scalar_t__ field_cap; scalar_t__ field_out; int* std_cap; size_t input; int std_out; TYPE_3__* fmt_out; TYPE_2__* fmt_cap; TYPE_1__ sink_rect; TYPE_4__ src_rect; } ;
struct TYPE_7__ {scalar_t__ fourcc; } ;
struct TYPE_6__ {scalar_t__ fourcc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vivid_dev*) ;
 scalar_t__ FUNC_1 (struct vivid_dev*) ;
 scalar_t__ FUNC_2 (struct vivid_dev*) ;
 scalar_t__ FUNC_3 (struct vivid_dev*) ;

bool FUNC_4(struct vivid_dev *VAR_3)
{
 if (VAR_3->src_rect.width != VAR_3->sink_rect.width ||
     VAR_3->src_rect.height != VAR_3->sink_rect.height)
  return 0;
 if (VAR_3->fmt_cap->fourcc != VAR_3->fmt_out->fourcc)
  return 0;
 if (VAR_3->field_cap != VAR_3->field_out)
  return 0;




 if (VAR_3->field_cap == VAR_1 ||
     VAR_3->field_cap == VAR_0)
  return 0;
 if (FUNC_2(VAR_3) && FUNC_3(VAR_3)) {
  if (!(VAR_3->std_cap[VAR_3->input] & VAR_2) !=
      !(VAR_3->std_out & VAR_2))
   return 0;
  return 1;
 }
 if (FUNC_0(VAR_3) && FUNC_1(VAR_3))
  return 1;
 return 0;
}
