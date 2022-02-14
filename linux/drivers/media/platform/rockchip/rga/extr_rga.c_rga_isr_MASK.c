
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; TYPE_1__ vb2_buf; int timecode; } ;
struct rockchip_rga {int m2m_dev; struct rga_ctx* curr; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct rga_ctx {TYPE_2__ fh; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rockchip_rga*,int ,int,int) ;
 int FUNC_2 (struct rockchip_rga*,int ) ;
 int FUNC_3 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct rockchip_rga *VAR_6 = VAR_5;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_1) & 0xf;

 FUNC_1(VAR_6, VAR_1, VAR_7 << 4, 0xf << 4);

 if (VAR_7 & 0x04) {
  struct vb2_v4l2_buffer *VAR_8, *VAR_9;
  struct rga_ctx *VAR_10 = VAR_6->curr;

  FUNC_0(!VAR_10);

  VAR_6->curr = ((void*)0);

  VAR_8 = FUNC_6(VAR_10->fh.m2m_ctx);
  VAR_9 = FUNC_4(VAR_10->fh.m2m_ctx);

  FUNC_0(!VAR_8);
  FUNC_0(!VAR_9);

  VAR_9->timecode = VAR_8->timecode;
  VAR_9->vb2_buf.timestamp = VAR_8->vb2_buf.timestamp;
  VAR_9->flags &= ~VAR_2;
  VAR_9->flags |= VAR_8->flags & VAR_2;

  FUNC_3(VAR_8, VAR_3);
  FUNC_3(VAR_9, VAR_3);
  FUNC_5(VAR_6->m2m_dev, VAR_10->fh.m2m_ctx);
 }

 return VAR_0;
}
