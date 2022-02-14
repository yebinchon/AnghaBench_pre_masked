
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_rect {int dummy; } ;
struct TYPE_4__ {struct v4l2_rect rect; } ;
struct camif_vp {TYPE_2__ out_frame; } ;
struct camif_dev {TYPE_1__* variant; } ;
struct TYPE_3__ {scalar_t__ ip_revision; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct camif_dev *VAR_1, struct camif_vp *VAR_2,
    struct v4l2_rect *VAR_3)
{

 if (VAR_1->variant->ip_revision == VAR_0) {
  *VAR_3 = VAR_2->out_frame.rect;
  return;
 }


}
