
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_dev {int mrpc_mutex; int alive; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct switchtec_dev *VAR_2)
{
 if (FUNC_0(&VAR_2->mrpc_mutex))
  return -VAR_0;

 if (!VAR_2->alive) {
  FUNC_1(&VAR_2->mrpc_mutex);
  return -VAR_1;
 }

 return 0;
}
