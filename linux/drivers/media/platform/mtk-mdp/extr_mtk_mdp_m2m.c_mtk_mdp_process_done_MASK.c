
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; int timecode; TYPE_1__ vb2_buf; } ;
struct mtk_mdp_dev {int m2m_dev; } ;
struct mtk_mdp_ctx {int m2m_ctx; TYPE_2__* mdp_dev; } ;
struct TYPE_4__ {int m2m_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct mtk_mdp_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, int VAR_2)
{
 struct mtk_mdp_dev *VAR_3 = VAR_1;
 struct mtk_mdp_ctx *VAR_4;
 struct vb2_v4l2_buffer *VAR_5, *VAR_6;

 VAR_4 = FUNC_2(VAR_3->m2m_dev);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_4(VAR_4->m2m_ctx);
 VAR_6 = FUNC_1(VAR_4->m2m_ctx);

 VAR_6->vb2_buf.timestamp = VAR_5->vb2_buf.timestamp;
 VAR_6->timecode = VAR_5->timecode;
 VAR_6->flags &= ~VAR_0;
 VAR_6->flags |= VAR_5->flags & VAR_0;

 FUNC_0(VAR_5, VAR_2);
 FUNC_0(VAR_6, VAR_2);
 FUNC_3(VAR_4->mdp_dev->m2m_dev, VAR_4->m2m_ctx);
}
