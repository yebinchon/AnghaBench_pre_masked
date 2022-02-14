
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {scalar_t__ sequence; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct coda_ctx {int bit_stream_param; scalar_t__ qsequence; TYPE_1__ fh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct coda_ctx*,struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct coda_ctx *VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3;







 if (!(VAR_2->bit_stream_param & VAR_0))
  return;

 VAR_3 = FUNC_1(VAR_2->fh.m2m_ctx);
 VAR_3->sequence = VAR_2->qsequence - 1;

 FUNC_0(VAR_2, VAR_3, VAR_1);
}
