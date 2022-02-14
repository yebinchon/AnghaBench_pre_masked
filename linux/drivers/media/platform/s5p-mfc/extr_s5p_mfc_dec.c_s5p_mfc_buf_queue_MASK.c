
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; int drv_priv; } ;
struct vb2_buffer {size_t index; struct vb2_queue* vb2_queue; } ;
struct s5p_mfc_dev {int mfc_ops; int irqlock; } ;
struct s5p_mfc_ctx {int dst_queue_cnt; int dst_queue; int dec_dst_flag; struct s5p_mfc_buf* dst_bufs; int src_queue_cnt; int src_queue; struct s5p_mfc_buf* src_bufs; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_buf {int list; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct s5p_mfc_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (int ,int ,struct s5p_mfc_dev*) ;
 int FUNC_5 (size_t,int *) ;
 int FUNC_6 (struct s5p_mfc_ctx*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(struct vb2_buffer *VAR_4)
{
 struct vb2_queue *VAR_5 = VAR_4->vb2_queue;
 struct s5p_mfc_ctx *VAR_6 = FUNC_0(VAR_5->drv_priv);
 struct s5p_mfc_dev *VAR_7 = VAR_6->dev;
 unsigned long VAR_8;
 struct s5p_mfc_buf *VAR_9;

 if (VAR_5->type == VAR_2) {
  VAR_9 = &VAR_6->src_bufs[VAR_4->index];
  VAR_9->flags &= ~VAR_0;
  FUNC_7(&VAR_7->irqlock, VAR_8);
  FUNC_1(&VAR_9->list, &VAR_6->src_queue);
  VAR_6->src_queue_cnt++;
  FUNC_8(&VAR_7->irqlock, VAR_8);
 } else if (VAR_5->type == VAR_1) {
  VAR_9 = &VAR_6->dst_bufs[VAR_4->index];
  VAR_9->flags &= ~VAR_0;

  FUNC_7(&VAR_7->irqlock, VAR_8);
  FUNC_5(VAR_4->index, &VAR_6->dec_dst_flag);
  FUNC_1(&VAR_9->list, &VAR_6->dst_queue);
  VAR_6->dst_queue_cnt++;
  FUNC_8(&VAR_7->irqlock, VAR_8);
 } else {
  FUNC_2("Unsupported buffer type (%d)\n", VAR_5->type);
 }
 if (FUNC_3(VAR_6))
  FUNC_6(VAR_6);
 FUNC_4(VAR_7->mfc_ops, VAR_3, VAR_7);
}
