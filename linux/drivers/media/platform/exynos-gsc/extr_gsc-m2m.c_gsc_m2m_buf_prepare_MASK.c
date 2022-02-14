
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {TYPE_2__* vb2_queue; } ;
struct gsc_frame {int * payload; TYPE_1__* fmt; } ;
struct gsc_ctx {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int num_planes; } ;


 scalar_t__ FUNC_0 (struct gsc_frame*) ;
 int FUNC_1 (struct gsc_frame*) ;
 int FUNC_2 (int ) ;
 struct gsc_frame* FUNC_3 (struct gsc_ctx*,int ) ;
 struct gsc_ctx* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct vb2_buffer*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct vb2_buffer *VAR_0)
{
 struct gsc_ctx *VAR_1 = FUNC_4(VAR_0->vb2_queue);
 struct gsc_frame *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1, VAR_0->vb2_queue->type);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 if (!FUNC_2(VAR_0->vb2_queue->type)) {
  for (VAR_3 = 0; VAR_3 < VAR_2->fmt->num_planes; VAR_3++)
   FUNC_5(VAR_0, VAR_3, VAR_2->payload[VAR_3]);
 }

 return 0;
}
