
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; int drv_priv; } ;
struct s5p_mfc_dev {scalar_t__ curr_ctx; int irqlock; scalar_t__ hw_lock; } ;
struct s5p_mfc_ctx {scalar_t__ state; scalar_t__ num; scalar_t__ src_queue_cnt; int src_queue; int vq_src; scalar_t__ dst_queue_cnt; int dst_queue; int vq_dst; struct s5p_mfc_dev* dev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct s5p_mfc_ctx*) ;
 struct s5p_mfc_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct s5p_mfc_ctx*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct vb2_queue *VAR_7)
{
 unsigned long VAR_8;
 struct s5p_mfc_ctx *VAR_9 = FUNC_2(VAR_7->drv_priv);
 struct s5p_mfc_dev *VAR_10 = VAR_9->dev;

 if ((VAR_9->state == VAR_2 ||
  VAR_9->state == VAR_3) &&
  VAR_10->curr_ctx == VAR_9->num && VAR_10->hw_lock) {
  VAR_9->state = VAR_0;
  FUNC_4(VAR_9, VAR_4,
       0);
 }
 VAR_9->state = VAR_1;
 FUNC_5(&VAR_10->irqlock, VAR_8);
 if (VAR_7->type == VAR_5) {
  FUNC_3(&VAR_9->dst_queue, &VAR_9->vq_dst);
  FUNC_0(&VAR_9->dst_queue);
  VAR_9->dst_queue_cnt = 0;
 }
 if (VAR_7->type == VAR_6) {
  FUNC_1(VAR_9);
  FUNC_3(&VAR_9->src_queue, &VAR_9->vq_src);
  FUNC_0(&VAR_9->src_queue);
  VAR_9->src_queue_cnt = 0;
 }
 FUNC_6(&VAR_10->irqlock, VAR_8);
}
