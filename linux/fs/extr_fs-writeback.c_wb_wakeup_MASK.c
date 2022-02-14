
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback {int work_lock; int dwork; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct bdi_writeback *VAR_2)
{
 FUNC_1(&VAR_2->work_lock);
 if (FUNC_3(VAR_0, &VAR_2->state))
  FUNC_0(VAR_1, &VAR_2->dwork, 0);
 FUNC_2(&VAR_2->work_lock);
}
