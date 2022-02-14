
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_hw_s {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;

int FUNC_1(struct aq_hw_s *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_0(&VAR_4->flags, VAR_1)) {
  VAR_5 = -VAR_3;
  goto err_exit;
 }
 if (FUNC_0(&VAR_4->flags, VAR_0)) {
  VAR_5 = -VAR_2;
  goto err_exit;
 }

err_exit:
 return VAR_5;
}
