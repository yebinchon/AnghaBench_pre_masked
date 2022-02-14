
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int curr_ctx; int condlock; int ctx_work_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int,int *) ;

int FUNC_3(struct s5p_mfc_dev *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2->condlock, VAR_3);
 VAR_4 = VAR_2->curr_ctx;
 do {
  VAR_4 = (VAR_4 + 1) % VAR_1;
  if (VAR_4 == VAR_2->curr_ctx) {
   if (!FUNC_2(VAR_4, &VAR_2->ctx_work_bits))
    VAR_4 = -VAR_0;
   break;
  }
 } while (!FUNC_2(VAR_4, &VAR_2->ctx_work_bits));
 FUNC_1(&VAR_2->condlock, VAR_3);

 return VAR_4;
}
