
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int condlock; int ctx_work_bits; } ;
struct s5p_mfc_ctx {int num; struct s5p_mfc_dev* dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct s5p_mfc_ctx *VAR_0)
{
 struct s5p_mfc_dev *VAR_1 = VAR_0->dev;

 FUNC_1(&VAR_1->condlock);
 FUNC_0(VAR_0->num, &VAR_1->ctx_work_bits);
 FUNC_2(&VAR_1->condlock);
}
