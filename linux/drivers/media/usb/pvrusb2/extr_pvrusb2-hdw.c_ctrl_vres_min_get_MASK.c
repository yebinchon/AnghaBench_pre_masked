
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_2__* hdw; } ;
struct TYPE_4__ {TYPE_1__* hdw_desc; } ;
struct TYPE_3__ {scalar_t__ flag_has_cx25840; } ;



__attribute__((used)) static int FUNC_0(struct pvr2_ctrl *VAR_0,int *VAR_1)
{

 if (VAR_0->hdw->hdw_desc->flag_has_cx25840) {
  *VAR_1 = 75;
 } else {
  *VAR_1 = 17;
 }
 return 0;
}
