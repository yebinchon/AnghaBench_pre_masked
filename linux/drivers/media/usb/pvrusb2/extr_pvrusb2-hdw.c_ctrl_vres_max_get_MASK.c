
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_1__* hdw; } ;
struct TYPE_2__ {int std_mask_cur; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pvr2_ctrl *VAR_1,int *VAR_2)
{

 if (VAR_1->hdw->std_mask_cur & VAR_0) {
  *VAR_2 = 480;
 } else {
  *VAR_2 = 576;
 }
 return 0;
}
