
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int drv_priv; } ;
struct s5p_mfc_dev {int mfc_ops; } ;
struct s5p_mfc_ctx {scalar_t__ state; int ctrl_handler; struct s5p_mfc_dev* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct s5p_mfc_ctx* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct s5p_mfc_ctx*) ;
 int FUNC_2 (int ,int ,struct s5p_mfc_dev*) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct vb2_queue *VAR_4, unsigned int VAR_5)
{
 struct s5p_mfc_ctx *VAR_6 = FUNC_0(VAR_4->drv_priv);
 struct s5p_mfc_dev *VAR_7 = VAR_6->dev;

 FUNC_4(&VAR_6->ctrl_handler);
 if (VAR_6->state == VAR_1 ||
  VAR_6->state == VAR_0)
  VAR_6->state = VAR_2;

 if (FUNC_1(VAR_6))
  FUNC_3(VAR_6);
 FUNC_2(VAR_7->mfc_ops, VAR_3, VAR_7);
 return 0;
}
