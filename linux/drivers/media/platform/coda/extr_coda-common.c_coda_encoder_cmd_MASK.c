
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int flags; } ;
struct v4l2_encoder_cmd {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct coda_ctx {int wakeup_mutex; int bit_stream_param; TYPE_1__ fh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,void*,struct v4l2_encoder_cmd*) ;
 int FUNC_1 (struct coda_ctx*) ;
 struct coda_ctx* FUNC_2 (void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, void *VAR_3,
       struct v4l2_encoder_cmd *VAR_4)
{
 struct coda_ctx *VAR_5 = FUNC_2(VAR_3);
 struct vb2_v4l2_buffer *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(&VAR_5->wakeup_mutex);
 VAR_6 = FUNC_5(VAR_5->fh.m2m_ctx);
 if (VAR_6) {





  VAR_6->flags |= VAR_1;
 } else {

  VAR_5->bit_stream_param |= VAR_0;






  FUNC_1(VAR_5);
 }
 FUNC_4(&VAR_5->wakeup_mutex);

 return 0;
}
