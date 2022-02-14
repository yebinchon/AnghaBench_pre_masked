
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; int drv_priv; } ;
struct s5p_mfc_dev {scalar_t__ curr_ctx; int mfc_ops; scalar_t__ hw_lock; } ;
struct s5p_mfc_ctx {scalar_t__ state; scalar_t__ num; scalar_t__ src_bufs_cnt; scalar_t__ pb_count; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct s5p_mfc_ctx* FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (int ,int ,struct s5p_mfc_dev*) ;
 int FUNC_5 (struct s5p_mfc_ctx*,int ,int ) ;
 int FUNC_6 (struct s5p_mfc_ctx*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct vb2_queue *VAR_5, unsigned int VAR_6)
{
 struct s5p_mfc_ctx *VAR_7 = FUNC_1(VAR_5->drv_priv);
 struct s5p_mfc_dev *VAR_8 = VAR_7->dev;

 if (FUNC_0(VAR_8) &&
   (VAR_5->type == VAR_3)) {

  if ((VAR_7->state == VAR_1) &&
   (VAR_8->curr_ctx == VAR_7->num) && VAR_8->hw_lock) {
   FUNC_5(VAR_7,
      VAR_2,
      0);
  }

  if (VAR_7->src_bufs_cnt < VAR_7->pb_count) {
   FUNC_2("Need minimum %d OUTPUT buffers\n",
     VAR_7->pb_count);
   return -VAR_0;
  }
 }


 if (FUNC_3(VAR_7))
  FUNC_6(VAR_7);
 FUNC_4(VAR_8->mfc_ops, VAR_4, VAR_8);

 return 0;
}
