
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivid_dev {int ctrl_hdl_vbi_cap; } ;
struct TYPE_2__ {int req; } ;
struct vb2_buffer {TYPE_1__ req_obj; int vb2_queue; } ;


 int FUNC_0 (int ,int *) ;
 struct vivid_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vb2_buffer *VAR_0)
{
 struct vivid_dev *VAR_1 = FUNC_1(VAR_0->vb2_queue);

 FUNC_0(VAR_0->req_obj.req, &VAR_1->ctrl_hdl_vbi_cap);
}
