
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vicodec_q_data {int sequence; } ;
struct vicodec_ctx {int is_enc; } ;
struct vb2_v4l2_buffer {int flags; scalar_t__ sequence; int vb2_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vicodec_q_data* FUNC_0 (struct vicodec_ctx*,int ) ;
 int FUNC_1 (struct vb2_v4l2_buffer const*,struct vb2_v4l2_buffer*,int) ;
 int FUNC_2 (struct vb2_v4l2_buffer*,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct vb2_v4l2_buffer *VAR_3,
       const struct vb2_v4l2_buffer *VAR_4,
       struct vicodec_ctx *VAR_5)
{
 struct vicodec_q_data *VAR_6 = FUNC_0(VAR_5,
        VAR_1);

 FUNC_3(&VAR_3->vb2_buf, 0, 0);
 VAR_3->sequence = VAR_6->sequence++;

 FUNC_1(VAR_4, VAR_3, !VAR_5->is_enc);
 VAR_3->flags |= VAR_0;
 FUNC_2(VAR_3, VAR_2);
}
