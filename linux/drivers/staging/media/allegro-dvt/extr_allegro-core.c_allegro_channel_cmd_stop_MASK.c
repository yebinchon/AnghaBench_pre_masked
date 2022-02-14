
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct allegro_dev {int v4l2_dev; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct allegro_channel {int mcu_channel_id; TYPE_1__ fh; struct allegro_dev* dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct allegro_channel*,struct vb2_v4l2_buffer*,int ) ;
 int FUNC_1 (struct allegro_channel*) ;
 int FUNC_2 (struct allegro_channel*,int const) ;
 int VAR_2 ;
 int FUNC_3 (int,int ,int *,char*,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct allegro_channel *VAR_3)
{
 struct allegro_dev *VAR_4 = VAR_3->dev;
 struct vb2_v4l2_buffer *VAR_5;

 switch (FUNC_1(VAR_3)) {
 case 130:
 case 128:
  return -VAR_0;
 case 129:
  FUNC_2(VAR_3, 130);
  break;
 default:
  return 0;
 }


 if (FUNC_5(VAR_3->fh.m2m_ctx) != 0) {
  FUNC_3(1, VAR_2, &VAR_4->v4l2_dev,
    "channel %d: CMD_STOP: continue encoding src buffers\n",
    VAR_3->mcu_channel_id);
  return 0;
 }


 VAR_5 = FUNC_4(VAR_3->fh.m2m_ctx);
 if (VAR_5) {
  FUNC_3(1, VAR_2, &VAR_4->v4l2_dev,
    "channel %d: CMD_STOP: signaling EOS\n",
    VAR_3->mcu_channel_id);
  FUNC_0(VAR_3, VAR_5, VAR_1);
  return 0;
 }





 FUNC_3(1, VAR_2, &VAR_4->v4l2_dev,
   "channel %d: CMD_STOP: wait for CAPTURE buffer to signal EOS\n",
   VAR_3->mcu_channel_id);
 FUNC_2(VAR_3, 128);

 return 0;
}
