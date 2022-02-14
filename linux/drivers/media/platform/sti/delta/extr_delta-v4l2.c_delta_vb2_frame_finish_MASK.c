
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int flags; int field; int vb2_buf; } ;
struct vb2_buffer {int timestamp; } ;
struct TYPE_2__ {int size; } ;
struct delta_frame {int flags; int field; int dts; TYPE_1__ info; } ;


 struct delta_frame* FUNC_0 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct vb2_buffer*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_1(VAR_0);
 struct delta_frame *VAR_2 = FUNC_0(VAR_1);


 FUNC_2(&VAR_1->vb2_buf, 0, VAR_2->info.size);
 VAR_0->timestamp = VAR_2->dts;
 VAR_1->field = VAR_2->field;
 VAR_1->flags = VAR_2->flags;
}
