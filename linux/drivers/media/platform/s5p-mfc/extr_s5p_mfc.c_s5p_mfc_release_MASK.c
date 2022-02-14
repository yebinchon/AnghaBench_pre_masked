
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {scalar_t__ curr_ctx; scalar_t__ num_inst; int mfc_mutex; int ** ctx; int watchdog_timer; int hw_lock; } ;
struct s5p_mfc_ctx {scalar_t__ state; scalar_t__ num; int fh; int vq_dst; int vq_src; struct s5p_mfc_dev* dev; } ;
struct file {int private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct s5p_mfc_ctx*) ;
 int FUNC_2 (int *) ;
 struct s5p_mfc_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct s5p_mfc_ctx*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct s5p_mfc_dev*,struct s5p_mfc_ctx*) ;
 int FUNC_14 (struct s5p_mfc_ctx*) ;
 int FUNC_15 (struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct file *VAR_2)
{
 struct s5p_mfc_ctx *VAR_3 = FUNC_3(VAR_2->private_data);
 struct s5p_mfc_dev *VAR_4 = VAR_3->dev;


 FUNC_6();
 if (VAR_4)
  FUNC_9(&VAR_4->mfc_mutex);
 FUNC_19(&VAR_3->vq_src);
 FUNC_19(&VAR_3->vq_dst);
 if (VAR_4) {
  FUNC_12();


  FUNC_1(VAR_3);




  if (VAR_3->state != VAR_0 && VAR_3->state != VAR_1) {
   FUNC_5(2, "Has to free instance\n");
   FUNC_13(VAR_4, VAR_3);
  }

  if (VAR_4->curr_ctx == VAR_3->num)
   FUNC_0(0, &VAR_4->hw_lock);
  VAR_4->num_inst--;
  if (VAR_4->num_inst == 0) {
   FUNC_5(2, "Last instance\n");
   FUNC_15(VAR_4);
   FUNC_2(&VAR_4->watchdog_timer);
   FUNC_11();
   if (FUNC_16() < 0)
    FUNC_8("Power off failed\n");
  } else {
   FUNC_5(2, "Shutting down clock\n");
   FUNC_11();
  }
 }
 if (VAR_4)
  VAR_4->ctx[VAR_3->num] = ((void*)0);
 FUNC_14(VAR_3);
 FUNC_17(&VAR_3->fh);

 if (VAR_4)
  FUNC_18(&VAR_3->fh);
 FUNC_4(VAR_3);
 FUNC_7();
 if (VAR_4)
  FUNC_10(&VAR_4->mfc_mutex);

 return 0;
}
