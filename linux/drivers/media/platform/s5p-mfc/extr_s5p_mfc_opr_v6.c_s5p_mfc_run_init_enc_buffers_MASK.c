
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int curr_ctx; } ;
struct s5p_mfc_ctx {int state; int num; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct s5p_mfc_ctx*) ;

__attribute__((used)) static inline int FUNC_2(struct s5p_mfc_ctx *VAR_1)
{
 struct s5p_mfc_dev *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_2->curr_ctx = VAR_1->num;
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_0("Failed to alloc frame mem.\n");
  VAR_1->state = VAR_0;
 }
 return VAR_3;
}
