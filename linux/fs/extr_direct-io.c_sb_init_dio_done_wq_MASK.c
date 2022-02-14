
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct super_block {int s_dio_done_wq; int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct workqueue_struct* FUNC_0 (char*,int ,int ,int ) ;
 struct workqueue_struct* FUNC_1 (int *,int *,struct workqueue_struct*) ;
 int FUNC_2 (struct workqueue_struct*) ;

int FUNC_3(struct super_block *VAR_2)
{
 struct workqueue_struct *VAR_3;
 struct workqueue_struct *VAR_4 = FUNC_0("dio/%s",
            VAR_1, 0,
            VAR_2->s_id);
 if (!VAR_4)
  return -VAR_0;



 VAR_3 = FUNC_1(&VAR_2->s_dio_done_wq, ((void*)0), VAR_4);

 if (VAR_3)
  FUNC_2(VAR_4);
 return 0;
}
