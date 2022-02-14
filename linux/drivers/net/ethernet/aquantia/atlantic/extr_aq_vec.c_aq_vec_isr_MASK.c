
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_vec_s {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct aq_vec_s *VAR_5 = VAR_4;
 int VAR_6 = 0;

 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto err_exit;
 }
 FUNC_0(&VAR_5->napi);

err_exit:
 return VAR_6 >= 0 ? VAR_1 : VAR_2;
}
