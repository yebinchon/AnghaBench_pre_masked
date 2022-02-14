
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int curr_ctx; } ;
struct s5p_mfc_ctx {scalar_t__ capture_state; int state; int num; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct s5p_mfc_ctx*) ;

__attribute__((used)) static inline int FUNC_2(struct s5p_mfc_ctx *VAR_3)
{
 struct s5p_mfc_dev *VAR_4 = VAR_3->dev;
 int VAR_5;




 if (VAR_3->capture_state != VAR_2) {
  FUNC_0("It seems that not all destination buffers were\n"
   "mmapped.MFC requires that all destination are mmapped\n"
   "before starting processing.\n");
  return -VAR_0;
 }

 VAR_4->curr_ctx = VAR_3->num;
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  FUNC_0("Failed to alloc frame mem.\n");
  VAR_3->state = VAR_1;
 }
 return VAR_5;
}
