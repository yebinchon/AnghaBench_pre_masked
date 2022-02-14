
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct TYPE_6__ {int offset; TYPE_2__* planes; } ;
struct v4l2_buffer {scalar_t__ memory; unsigned int length; TYPE_3__ m; int type; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int mem_offset; } ;
struct TYPE_5__ {TYPE_1__ m; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct vb2_queue* FUNC_2 (struct v4l2_m2m_ctx*,int ) ;
 int FUNC_3 (struct vb2_queue*,struct v4l2_buffer*) ;

int FUNC_4(struct file *VAR_2, struct v4l2_m2m_ctx *VAR_3,
        struct v4l2_buffer *VAR_4)
{
 struct vb2_queue *VAR_5;
 int VAR_6 = 0;
 unsigned int VAR_7;

 VAR_5 = FUNC_2(VAR_3, VAR_4->type);
 VAR_6 = FUNC_3(VAR_5, VAR_4);


 if (VAR_4->memory == VAR_1 && !FUNC_1(VAR_5->type)) {
  if (FUNC_0(VAR_5->type)) {
   for (VAR_7 = 0; VAR_7 < VAR_4->length; ++VAR_7)
    VAR_4->m.planes[VAR_7].m.mem_offset
     += VAR_0;
  } else {
   VAR_4->m.offset += VAR_0;
  }
 }

 return VAR_6;
}
