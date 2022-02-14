
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct hantro_ctx {TYPE_1__ fh; } ;


 struct vb2_v4l2_buffer* FUNC_0 (int ) ;

__attribute__((used)) static inline struct vb2_v4l2_buffer *
FUNC_1(struct hantro_ctx *VAR_0)
{
 return FUNC_0(VAR_0->fh.m2m_ctx);
}
