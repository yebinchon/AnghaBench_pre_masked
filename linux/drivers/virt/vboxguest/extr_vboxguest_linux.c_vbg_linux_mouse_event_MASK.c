
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vbg_dev {int input; TYPE_1__* mouse_status_req; } ;
struct TYPE_2__ {scalar_t__ pointer_pos_y; scalar_t__ pointer_pos_x; scalar_t__ mouse_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vbg_dev*,TYPE_1__*) ;

void FUNC_3(struct vbg_dev *VAR_2)
{
 int VAR_3;


 VAR_2->mouse_status_req->mouse_features = 0;
 VAR_2->mouse_status_req->pointer_pos_x = 0;
 VAR_2->mouse_status_req->pointer_pos_y = 0;
 VAR_3 = FUNC_2(VAR_2, VAR_2->mouse_status_req);
 if (VAR_3 >= 0) {
  FUNC_0(VAR_2->input, VAR_0,
     VAR_2->mouse_status_req->pointer_pos_x);
  FUNC_0(VAR_2->input, VAR_1,
     VAR_2->mouse_status_req->pointer_pos_y);
  FUNC_1(VAR_2->input);
 }
}
