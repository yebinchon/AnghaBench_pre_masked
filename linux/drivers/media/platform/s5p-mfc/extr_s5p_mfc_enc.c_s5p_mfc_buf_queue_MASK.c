
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; int drv_priv; } ;
struct vb2_buffer {size_t index; struct vb2_queue* vb2_queue; } ;
struct s5p_mfc_dev {int mfc_ops; int irqlock; } ;
struct s5p_mfc_ctx {scalar_t__ state; int src_queue_cnt; int src_queue; struct s5p_mfc_buf* src_bufs; int dst_queue_cnt; int dst_queue; struct s5p_mfc_buf* dst_bufs; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_buf {int list; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct s5p_mfc_ctx*) ;
 struct s5p_mfc_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct s5p_mfc_ctx*) ;
 int FUNC_5 (int ,int ,struct s5p_mfc_dev*) ;
 int FUNC_6 (struct s5p_mfc_ctx*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int VAR_5 ;
 int FUNC_9 (struct vb2_buffer*,int ) ;

__attribute__((used)) static void FUNC_10(struct vb2_buffer *VAR_6)
{
 struct vb2_queue *VAR_7 = VAR_6->vb2_queue;
 struct s5p_mfc_ctx *VAR_8 = FUNC_1(VAR_7->drv_priv);
 struct s5p_mfc_dev *VAR_9 = VAR_8->dev;
 unsigned long VAR_10;
 struct s5p_mfc_buf *VAR_11;

 if (VAR_8->state == VAR_0) {
  FUNC_9(VAR_6, VAR_4);
  FUNC_0(VAR_8);
  return;
 }
 if (VAR_7->type == VAR_2) {
  VAR_11 = &VAR_8->dst_bufs[VAR_6->index];
  VAR_11->flags &= ~VAR_1;

  FUNC_7(&VAR_9->irqlock, VAR_10);
  FUNC_2(&VAR_11->list, &VAR_8->dst_queue);
  VAR_8->dst_queue_cnt++;
  FUNC_8(&VAR_9->irqlock, VAR_10);
 } else if (VAR_7->type == VAR_3) {
  VAR_11 = &VAR_8->src_bufs[VAR_6->index];
  VAR_11->flags &= ~VAR_1;
  FUNC_7(&VAR_9->irqlock, VAR_10);
  FUNC_2(&VAR_11->list, &VAR_8->src_queue);
  VAR_8->src_queue_cnt++;
  FUNC_8(&VAR_9->irqlock, VAR_10);
 } else {
  FUNC_3("unsupported buffer type (%d)\n", VAR_7->type);
 }
 if (FUNC_4(VAR_8))
  FUNC_6(VAR_8);
 FUNC_5(VAR_9->mfc_ops, VAR_5, VAR_9);
}
