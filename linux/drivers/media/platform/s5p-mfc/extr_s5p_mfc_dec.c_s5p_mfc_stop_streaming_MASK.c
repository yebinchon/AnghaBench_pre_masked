
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; int drv_priv; } ;
struct s5p_mfc_dev {scalar_t__ curr_ctx; int irqlock; int mfc_ops; scalar_t__ hw_lock; } ;
struct s5p_mfc_ctx {scalar_t__ state; scalar_t__ num; int dpb_flush_flag; scalar_t__ src_queue_cnt; int src_queue; int vq_src; scalar_t__ dec_dst_flag; scalar_t__ dst_queue_cnt; int dst_queue; int vq_dst; struct s5p_mfc_dev* dev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct s5p_mfc_dev*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct s5p_mfc_ctx* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_6 (struct s5p_mfc_ctx*,int ,int ) ;
 int FUNC_7 (struct s5p_mfc_ctx*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_10(struct vb2_queue *VAR_9)
{
 unsigned long VAR_10;
 struct s5p_mfc_ctx *VAR_11 = FUNC_2(VAR_9->drv_priv);
 struct s5p_mfc_dev *VAR_12 = VAR_11->dev;
 int VAR_13 = 0;

 FUNC_8(&VAR_12->irqlock, VAR_10);
 if ((VAR_11->state == VAR_1 ||
  VAR_11->state == VAR_3) &&
  VAR_12->curr_ctx == VAR_11->num && VAR_12->hw_lock) {
  VAR_11->state = VAR_0;
  FUNC_9(&VAR_12->irqlock, VAR_10);
  FUNC_6(VAR_11,
     VAR_5, 0);
  VAR_13 = 1;
  FUNC_8(&VAR_12->irqlock, VAR_10);
 }
 if (VAR_9->type == VAR_6) {
  FUNC_4(&VAR_11->dst_queue, &VAR_11->vq_dst);
  FUNC_0(&VAR_11->dst_queue);
  VAR_11->dst_queue_cnt = 0;
  VAR_11->dpb_flush_flag = 1;
  VAR_11->dec_dst_flag = 0;
  if (FUNC_1(VAR_12) && (VAR_11->state == VAR_3)) {
   VAR_11->state = VAR_2;
   FUNC_7(VAR_11);
   FUNC_5(VAR_12->mfc_ops, VAR_8, VAR_12);
   FUNC_9(&VAR_12->irqlock, VAR_10);
   if (FUNC_6(VAR_11,
    VAR_4, 0))
    FUNC_3("Err flushing buffers\n");
   FUNC_8(&VAR_12->irqlock, VAR_10);
  }
 } else if (VAR_9->type == VAR_7) {
  FUNC_4(&VAR_11->src_queue, &VAR_11->vq_src);
  FUNC_0(&VAR_11->src_queue);
  VAR_11->src_queue_cnt = 0;
 }
 if (VAR_13)
  VAR_11->state = VAR_3;
 FUNC_9(&VAR_12->irqlock, VAR_10);
}
