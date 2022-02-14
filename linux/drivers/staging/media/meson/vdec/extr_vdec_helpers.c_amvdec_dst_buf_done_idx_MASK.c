
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vb2_v4l2_buffer {int dummy; } ;
struct device {int dummy; } ;
struct amvdec_session {int * fw_idx_to_vb2_idx; int m2m_ctx; TYPE_1__* core; } ;
struct TYPE_2__ {struct device* dev_dec; } ;


 int FUNC_0 (struct amvdec_session*,struct vb2_v4l2_buffer*,size_t) ;
 int FUNC_1 (struct amvdec_session*,struct vb2_v4l2_buffer*,size_t,size_t,int) ;
 int FUNC_2 (struct device*,char*,size_t) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ,int ) ;

void FUNC_4(struct amvdec_session *VAR_0,
        u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct vb2_v4l2_buffer *VAR_4;
 struct device *VAR_5 = VAR_0->core->dev_dec;

 VAR_4 = FUNC_3(VAR_0->m2m_ctx,
           VAR_0->fw_idx_to_vb2_idx[VAR_1]);

 if (!VAR_4) {
  FUNC_2(VAR_5,
   "Buffer %u done but it doesn't exist in m2m_ctx\n",
   VAR_1);
  return;
 }

 if (VAR_2 != -1)
  FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3, 1);
 else
  FUNC_0(VAR_0, VAR_4, VAR_3);
}
